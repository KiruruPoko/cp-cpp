#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

vector<int> ele;
vector<int> res;
void bt(){
    if (ele.empty()){
        for (int x: res) cout << x << " \n"[x == res.back()];
        exit(0);
    }
    for (int i = (int)ele.size() - 1; i >= 0; i--){
        int x = ele[i];
        
        if (res.empty() || abs(res.back() - x) != 1){
            ele.erase(ele.begin() + i);
            res.push_back(x);
            bt();
            res.pop_back();
            ele.insert(ele.begin() + i, x);
        }
    }
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; 
    cin >> n; 
    if (n == 2 || n == 3) cout << "NO SOLUTION" << '\n';
    else {
        for (int i = n; i >= 1; i--) ele.push_back(i);
        bt(); 
    }
    return 0;   
}