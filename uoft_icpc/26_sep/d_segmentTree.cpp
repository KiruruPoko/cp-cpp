#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define all(x) begin(x), end(x)

struct SegmentTree {

    static constexpr int unit = 0;

    int f(int a, int b) {
        return max(a, b);
    }

    vector<int> s;
    int n;

    SegmentTree(int n = 0, int def = unit)
        : s(2 * n, def), n(n) {}

    void update(int pos, int val) {

        for (s[pos += n] = val; pos /= 2;)
            s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
    }

    int query(int b, int e) {

        int ra = unit, rb = unit;

        for (b += n, e += n; b < e; b /= 2, e /= 2) {

            if (b % 2)
                ra = f(ra, s[b++]);

            if (e % 2)
                rb = f(s[--e], rb);
        }

        return f(ra, rb);
    }

    int first_one() {

        int p = 1;

        while (p < n) {

            if (s[p * 2] == 1)
                p *= 2;
            else
                p = p * 2 + 1;
        }

        return p - n;
    }
};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {

        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> freq(n + 1);

        int mx = 0;

        for (int i = 0; i < n; i++) {

            cin >> v[i];

            mx = max(mx, v[i]);

            if (v[i] <= n)
                freq[v[i]]++;
        }

        /*
            Leaf x:

            1 -> x is missing from current prefix
            0 -> x is already in current prefix
        */

        SegmentTree st(n + 1, 1);

        /*
            Put mx first.
        */

        if (mx <= n) {
            st.update(mx, 0);
            freq[mx]--;
        }

        /*
            Every prefix has maximum mx.
        */

        ll ans = 1LL * n * mx;

        /*
            MEX of [mx].
        */

        int mex = st.first_one();

        /*
            Contribution of first prefix.
        */

        ans += mex;

        int used = 1;

        while (used < n) {

            /*
                We want to put the current MEX.

                If we don't have it, MEX can never increase again.
            */

            if (mex > n || freq[mex] == 0) {

                ans += 1LL * (n - used) * mex;

                break;
            }

            /*
                Put mex into the prefix.
            */

            freq[mex]--;

            if (freq[mex] == 0)
                st.update(mex, 0);

            used++;

            /*
                Find the new MEX.
            */

            mex = st.first_one();

            ans += mex;
        }

        cout << ans << '\n';
    }
}