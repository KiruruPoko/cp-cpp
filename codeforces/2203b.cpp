#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
	int tt;
	cin >> tt;
	while (tt--) {
        string s; 
        cin >> s;
        vector<int> v;
        int sum = 0;  
        int ans = 0;
        for (int i = 0; i < (int)s.length(); i++){
            int x = s[i] - '0'; 
            sum += x; 
            v.push_back(x - (i == 0));
        }
        sort(v.rbegin(), v.rend()); 
        for (int i = 0; i < (int)s.length(); i++){
            if (sum > 9) {
                sum -= v[i]; 
                ans++; 
            }
            else break; 
        }
        cout << ans << '\n'; 
    }
}