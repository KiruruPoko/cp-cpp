#include <bits/stdc++.h> 
using namespace std;
struct Employee { //collect various type of value in one class similar to oop
    string name;
    int age;
    float salary;
};
int main(){
    Employee ploy;
    ploy.name = "Ploy";
    ploy.age = 20;
    ploy.salary = 54000;
    cout << "Ploy salary is " << ploy.salary << endl;


}