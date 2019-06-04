#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    string JOAO;
    double B;
    double C, salary;
    cin>>JOAO;
    cin>>B;
    cin>>C;
    salary= (C*0.15)+B;
    cout<< "TOTAL = R$ "<<salary<<endl;
    return 0;
}