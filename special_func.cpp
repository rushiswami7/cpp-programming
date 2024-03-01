# include <iostream>
using namespace std;

class demo
{
   public:
    int i;
    int j;

    demo() // default constructor
    {
       cout<<"inside default const..\n";
       i=0;
       j=0;

    }
    demo(int a, int b) //Parameterised construct
    {
        cout<<"inside para const..\n";
       i= a;
       j= b;
    }
    demo(demo &ref) //copy construct
    {
        cout<<"inside copy const..\n";
       i= ref.i;
       j= ref.j;
    }
    ~demo()
    {
      cout<<"inside  disconst..\n";  
    }


};

int main()
{
    demo obj1;
    demo obj2(11,21);
    demo obj3(obj2);
    cout<<"shri swami smarth..\n";

    return 0;
}