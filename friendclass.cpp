#include <iostream>
using namespace std;

class hello
{
    void fun();
    void gun();


};

class demo
{
   public: int i;
   private: int j;
   protected: int k;
   public:
    demo()
     {
     i=10; j=20; k=30;
     } 
    friend class hello;
};
// retrun val clasname scope_resolu fuc;
void hello:: fun()
{
   demo obj;
   cout<<"value of i :"<<obj.i<<"\n";
   cout<<"value of j :"<<obj.j<<"\n";
   cout<<"value of k :"<<obj.k<<"\n";

}
void hello:: gun()
{
   demo obj;
   cout<<"value of i :"<<obj.i<<"\n";
   cout<<"value of j :"<<obj.j<<"\n";
   cout<<"value of k :"<<obj.k<<"\n";

}


 int main()
 {
    hello hobj;

    hobj.fun();
    hobj.gun();
    return 0;
 }