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
```
* output
x=0;
x=1;
x=2;

# without using cpp

```cpp
#include<iostream>
using namespace std;
void fun(){
     int x=0;
    cout<<"x= "<<x<<"\n";
    x++;
}

int main(){
    fun();
    fun();
    fun();
}
```
* output
x= 0
x= 0
x= 0
