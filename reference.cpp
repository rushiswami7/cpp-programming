# include <iostream>
using namespace std;


int main()
{
    int a=11;
    int &ref =a;

    int *p=&a;
    int*(&q)=p;

    cout<<a<<"\n";
    cout<<ref<<"\n";

    cout<<&a<<"\n";
    cout<<&ref<<"\n";

    cout<<*p<<"\n";
    cout<<*q<<"\n";

    return 0;
}