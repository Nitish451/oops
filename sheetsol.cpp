// without using constructor
//  #include<iostream>
//  using namespace std;
//  class student{
//      public:
//      string name;
//      int rollno;
//      string vid;
//  };
//  class ug : public student{
//      public:
//      int fee;
//      string course;
//      void getdetails(string n, int r, string v, int f, string c){
//          name=n;
//           rollno=r;
//           vid=v;
//           fee=f;
//           course=c;
//      }
//      void display(){
//          cout<<"name: "<<name<<endl;
//          cout<<"roll no: "<<rollno<<endl;
//          cout<<"vid: "<<vid<<endl;
//          cout<<"fee: "<<fee<<endl;
//          cout<<"course: "<<course<<endl;

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
// # include<iostream>
// using namespace std;

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
// #include<iostream>
// using namespace std;
// int  main(){
//   int n;
//   float sum=0;
//   cout<<"eneter the sizw: ";
// //   cin>>n;
// //   for(int i=1; i<=n; i++){
// //      sum= sum+1.0/i;
// //   }
// //   cout<<sum<<endl;
// //   return 0;
// // }

// #include<iostream>
//  using namespace std;
//  class A{
//     public:
//     int n;
//     void input(){
//         cout<<"enter a number: ";
//         cin>>n;
//     }
//       void fact(){
//             int fact=1;
//             for(int i=1; i<=n; i++){
//                 fact=fact*i;
//             }
//             cout<<"facorial of "<<n<< "  is "<<fact<<endl;
    
//         }


//       class B{
//         public:
//         int a=0,b=1,c,i;
        
        // void fibonaco( int n){ 
        //     cout << a << endl << b << endl;
        //     for(i=2; i<n; i++){
        //         c=a+b;
        //         cout<<c<<endl;
        //         a=b;
        //         b=c;
                
        //     } }
       

    //   };
    // };
    // int main(){
    //     A A1;
    //     A1.input();
    //     A1.fact();
    //     A::B B1;
    //     B1.fibonaco(A1.n);
    //     return 0;

    // }


// #include<iostream>
// using namespace std;
// void  multiply(){
//     staic  int i=0;
//     cout<<"i: "<<i<<endl;
//     i++;

// }
// int main(){
    // int j;
    // for(j=0; j<5; j++){
    //     multiply();
    // }
    // return 0;
//}
// #include<iostream>
// using namespace std;
// int main(){
//     int n,count=0;
//     int arr[90];
//     cout<<"enter the size of array: ";
//     cin>>n;
//     cout<<"enter the elements of array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"the elements of array are: ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0; i<n; i++){
//         if(i.size%2==0){
//             count++;
//         }
//     }
//     cout<<"the number of even numbers are: "<<count<<endl;
// }

#include<iostream>
using namespace std;

