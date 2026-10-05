#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    vector<char> ans(201);
    for (int i = 1; i <= 200; i++){
        if (i % 2 == 0) ans[i] = 'T';
        else ans[i] = 'F';
    } 
    int i = 0; 
    while (i < 200){
        int t; 
        cin >> t;   
        cout << ans[2 * t] << flush;
        char response; 
        cin >> response; 
        if (response == 'F'){
            swap(ans[2 * t], ans[2 * t - 1]);
        }
        i++; 
        cout << response << flush; 
    }
}