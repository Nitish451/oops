# CHAPTER : 1;
# write a program to find factorial of a number using class and constructor
```cpp


#include<iostream>
using namespace std;
class factorial{
    public:
    int i,n,fact=1;
    factorial(int n){
      
        this->n=n;
    }
    void cal(){
        for(i=1; i<=n; i++){
           fact*=i;
        }
    }

    void display(){
       cout<<"factorial of "<<n<<"  is : "<<fact<<endl;
    }

};

int main(){
    int m;
    cout<<"enter the number=  ";
    cin>>m;
    factorial f(m);
    f.cal();
    f.display();
    return 0;
}
```
# write a program to cheack whether a number is palindrome or not .....
* a palindrome number is the number which remain same afrer the digit reverse ex- 121,1331,1441;
```cpp

```
# write a program to change given temperature in fahrenheight to celcius...
```cpp
#include<iostream>
 using namespace std;
 class temperature{
     public:
    int n, c,f;
    temperature(int f,int n){
        this->c=0;
         this->f=f;
         this->n=n;
     }

    void cal(){
         c=(f-32)*5/9;
     }

     void display(){
         cout<<"temperature of "<<n<< "in celcius is :"<<c;
     }

 };
 int main(){
     int m,n;
     cout<<"enter temmperature in hahrenheit: ";
     cin>>m;
     cout << "Enter a label or name for this temperature (e.g., city name): ";
     cin >> n;
     temperature t(n,m); 
     t.cal();
     t.display();
     return 0;

 }
```
# write a program to print fibonacci series till nth term
```cpp
#include<iostream>
using namespace std;
int main(){
  int a=0, b=1,c,i;
  int n;
  cout<<"enter the size : ";
  cin>>n;
  cout<<a<<endl;
  cout<<b<<endl;
  for(i=2; i<n; i++){
    c=a+b;
    cout<<c<<endl;
    a=b;
    b=c;
  }
  return 0;
}


```
# write a program to sum of the series 1+1/2+1/3......+1/n till nth term;
```cpp
#include<iostram>
using namespace std;
int  main(){
  int n;
  cout<<"eneter the sizw: ";
  cin>>n;
  for(int i=1; i=<n; i++){
    int sum= i+1/n;
  }
  cout<<sum<<endl;
  return 0;
}


```
# Write a program to sum the series: 1+1/2!+1/3!+1/4!+..+1/n! till nth term  

# write a program using inheritance 
```cpp
#include<iostream>
using namespace std;
class employ{
  public:
  string empid;
  int salary;
  employ(string empid, int salary){
    this->empid=empid;
    this->salary=salary;
  }
  void dispaly(){
    cout<<"employe id : "<<empid<<endl;
    cout<<"employ salary: "<<salary<<endl;
  }
};
class summerstudent: public employ{
  public:
  int rollno;
  string collegeid;
  summerstudent(int rollno, string collegeid, string empid, int salary):employ(empid, salary){
    this->rollno=rollno;
    this->collegeid=collegeid;
  }
  void display(){
    cout<<"rollno: "<<rollno<<endl;
    cout<<"collegeid: "<<collegeid<<endl;

  }
};

class civilstudent:public employ{
  public:
  int depid;
  string depname;
  string position;
  civilstudent(int depid, string depname, string position ,string empid, int salary): employ(empid, salary){
    this->depid=depid;
    this->depname=depname;
    this->position=position;
  }
  void display(){
    cout<<"depid: "<<depid<<endl;
    cout<<"depname: "<<depname<<endl;
    cout<<"position: "<<position<<endl;
  }
};

class manager : public employ{
  public:
  string companyname;
  string companyid;
  manager(string companyname, string companyid, string empid, int salary): employ(empid, salary){
    this->companyname=companyname;
    this->companyid=companyid;
  }
};

class person{
  public:
  string name;
  string vid;
  string address;
};

class myclass : public person , public manager{
  public:
  string name;
  string vid;
  string address;
  myclass(string name, string vid, string address, string companyname, string companyid, string empid, int salary): manager(companyname, companyid, empid, salary){
    this->name=name;
    this->vid=vid;
    this->address=address;
  }
  void display(){
    cout<<"name: "<<name<<endl;
    cout<<"vid: "<<vid<<endl;
    cout<<"address: "<<address<<endl;
    cout<<"companyname: "<<companyname<<endl;
    cout<<"companyid: "<<companyid<<endl;
    cout<<"empid: "<<empid<<endl;
  }
};
int main(){
  myclass obj("nitish", "123", "delhi", "tcs", "456", "789", 50000);
  obj.display();
  return 0;
}

