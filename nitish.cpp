// #include <iostream>
// using namespace std;

// class person{
//     public:
//     string name;
//     string age;

//     // person(string name, string age){
//     //     this->name=name;
//     //     this->age=age;
//     // }

//     person(){
//         cout<<"i am a paret "<<"\n";
//     }
// };

// class student : public person{
//     public:
//     //name, age , rollno
//    int roll;

//    student(){
//     cout<<"i am a child";
//    }

//     void getinfo(){
//         cout<<"name:  "<<name<<"\n";
//         cout<<"age:  "<<age<<"\n";
//         cout<<"roll no:  "<<roll<<"\n";
//     }
// };

// int main(){
//     student s1;
//     s1.name = "nitish";
//     s1.age = "twenty";
//     s1.roll = 56 ;
//     s1.getinfo();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class student{
//     public:
//     string name;
//     string age;

// };

// class teacher {
//     public:
//     string subject;
//     double salary;
   

// };

// class TA :public student , public teacher{
  
// };

// int main(){
//    TA t1;
//    t1.name="nitish";
//    t1.age="seventy five";
//    t1.subject = "engineering";
//    cout<<t1.name<<"\n";
//    cout<<t1.age<<"\n";
//    cout<<t1.subject;

//     return 0;
// }


// # include<iostream>
// using namespace std;

// class print{
//     public:
//     void show(int x){
//         cout<<"x"<<x;
//     }


   
//     void show(char ch){
        
//         cout<<"char: "<<ch;
//     }
// };

// int main (){
//     print p1;
//     p1.show('R');
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class parent {
//     public:
//     void getinfo(){
//         cout<<" parent class ";
//     }
//     virtual void hello(){
//         cout<<"hello from parent class";
//     }
// };
// class child : public parent {
//     public:
//     void getinfo(){
//         cout<<"child class ";
//     }
//     void hello(){
//         cout<<"hello from child class";
//     }

// };

// int main (){
//     child c1;
//     c1.hello();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class shape{ // abstract class
//     virtual void draw()=0;//pure virtual function 
// };
// class circle : public shape{
//     public:
//     void draw(){
//         cout<<"draw a circle";
//     }

// };
// int main(){
//     circle c1;
//     c1.draw();
//     return 0;
// }
#include<iostream>
using namespace std;
void fun(){
    static int x=0;
    cout<<"x= "<<x<<"\n";
    x++;
}

int main(){
    fun();
    fun();
    fun();
}