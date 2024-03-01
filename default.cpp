# include <iostream>
using namespace std;

float cal(float mark,float outof=100)
{
   float perc=((mark/outof)*100);
   return perc;

}
int main()
{
    float ans=0.0f;
    ans= cal(86,100);
    cout<<"perc.."<<ans<<"\n";

    ans= cal(86,100);
    cout<<"perc.."<<ans<<"\n";

    ans= cal(320,400);
    cout<<"perc.."<<ans<<"\n";

    

    return 0;
}