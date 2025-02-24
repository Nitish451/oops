# Inheritence
* when propertised and member function of base class are passed on to the derived class 
* it is used for reusability.
```cpp

#include <iostream>
using namespace std;

class person{
    public:
    string name;
    string age;

    // person(string name, string age){
    //     this->name=name;
    //     this->age=age;
    // }

    person(){
        cout<<"i am a paret "<<"\n";
    }
};

class student : public person{
    public:
    //name, age , rollno
   int roll;

   student(){
    cout<<"i am a child";
   }

    void getinfo(){
        cout<<"name:  "<<name<<"\n";
        cout<<"age:  "<<age<<"\n";
        cout<<"roll no:  "<<roll<<"\n";
    }
};

int main(){
    student s1;
    s1.name = "nitish";
    s1.age = "twenty";
    s1.roll = 56 ;
    s1.getinfo();
    return 0;
}