# Polymorphism
* polymorphism is the ability of object to take on different form or behave in different
ways depending on the context in which they are used.

# There are two types of polymorphism.

# 1. compile time polymorphism. it is statically


### a.function overloading
* it occur when we are defining two or more functions with same name in the same class but only differ in 
in parameters return type may be same or different 

```cpp
# include<iostream>
using namespace std;

class print{
    public:
    void show(int x){
        cout<<"x"<<x;
    }


   
    void show(char ch){
        
        cout<<"char: "<<ch;
    }
};

int main (){
    print p1;
    p1.show('R');
    return 0;
}
```
* output
char: R

### b. constructor overloading
### c. operator overloading


# 2. Run time polymorphism

### a. function overriding----
* parent and child contain the same function with different implementation.parent class function is  said to be overriden.(override mean giving more priority)
```cpp
#include <iostream>
using namespace std;

class parent {
    public:
    void getinfo(){
        cout<<" parent class ";
    }
};
class child : public parent {
    public:
    void getinfo(){
        cout<<"child class ";
    }
};

int main (){
    child c1;
    c1.getinfo();
    return 0;
}
```
* output
child class 
### b.virtual function
* A virtual function is a member function that you expect to be redefined in derived class;
* it is dynamic in nature 
* define by keyworn 'virtual' inside a base class and always declare with base class and overriden in child class.
* it is called during run time.
```cpp
#include <iostream>
using namespace std;

class parent {
    public:
    void getinfo(){
        cout<<" parent class ";
    }
    virtual void hello(){
        cout<<"hello from parent class";
    }
};
class child : public parent {
    public:
    void getinfo(){
        cout<<"child class ";
    }
    void hello(){
        cout<<"hello from child class";
    }

};

int main (){
    child c1;
    c1.hello();
    return 0;
}
```
* output
hello from child class