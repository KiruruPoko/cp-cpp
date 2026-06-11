#include <bits/stdc++.h>
// using namespace std;

void diamond(int n){
    // lower half
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++){
            std::cout << '*';
        }
        std::cout << "\n";
    }
    // upper half
    for (int i = 1; i <= n - 1; i++){
        for (int j = 1; j <= i; j++){
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * (n - i) - 1; k++){
            std::cout << '*';
        }
        std::cout << "\n";
    }
}

int main(){
    int line;
    std::cin >> line;
    diamond(line);
    return 0;
}