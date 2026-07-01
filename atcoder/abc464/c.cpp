#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
struct bird {
    int a;
    int d; 
    int b; 
};

bool compare(const bird& a, const bird& b){
    return a.d > b.d; 
}

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, j;
    cin >> n >> j;
    vector<bird> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i].a >> g[i].d >> g[i].b;
        if (g[i].d == 1) g[i].a = g[i].b;
    }
    // sort(g.begin(), g.end(), compare);
    int day = 1;
    while (j--){
        set<int> s;
        for (auto& f: g) {
            if ((int)f.d <= day) f.a = f.b;
            s.insert(f.a);
        }
        // cout << "Day: " << day << '\n';
        cout << s.size() << '\n';
        // for (int i = 0; i < n; i++) cout << g[i].a << " ";
        // for (auto &c: s) cout << c << " ";
        // cout << '\n';
        day++;
    }
    return 0;
}