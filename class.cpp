// #include<iostream>
// using namespace std;

// class sum1 {
//     int sum = 0, x, y;

// public:
//     // Constructor that initializes x and y
//     sum1(int x1, int y1) {
//         x = x1;
//         y = y1;
//     }

//     // Function to calculate sum
//     void add() {
//         sum = x + y;
//     }

//     // Function to display the sum
//     void display() {
//         cout << "Sum is: " << sum << endl;
//     }
// };

// int main() {
//     int x1, y1;
    
//     // Input numbers
//     cout << "Enter first number: ";
//     cin >> x1;
//     cout << "Enter second number: ";
//     cin >> y1;

//     // Create an object of sum1 and pass x1 and y1 to the constructor
//     sum1 obj(x1, y1);

//     // Call add to calculate the sum
//     obj.add();

//     // Call display to show the sum
//     obj.display();

//     return 0;
// }

#include<iostream>
using namespace std;

class teacher{
public:
    //properties/attributes
string name;
string deparment;
string subject;
double salary;

//non parametarized

// teacher(){
//     dept="computer science"
// }

//parametarized
teacher(string n, string sub, string d, double sal){
    name =n;
    subject=sub;
    deparment= d;
    salary= sal;
}



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
