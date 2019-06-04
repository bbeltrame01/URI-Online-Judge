#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    int A;
    int B;
    double C, salary;
    cin>>A;
    cin>>B;
    cin>>C;
    cout<< "NUMBER = "<<A<<endl;
    salary= B*C;
    cout<< "SALARY = U$ "<<salary<<endl;
    return 0;
}