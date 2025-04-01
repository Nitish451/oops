# C++ Program to demonstrate the
 * functioning of a friend class
 ```cpp
* C++ Program to demonstrate the
* functioning of a friend class
 ```cpp
#include <iostream>
using namespace std;

class GFG {
//private:
    int private_variable;

//protected:
    int protected_variable;

public:
    GFG()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend class declaration
    friend class F;
};
```
* Here, class F is declared as a
* friend inside class GFG. Therefore,
* F is a friend of class GFG. Class F
* can access the private members of
 class GFG.
 ```cpp
class F {
public:
    void display(GFG& t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};

// Driver code
int main()
{
    GFG g;
    F fri;
    fri.display(g);
//     return 0;
 }
 ```
 # To cheack wheather a numaber is odd or even using friend class 
```cpp
#include<iostream>
using namespace std;

// Forward declaration of the class Checker
class Checker;

class Number {
    int num; // Private member (default access is private)

public:
    // Constructor to initialize the number
    Number(int n) {
        num = n;
    }

    // Granting access to the Checker class
    friend class Checker;
};

class Checker {
public:
    // Function to check whether the number is odd or even
    void checkOddEven(Number n) {
        if (n.num % 2 == 0) {
            cout << n.num << " is Even." << endl;
        } else {
            cout << n.num << " is Odd." << endl;
        }
    }
};

int main() {
    int number;
    
    // Input the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Creating an object of the Number class
    Number numObj(number);

    // Creating an object of the Checker class
    Checker checkObj;

    // Calling the checkOddEven function
    checkObj.checkOddEven(numObj);

    return 0;
}
```
#  Reference to an Object (GFG& t):
GFG& t represents a reference to an object of type GFG. This means that t does not create a copy of the GFG object but rather refers to the original GFG object.

A reference is used here for efficiency because it avoids copying the entire object (which can be expensive, especially for large objects).

2. Why Use a Reference?:
Avoiding Object Copying: If you passed the GFG object by value, it would create a copy of the object, which might be inefficient for large objects. A reference allows the function to work directly with the original object without needing a copy.

Modify the Original Object (if needed): Although the current code does not modify the GFG object, using a reference allows you to modify the original GFG object, if needed, within the display function.

3. Accessing Private Members in Friend Class:
In this program, F is a friend class of GFG, which means it can access the private and protected members of GFG. The display function of class F takes a reference to a GFG object (i.e., GFG& t) and uses it to access the private and protected members (private_variable and protected_variable) of the GFG class.

4. Function Call in main:
In the main function, you create an object of class GFG called g and an object of class F called fri.

You then call fri.display(g), passing the g object of type GFG by reference to the display function of class F.

Inside display, t will refer to the g object, and you can access g's private and protected variables through t.

In summary, GFG& t is used as a reference to an object of class GFG to avoid copying the object and to provide access to its private and protected members from the display function in class F.





