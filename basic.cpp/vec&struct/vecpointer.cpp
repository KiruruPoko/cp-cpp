#include <bits/stdc++.h>
#include <vector> 
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,5};
    vector<int>::iterator it = vec.begin(); // pointer at vec[0]

    cout << "First element (using iterator): " << *it << endl;

    *it = 10; //modified first element through iterator
    cout << "Modified first element: " << vec[0] << endl;

    cout << "Elements in vector: ";
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
    {
        cout << *iter << " "; //iterator loop like array loop but pointer instead
    }
    cout << endl;
    it = vec.begin() + 2; //shift from vec[0] to vec[2]
    vec.insert(it, 20); // insert 20 before third element
    cout << "Elements in vector: ";
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
    {
        cout << *iter << " "; //iterator loop like array loop but pointer instead
    }
}