#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

struct planet{
    int J = 0; 
    int O = 0; 
    int I = 0; 
    planet operator+(const planet& other) const { 
        return {J + other.J, O + other.O, I + other.I};
    }
    planet operator-(const planet& other) const { 
        return {J - other.J, O - other.O, I - other.I};
    }
};
void solve(){
    int M, N, K; 
    cin >> M >> N >> K;  
    vector<string> area(M + 1);
    for (int i = 1; i <= M; i++) cin >> area[i];
    vector<vector<planet>> cum_sum(M + 1, vector<planet>(N + 1));
    for (int i = 1; i <= M; i++){
        for (int j = 1; j <= N; j++){
            if (area[i][j - 1] == 'J') cum_sum[i][j].J++; 
            else if (area[i][j - 1] == 'O') cum_sum[i][j].O++; 
            else cum_sum[i][j].I++; 

            cum_sum[i][j] = cum_sum[i][j] + cum_sum[i - 1][j] + cum_sum[i][j - 1] - cum_sum[i - 1][j - 1];
        }
    }   
    while (K--){
        int a, b, c, d; // lx, ny, rx, sy
        cin >> a >> b >> c >> d; 
        planet ans = cum_sum[c][d] - cum_sum[c][b - 1] - cum_sum[a - 1][d] + cum_sum[a - 1][b - 1];
        cout << ans.J << " " << ans.O << " " << ans.I << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt = 1; 
    // cin >> tt;
    while (tt--){
        solve();
    }
}