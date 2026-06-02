#include <bits/stdc++.h>
#include <vector> 
using namespace std;
void addElements(vector<int> &vec, int numElementsToAdd)
{
    int initialSize = vec.size();
    vec.resize(initialSize + numElementsToAdd);
    int *ptr = vec.data() + initialSize; //old vec + new size elements -> continue from last element

    for (int i = 0; i < numElementsToAdd; ++i){
        *(ptr+i) = initialSize + i;
    }
}

void printVector(const vector<int> &vec){
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int>myvec;
    for (int i = 0; i < 5; ++i){ //push_back some elements
        myvec.push_back(i);
    }
    cout << "Original vector: ";
    printVector(myvec);

    addElements(myvec, 5); // using addElements function to add elements
    cout << "After adding elements: ";
    printVector(myvec);

    return 0;
}