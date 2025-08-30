
#include<iostream>
using namespace std;

class add
{
      int a,b;
public:

     void get()
 {
  cout<<"Enter a , b: "<<endl;
  cin>>a>>b;
  }
     void set()
  {
   cout<<"a"<<a<<" "<< "b"<<b<<endl;
   }
     void operator ++()
   {
    a=++a;
    b=++b;
    }
    };
         int main(){
 add obj1;
obj1.get();
obj1.set();
++obj1;          //function call
cout<<"after increment result"<<endl;
obj1.set();
getch();
return 0;
}
