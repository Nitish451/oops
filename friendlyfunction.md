# Example of global function 
* In this example, you declare a global function friendFunction as a friend of the base class, which allows this function to access the private and protected members of the base class directly.
```cpp
#include <iostream>
using namespace std;

class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    { 
        private_variable = 10;
        protected_variable = 99;
    }
    
    // Friend function declaration
    friend void friendFunction(base& obj);
};

// Friend function definition
void friendFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

// Driver code
int main()
{
    base object1;
    friendFunction(object1);

    return 0;
}
```

# Explanation:
* Class base:

* Contains a private member private_variable and a protected member protected_variable.

* The constructor initializes these members with 10 and 99, respectively.

* The friend function friendFunction is declared to have access to the private and protected members of base.

Global Friend Function friendFunction:

* This function can access the private and protected members of any base object passed to it, even though they are usually inaccessible from outside the class.

* It prints the values of private_variable and protected_variable.

# Main Function:

An object object1 of class base is created.

The friendFunction is called, passing object1 as the argument, and it can access and print both private and protected variables.

# Output:

Private Variable: 10
Protected Variable: 99

#  Member Function of Another Class as Friend

```cpp
#include <iostream>
using namespace std;

class base; // Forward declaration needed

// Another class that will have a friend function
class anotherClass {
public:
    void memberFunction(base& obj);
};

// Base class where the friend function is declared
class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // Friend function declaration
    friend void anotherClass::memberFunction(base&);
};

// Friend function definition
void anotherClass::memberFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

// Driver code
int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);

    return 0;
}
```
# Explanation:
* Class base:

* Similar to the previous example, it contains a private member private_variable and a protected member protected_variable.

* The constructor initializes these members with 10 and 99, respectively.

* The function anotherClass::memberFunction is declared as a friend, which allows it to access the private and protected members of base.

# Class anotherClass:

* This class has a member function memberFunction, which is declared as a friend of the base class.

* The memberFunction can access the private and protected members of a base object passed to it.

* Main Function:

* An object object1 of class base is created.

* An object object2 of class anotherClass is created.

* The memberFunction of object2 is called, passing object1 as the argument. This function can access and print the private and protected members of object1.

Output:

Private Variable: 10
Protected Variable: 99
# Key Concepts:
# Friend Functions:

* Friend functions can access the private and protected members of a class, even though they are not member functions.

* They are often used when there’s a need for an external function to interact with a class's internals (for example, operator overloading, or utility functions).

# Global Friend Function:

* The function is not a member of any class but can still access the private and protected members of the class by being declared a friend.

* Member Function of Another Class as Friend:

* A member function of another class can be granted access to the private and protected members of the class, allowing it to manipulate the internals of the class indirectly.