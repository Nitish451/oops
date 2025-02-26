# Static variable 
* variable declare as static in a function are created and initialised once for the lifetime of the program //function
```cpp
#include<iostream>
using namespace std;
void fun(){
    static int x=0;
    cout<<"x= "<<x<<"\n";
    x++;
}

int main(){
    fun();
    fun();
    fun();
}