#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int N, SOMA1,SOMA2, SOMA3;
    cin>> N;
    SOMA1= N/365;
    N= N%365;
    SOMA2= N/30;
    N= N%30;
    SOMA3= N/1;

    cout<<SOMA1<<" ano(s)"<<endl;
    cout<<SOMA2<<" mes(es)"<<endl;
    cout<<SOMA3<<" dia(s)"<<endl;

    return 0;
}
