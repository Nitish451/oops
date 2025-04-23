//without using constructor
// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     int rollno;
//     string vid;
// };
// class ug : public student{
//     public:
//     int fee;
//     string course;
//     void getdetails(string n, int r, string v, int f, string c){
//         name=n;
//          rollno=r;
//          vid=v;
//          fee=f;
//          course=c;
//     }
//     void display(){
//         cout<<"name: "<<name<<endl;
//         cout<<"roll no: "<<rollno<<endl;
//         cout<<"vid: "<<vid<<endl;
//         cout<<"fee: "<<fee<<endl;
//         cout<<"course: "<<course<<endl;

//     }
    
// };


// class pg : public student{
//     public:
//     int fee;
//     string course;
//     void getdetails(string n, int r, string v, int f, string c){
//          name=n;
//          rollno=r;
//          vid=v;
//          fee=f;
//          course=c;
//     }
//     void display(){
//         cout<<"name: "<<name<<endl;
//         cout<<"roll no: "<<rollno<<endl;
//         cout<<"vid: "<<vid<<endl;
//         cout<<"fee: "<<fee<<endl;
//         cout<<"course: "<<course<<endl;

//     }
    
// };
// int main(){
//     ug t;
// t.getdetails("nitish",45, "hey",4500,"vtech");
//     t.display();
//     cout<<"data of pg"<<endl;
//     pg h;
//     h.getdetails("amresh",48, "hey",9500,"netch");
//     h.display();
//     return 0;
// }

// with using constructor

// #include<iostream>
// using namespace std;
 
// class student{
//     public:
//     string name;
   
//     int rollno;
//     string vid;
//     student(string n, int r, string v){
//         name=n;
//         rollno=r;
//         vid=v;
//     }
// };
// class ug : public student{
//     public:
// int fee;
// string course;
//   ug(string n, int r, string v, int fee1, string c1): student(n, r, v) {
//     fee=fee1;
//     course=c1;
//   }
// void display(){
//   cout<<"name: "<<name<<endl;
//   cout<<"rollno: "<<rollno<<endl;
//   cout<<"vi: "<<vid<<endl;
//   cout<<"fee: "<<fee<<endl;
//   cout<<"course: "<<course<<endl;
// } 
// };


// class pg : public student{
//     public:
//     int fee;
//     string course;
//       pg(string n, int r, string v, int fee1, string c1): student(n, r, v) {
//         fee=fee1;
//         course=c1;
//       }
//     void display(){
//       cout<<"name: "<<name<<endl;
//       cout<<"rollno: "<<rollno<<endl;
//       cout<<"vi: "<<vid<<endl;
//       cout<<"fee: "<<fee<<endl;
//       cout<<"course: "<<course<<endl;
//     } 
// };

// int main(){
//     ug t("Nitish", 45, "harry", 45000, "BTech");
//     t.display();
//     cout<<" DATA ABOUT PG"<<endl;
//     pg f("amresh", 45, "tony", 45000, "mTech");
//     f.display();
//     return 0;
// }

// write a program create a class name A take datatype A,B and create anothe class B and dataype c theat inherti from base class;
# include<iostream>
using namespace std;

// class A{
//   public:
//   int a;
//   int b;
//   };
// class B: public A{
//   public:
//   int c, store;
  

//   void cal(int a,int b,int c){
//     // a=m;
//     // b=n;
//     // c=o;
//     store=a*b*c;
//     cout<<"multiplication will be: "<<store;
//   }
// };

// int main(){
//   B N;
//   N.cal(3,4,5);
//   return 0;
// }

