#include <bits/stdc++.h> 
#include <vector>
using namespace std;
struct Student {
    string name;
    int age;
    float gpa;
};
int main(){
    vector<Student> students;

    students.push_back({"John Doe", 20, 3.5});
    students.push_back({"John Doe", 20, 3.5});
    students.push_back({"John Doe", 20, 3.5});

    for (const auto &student : students){ //loop in range vec
        cout << "Name: " << student.name << ", Age: " << student.age 
        << ", GPA: " << student.gpa << endl;
    }
}