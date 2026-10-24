#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    int arr[n + 1]; 
    for (int i = 1; i <= n; i++){ 
        cin >> arr[i]; 
    }
    if (n % 2 != 0){
        for (int i = n; i >= 0; i -= 2){
            cout << arr[i] <<  " "; 
        }
        for (int i = 2; i <= n; i += 2){ 
            cout << arr[i] << " ";
        }
        cout << '\n'; 
    }
    if (n % 2 == 0){
        for (int i = n; i >= 1; i -= 2){
            cout << arr[i] <<  " "; 
        }
        for (int i = 1; i <= n; i += 2){ 
            cout << arr[i] << " "; 
        }
        cout << '\n'; 
    }
}
