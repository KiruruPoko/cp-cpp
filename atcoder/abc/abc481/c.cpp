#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);   
    int mex = 1; 
    unordered_map<string, int> acc; 
    int q; cin >> q; 
    while (q--){
        string name; 
        cin >> name; 
        if (acc.count(name)) cout << acc[name] << '\n';
        else { 
            cout << mex << '\n';
            acc[name] = mex; 
            mex++; 
        }
    }
}