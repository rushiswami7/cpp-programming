# include <iostream>
using namespace std;

class demo
{
   public:
    int i;
    int j;
    static int k;

    demo(int a=10, int b=20) // para const with defaul argu
    {
       int i=a;
       int j = b;

    }
    void display()
    {
        cout<<"inside non static func(d)\n";
      cout<<"value of i.."<< i<<"\n";
      cout<<"value of j.."<< j<<"\n";
      cout<<"value of k.."<< k <<"\n";
    }
    static void fun()
    {
      cout<<"inside static \n";
      cout<<"value of k."<<k;

    }

} ;
int demo :: k=111;

int main()
{
    demo obj1(11,10);
    demo obj2(51,101);
    demo obj3(112,167);

    obj1.display();
    obj2.display();
    obj3.display();

    cout<<"size of obj1"<<sizeof(obj1)<<"\n"; //8
    cout<<"val of k"<<demo::k<<"\n"; //111

    return 0;
}