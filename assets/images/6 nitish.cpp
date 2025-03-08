#include <iostream>
using namespace std;

class person{
    public:
    string name;
    string age;

};

class student : public person{
    public:
    //name, age , rollno
   int roll;

};

class grandStudent : public student{
    public:
    string resercharea;

    grandStudent(string name, string age, int roll, string resercharea){
        this->name=name;
        this->age=age;
        this->roll=roll;
        this->resercharea=resercharea;
    }

    void getinfo(){
        cout<<"name= "<<name<<endl;
        cout<<"roll= "<<roll<<endl;
        cout<<"age= "<<age<<endl;
        cout<<"resercharea= "<<resercharea<<endl;
    }
};

int main(){
    
    string n,a,res;
    int ro;
    cout<<"enter name";
    cin>>n;
    cout<<"enter reserch area";
    cin>>res;
    cout<<"enter roll";
    cin>>ro;
    cout<<"enter age";
    cin>>a;
    grandStudent s1(n,a,ro,res);
  s1.getinfo();

    return 0;
}
