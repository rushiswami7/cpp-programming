#include<iostream>
using namespace std;

class array
{
    private:
     int *arr;
     int ilenght;

    public:
        array(int size)
        {
            ilenght=size;
            arr=new int[ilenght]

        }
}



int main()
{
    int iret=0;
    float fret=0.0f;
    double dret=0.0;

    iret=addi(10,11);
    fret=addi(10.0f,11.0f);
    dret=addi(10.0,11.0);

    cout<<iret<<"\n";
    cout<<fret<<"\n";
    cout<<dret<<"\n";
    



    return 0;
}