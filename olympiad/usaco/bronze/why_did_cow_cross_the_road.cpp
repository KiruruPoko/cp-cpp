#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const double pi = 3.141592653589793;
const ll MOD = 1e9 + 7; 
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	string crossings;
	cin >> crossings;

	int crossing_pairs = 0;
	for (int a = 0; a < crossings.size(); a++) {
		for (int b = a + 1; b < crossings.size(); b++) {
			for (int c = b + 1; c < crossings.size(); c++) {
				for (int d = c + 1; d < crossings.size(); d++) {
					crossing_pairs += (crossings[a] == crossings[c] && crossings[b] == crossings[d]);
				}
			}
		}
	}
	cout << crossing_pairs << endl;
    return 0;
}
