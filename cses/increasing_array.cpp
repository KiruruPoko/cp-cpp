#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num;
    cin >> num;
    vector<ll> arr(num);
    ll count = 0;
    for (int i = 0; i < num; i++){
        cin >> arr[i];
    } 
    for (int i = 1; i < arr.size(); i++){
        // cout << arr[i-1] << "\t" << arr[i] << endl;
        if (arr[i] < arr[i-1]) {
            count += abs(arr[i] - arr[i-1]);
            arr[i] += abs(arr[i] - arr[i-1]);
        }
        else count = count;
        // cout << count << endl;
    }
    cout << count << endl;

    return 0;
}