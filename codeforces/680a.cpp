#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> cards(5);
    multiset<int> ms;
    set<int> uniq;
    int sum = 0; 
    int max_sub = 0;
    for (int i = 0; i < 5; i++){
        cin >> cards[i];
        ms.insert(cards[i]);
        uniq.insert(cards[i]);
        sum += cards[i];
    }
    if (uniq.size() != 5){  
        for (auto &a: uniq){ 
            if (ms.count(a) > 1){
                if (ms.count(a) <= 3){
                    max_sub = max(a * (int)ms.count(a), max_sub);
                }
                else max_sub = max((a * 3), max_sub);
            }
            else continue;
        }
    }
    cout << sum - max_sub << '\n';
}