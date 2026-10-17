#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

bool printed[200005] = {false};
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        int n; 
        cin >> n; 
        fill(printed, printed + n + 1, false);
        stack<int> docs; 
        vector<int> ans;
        string s; 
        cin >> s; 
        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                docs.push(i + 1);
            }
            else if (s[i] == '2'){
                if (!docs.empty()){
                    int d = docs.top();
                    docs.pop();
                    printed[d] = true;
                }
                else printed[i + 1] = true;
            }
            else if (s[i] == '3') printed[i + 1] = true; 
        }
        for (int i = 1; i <= n; i++){
            if (!printed[i]) ans.push_back(i); 
        } 
        cout << sz(ans) << '\n';
        for (auto &a: ans) cout << a << " ";
        cout << '\n';
    }
}