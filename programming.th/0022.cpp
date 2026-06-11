#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int line; 
    int n;
    // char star = '*';
    // char hyphen = '-';
    cin >> line; 
    if (line % 2 == 0) n = line - 1;
    else n = line; 
    int pos = ceil(n/2);
    int pos2 = 1e9; 


    for (int i = 1; i <= line; i++){
        for (int j = 1; j <= n; j++){
            cout << '-'; 
            if (i != 1 || i != n){
                if (j == pos2) cout << '*';
            }
            if (j == pos) cout << '*';
        }
        if (i < ceil(line / 2)){
            pos--; 
            pos2 = (2*i - 1);
        }
        else if (i > ceil(line / 2)){
            pos++; 
            pos2--;
        }
        cout << "\n";
    }
}
