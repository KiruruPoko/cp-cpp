#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int *ptr = arr; //pointer point at arr[0]
    int length = sizeof(arr)/sizeof(arr[0]); //calculate number elements
    //arr = 20 bytes / arr[0] = 4 bytes = 5 items
    cout << "Array elements: ";
    for (int i = 0; i < length; ++i){
        cout << *(ptr+i) << " "; 
    }

    return 0;
}