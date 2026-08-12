#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int arr[3000001];
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    unordered_map<int, int> freq; 
    int ans = -1; 
    int mx = 0; 
    for (int i = 1; i <= n; i++){
        int a; 
        cin >> a; 
        arr[i] = a; 
        freq[a]++; 
    }
    for (int i = 1; i <= n; i++){
        if (freq[arr[i]] == 1 && arr[i] > mx){
            mx = arr[i];
            ans = i;
        } 
    }
    cout << ans << '\n';
}