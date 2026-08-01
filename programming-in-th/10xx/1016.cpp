#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n = 500; 
    double x = 0.000, y = 0.000;
    while (n--){
        string cmd; 
        cin >> cmd; 
        if (cmd == "*"){
            double ans = sqrt(x * x + y * y);
            cout << fixed << setprecision(3) << x << " " << y << '\n';
            cout << fixed << setprecision(3) << ans << '\n';
            break; 
        }
        int len = stoi(cmd); 
        string dir; 
        for (char c: cmd){
            if (isalpha(c)) dir.push_back(c);
        }
        if ((int)dir.length() == 1){
            if (dir == "N") y += len; 
            else if (dir == "E") x += len; 
            else if (dir == "S") y -= len; 
            else if (dir == "W") x -= len; 
        }
        else if ((int)dir.length() == 2){
            double d = len / sqrt(2); // cos sin 45
            if (dir == "NE") x += d, y += d; 
            else if (dir == "NW") x -= d, y += d; 
            else if (dir == "SE") x += d, y -= d; 
            else if (dir == "SW") x -= d, y -= d; 
        }
    }   
    return 0; 
}