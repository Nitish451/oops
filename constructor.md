# Constructor

* special method that invoked automatically at time of object execution .used for initialization 
* same name as class 
* constructor does not have return type 
* only called once automatically of object creation 
* memory allocation happen only when constructor is called.


## Two types
* parameterised 
* non-parametarised

## non-parametarised
* we usee it bcoz of no printing multiple times like writing deparment multiple times.

# write a program for constructor
```cpp
 #include<iostream>
using namespace std;

class teacher{
public:
    //properties/attributes
string name;
string dept;
string subject;
double salary;

//non parametarized

// teacher(){
//     dept="computer science"
// }

//parametarized
teacher(string n; string sub; string d; double sal){
    name =n;
    subjectj=sub;
    deparment= d;
    salary= sal;
}



//method/member functions

void changeDept(string newDept){
    dept=newDept;
}


void printDetails(){
    cout << "Name: " << name << endl;
     cout << "Department: " << deparment << endl;
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
