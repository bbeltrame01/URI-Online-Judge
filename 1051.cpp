#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(2);
    double A, Soma1, Soma2, Soma3;
    cin>> A;
        if(A>=0 and A<=2000)
    {
        cout<<"Isento"<<endl;
    }
        if(A>2000 and A<=3000)
    {
        Soma1= (A-2000)*0.08;
        cout<<"R$ "<<Soma1<<endl;
    }
        if(A>3000 and A<=4500)
    {
        Soma2= (A-3000)*0.18 + 1000*0.08;
        cout<<"R$ "<<Soma2<<endl;
    }
        if(A>4500)
    {
        Soma3= (A-4500)*0.28 + 1500*0.18 + 1000*0.08;
        cout<<"R$ "<<Soma3<<endl;
    }
    return 0;
}