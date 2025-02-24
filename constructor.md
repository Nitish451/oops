# Constructor

* special method that invoked automatically at time of object execution .used for initialization 
* same name as class 
* constructor does not have return type 
* only called once automatically of object creation 
* memory allocation happen only when constructor is called.
* multuple consructor can be created in a single class with same name called consructor overloading.
* constructor overloading is an example of polymorphism.


## Two types
* parameterised 
* non-parametarised

## non-parametarised
* we usee it bcoz of no printing multiple times like writing deparment multiple times.

## This in constructor 
* this is a special pointer in constructor c++ that point to the current object 
* it written as this-->prop is same as *(this).prop.

## Example
```cpp
class teacher{
public:
    //properties/attributes
string name;
string deparment;
string subject;
double salary;

teacher(string name, string sub, string d, double sal){
   this->name =name ;// here difficulties to find object properties
    subject=sub;
    deparment= d;
    salary= sal;
}



# write a program for constructor
```cpp




 #include<iostream>
using namespace std;

class teacher{
public:
    //properties/attributes
string name;
string deparment;
string subject;
double salary;

//parametarized

teacher(string n, string sub, string d, double sal){
    name =n;
    subject=sub;
    deparment= d;
    salary= sal;
}

//non parametarized

// teacher(){
//     dept="computer science"
// }



//method/member functions

void changeDept(string newDept){
    deparment=newDept;
}


void printDetails(){
    cout << "Name: " << name << endl;
    // cout << "Department: " << Deparment << endl;
     cout << "Subject: " << subject << endl;
     cout << "Salary: " << salary;
}
};

int main(){
    teacher t1("nitish","econimics","computer science", 345466);
    // t1.name="nitish";
    // t1.subject="economics";
    // t1.Salary(34556);
    t1.printDetails();
    return 0;
}
