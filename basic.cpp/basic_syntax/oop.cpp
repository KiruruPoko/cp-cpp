#include <bits/stdc++.h>
using namespace std;

class BugClass
{
    public: /*public to setup variable value -> 
    save the value in private -> get the value as variable from private */
        BugClass(string z){
            setName(z);
        } //constructor -> call automatically as object no need to run again
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private: //public = can use outside the class, private = can't use.
        string name;
};

int main()
{
    BugClass bugobject("Tech Pause"); /*for calling function inside the class as object 
    -> object.function();*/
    cout << bugobject.getName();

    BugClass bugobject2("Yo");
    cout << bugobject2.getName();
    return 0;
}
