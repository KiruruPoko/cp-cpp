//array but dynamic size can increase or decrease size 
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> vec; //create a vector of integers

    vec.push_back(10); //[] -> [10] work like np.append
    vec.push_back(20); // [10] -> [10,20]
    vec.push_back(30); // [10,20] -> [10,20,30]
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    vec.pop_back(); // remove last element in vector
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

}