#include <iostream>
using name std;

class demo
{
   public:
   int i;
   private:
   int j;
   protected:
   int k;
   public:
    demo()
     i=10;
     j=20;
     k=30;

};
void display()
{
   demo obj;
   cout<<"value of i :"<<obj.i<<"\n";
   cout<<"value of j :"<<obj.j<<"\n";
   cout<<"value of k :"<<&obj.k<<"\n";

}


 int main()
 {

    return 0;
 }