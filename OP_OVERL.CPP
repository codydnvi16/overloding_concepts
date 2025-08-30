//practice of operator overloading topic
#include<iostream.h>
#include<conio.h>
class addi
{
 int a,b;
 public:
 void get()
 {
  cout<<"Enter a:, b:"<<endl;
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
