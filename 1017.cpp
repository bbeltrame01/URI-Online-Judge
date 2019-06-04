#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout<< fixed <<setprecision(3);
    int X;
    int Y;
    cin>>X;
    cin>>Y;
    double SOMA;
    SOMA= X*Y/12.0;
    cout<<SOMA<<endl;
    return 0;
}