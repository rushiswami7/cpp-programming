#include <iostream>
using namespace std;

class demo
{   
    int i;
    public:
    int j;
    private:
    int k;
    protected:
    int a;
    public:
     demo()
     {
        i=10;
        j=20;
        k=30;
        a=40;

     }
     void display()
     {
        cout<<"value of i.."<<i<<"\n";
        cout<<"value of i.."<<j<<"\n";
        cout<<"value of i.."<<k<<"\n";
        cout<<"value of i.."<<a<<"\n";
     }

};

class hello : public demo
{

    
}

int main()
{
    hello hobj;

   


    return 0;
}
