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
