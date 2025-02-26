# Abstraction 
### using abstraction classes
* abstract classes are used to provide a base class from which other classes can be derived.
* they can not be instantiated(instance mean object in oops) and are mean to be inherited.
* abstract classes are basically used to define interface for derived classes.
```cpp
#include<iostream>
using namespace std;

class shape{ // abstract class
    virtual void draw()=0;//pure virtual function 
};
class circle : public shape{
    public:
    void draw(){
        cout<<"draw a circle";
    }

};
int main(){
    circle c1;
    c1.draw();
    return 0;
}