#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<< fixed <<setprecision(1);
    double a, SOMA=0;
    int positivo = 0;
    for(int i=1; i<=6; i++)
    {
        cin >> a;
        if(a>0)
        {
           positivo++;
           SOMA+= a;
        }
    }
    SOMA= SOMA/positivo;
        cout << positivo <<" valores positivos"<<endl;
        cout << SOMA << endl;
    return 0;
}
