#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout<< fixed <<setprecision(3);
    int R;
    cin>>R;
    double SOMA;
    SOMA= (4/3.0) * 3.14159 * pow(R,3);
    cout<<"VOLUME = "<<SOMA<<endl;
    return 0;
}