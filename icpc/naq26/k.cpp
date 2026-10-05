#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

// vector<int> possible = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 23, 34, 45, 56, 67, 78, 89, 123, 234, 345, 456, 567, 678, 789,
// 1234, 2345, 3456, 4567, 5678, 6789, 12345, 23456, 34567, 45678, 56789, 123456, 234567, 345678, 456789, 1234567, 2345678,
// 3456789, 12345678, 23456789, 123456789};

vector<int> generate(){
    vector<int> a;
    for (int i = 1; i <= 9; i++){
        int x = i; 
        while (true){
            a.emplace_back(x);
            int last = x % 10; 
            if (last == 9) break; 
            x = x * 10 + last + 1; 
        }
    }
    return a; 
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        auto possible = generate();
        sort(all(possible));
        auto it = lower_bound(all(possible), n);
        cout << *it << '\n';
    }
}