# Classes and object
,,,

* object are entities in the real world.
* classes are like blueprint of these entities.

*                    Teacher




# syntax

* classes teachers{
    properties/attributes
    method(function)/member function
};

# WAP to create a details of teacher
``` cpp
#include<iostream>
using namespace std;

class teacher{
    private:
    double salary;
    public:
    //properties/attributes
string name;
string dept;
string subject;
string deparment;


//method/member functions

void changeDept(string newDept){
    dept=newDept;
}
//setter
void setSalary(double s){
    salary=s;
}

//getter
double getSalary(){
    return salary;
}
// void printDetails(){
//     cout << "Name: " << name << endl;
//      cout << "Department: " << deparment << endl;
//      cout << "Subject: " << subject << endl;
//      cout << "Salary: " << salary;
// }
};

int main(){
    teacher t1;
    t1.name="nitish";
    t1.subject="economics";
    t1.setSalary(34556);
    t1.deparment="engineering";
    cout<<t1.name<<"\n";
    cout<<t1.getSalary();
    
   //t1.printDetails();
    return 0;
}

```


# Access modifires
```
* private -- data and method are accessible inside class (by default data and method are private inside class),
* public -- data and method are accessible to everyone,
* protected-- data and method are accessible inside  class and to its derived class/
```
# Encapsulation

* Encapsulation is a wrapping  up of data and member function s in a single unit called class,
* it is also used in data hiding;

## Write a program for example encapsulation

```cpp
class account{
  private:
  double balance;
  string password;//data hiding
  public:
  string user;
  string accountHolder;
}