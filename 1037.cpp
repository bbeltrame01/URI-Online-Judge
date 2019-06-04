#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A;
    cin >> A;
    if(A>=0 and A<=25)
        cout<<"Intervalo [0,25]"<<endl;

    if(A>25 and A<=50)
        cout<<"Intervalo (25,50]"<<endl;

    if(A>50 and A<=75)
        cout<<"Intervalo (50,75]"<<endl;

    if(A>75 and A<=100)
        cout<<"Intervalo (75,100]"<<endl;

    if(A>100 or A<0)
        cout<<"Fora de intervalo"<<endl;

    return 0;
}