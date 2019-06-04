#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout<< fixed <<setprecision(4);
    int x1, y1, x2, y2;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    double SOMA;
    SOMA= sqrt((pow(x2 - x1,2) + pow(y2 - y1,2))),2;
    cout<<SOMA<<endl;
    return 0;
}