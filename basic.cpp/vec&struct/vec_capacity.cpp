#include <bits/stdc++.h>
#include <vector> 
using namespace std;
int main()
{
    vector<int> vec; 
    vec.push_back(20);
    vec.push_back(100);
    vec.reserve(30);
    cout << "Size = " << vec.size() << "Cap = " << vec.capacity() << endl;
   // capacity = max memory that reserve for vector -> maximum number
    return 0;
}