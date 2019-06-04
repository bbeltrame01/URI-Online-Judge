#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout<< fixed <<setprecision(3);
    int X;
    double Y;
    cin>>X;
    cin>>Y;
    double SOMA;
    SOMA= X/Y;
    cout<<SOMA<<" km/l"<<endl;
    return 0;
}