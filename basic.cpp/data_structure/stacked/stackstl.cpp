#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){
    stack<int> mystack;
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);

    cout << "The top element is: " << mystack.top() << endl;
    mystack.pop();
    cout << "After popping, the top element is: " << mystack.top() << endl;

    if (!mystack.empty()){
        cout << "The stack is not empty" << endl;
    }

    cout << "The size of stack is " << mystack.size() << endl;

    return 0;
}
