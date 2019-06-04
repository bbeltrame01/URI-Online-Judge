#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(5);
    double A;
    double B;
    double MEDIA;
    cin>> A;
    cin>> B;
    MEDIA= (A*3.5 + B*7.5)/11;
    cout<< "MEDIA = "<<MEDIA<<endl;
    return 0;
}