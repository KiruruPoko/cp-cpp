#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n,m,k; 
    cin>>n>>m>>k; 
    vector<ll> v(n + 1); 
    for (int i=1; i<=n; i++) cin >> v[i];
    vector<array<int, 3>> updates(m);
    for (array<int, 3> &update: updates){
        cin >> update[0] >> update[1] >> update[2];
    }   
    vector<ll> s(m + 2);
    vector<ll> add(n + 2, 0);
    for (int i=0; i<k; i++){
        int x, y; 
        cin >> x >> y; 
        s[x]++;
        s[y + 1]--;
    }
    for (int i=1; i<=m; i++){
        s[i] += s[i - 1];
        add[updates[i - 1][0]] += s[i] * updates[i - 1][2];
        add[updates[i - 1][1] + 1] -= s[i] * updates[i - 1][2];
    }   
    for (int i=1; i<=n; i++){
        add[i] += add[i - 1];
        cout << v[i] + add[i] << ' ';
    }
    cout << '\n';
}
