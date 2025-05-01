 # write a program using nested loop using a class A in which take input and find factorial and nested class B in which find febinacco series
 ```cpp
 #include<iostream>
 using namespace std;
 class A{
    public:
    int n;
    void input(){
        cout<<"enter a number: ";
        cin>>n;
    }
      void fact(){
            int fact=1;
            for(int i=1; i<=n; i++){
                fact=fact*i;
            }
            cout<<"facorial of "<<n<< "  is "<<fact<<endl;
    
        }


      class B{
        public:
        int a=0,b=1,c,i;
        
        void fibonaco( int n){ 
            cout << a << endl << b << endl;
            for(i=2; i<n; i++){
                c=a+b;
                cout<<c<<endl;
                a=b;
                b=c;
                
            } }
       

      };
    };
    int main(){
        A A1;
        A1.input();
        A1.fact();
        A::B B1;
        B1.fibonaco(A1.n);
        return 0;

    }

    # write a program to get a target value by adding two number , print index of that two number
    ```cpp
    #include <iostream>
using namespace std;
int main()
{
    int n, target;
    int arr[50];
    cout << "enter the size of array: ";
    cin >> n;
    cout << "enter the data of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target value: ";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "target found at inedex: " << i << "and" << j;
                return 0;
            }
        }
    }

    return 0;
}


