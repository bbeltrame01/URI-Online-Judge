#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    int positivo = 0;
    for(int i=1; i<=6; i++)
    {
        cin >> a;
        if(a>0)
        {
           positivo++;
        }
    }

        cout << positivo <<" valores positivos"<<endl;
    return 0;
}