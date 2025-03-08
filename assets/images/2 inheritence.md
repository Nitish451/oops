# Inheritence
* *Allowing a class (called a subclass or derived class) to inherit properties and behavior from another class (called a superclass or base class), facilitating code reuse and creating a hierarchy of classes.
* when propertised and member function of base class are passed on to the derived class 
* it is used for reusability.
* private member are never inherite.

# Types of inheritance

### sigle-level inheritance(parent------>child, examle person student)
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
    student p;
    p.name = "nitish yadav";
    p.age = "tweenty three";
    p.roll = 34;
    p.getinfo();
    return 0;
}
```
* output 
i am a paret 
i am a child
name:  nitish yadav
age:  tweenty three
roll no:  34


``cpp


### multi-level inheritance(parent--parent-->child)

```cpp 
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
};

int main(){
    grandStudent s1;
    s1.name = "akanksha singh";
    s1.age = "tweenty three";
    s1.roll = 34;
    s1.resercharea = "defence";
    cout<<"name= "<<s1.name<<"\n";
    cout<<"age= "<<s1.age<<"\n";
    cout<<"roll= "<<s1.roll<<"\n";
    cout<<"resecharea= "<<s1.resercharea<<"\n";

    return 0;
}
```
* output
name= akanksha singh
age= tweenty three
roll= 34
resecharea= defence

# OR
```cpp
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
```
* output
enter namenitish
enter reserch areadegence
enter roll34
enter age33
name= nitish
roll= 34
age= 33

### multuple inheritence (parent       parent)
                          \             /
                           \   child   /
 ```cpp
#include <iostream>
using namespace std;

class student{
    public:
    string name;
    string age;

};

class teacher {
    public:
    string subject;
    double salary;
   

};

class TA :public student , public teacher{
  
};

int main(){
   TA t1;
   t1.name="nitish";
   t1.age="seventy five";
   t1.subject = "engineering";
   cout<<t1.name<<"\n";
   cout<<t1.age<<"\n";
   cout<<t1.subject;

    return 0;
}
```                          
### hierarchial inhetance (parent)   
                         /     \
                    child       child                          
```cpp

