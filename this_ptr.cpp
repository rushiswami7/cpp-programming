#include <iostream>
using namespace std;

class demo
{
   public:
   int i;
   int j;
   int k;
   demo(int a=10,int b=20, int c=30)
   {
    int i=a;
   int j=b;
   int k=c;
 }
 void fun(int no1,int no2)
 {
   cout<<"inside fun..\n";
   cout<<"inside fun..i"<<this->i<<"\n";

 }
   void dis()
 {
  cout<<"inside dis..\n";

 }

};

int main()
{
   demo obj1;
   demo obj2(11,21,41);
   obj1.fun(5,6);
   obj2.fun(7,8);

   obj1.dis();
   obj2.dis();

   return 0;
}