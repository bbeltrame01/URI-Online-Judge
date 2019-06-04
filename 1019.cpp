#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int N, SOMA,SOMA1, SOMA2;
    cin>> N;
    SOMA= N/3600;
    N= N%3600;
    SOMA1= N/60;
    N= N%60;
    SOMA2= N/1;

    cout<<SOMA<<":"<<SOMA1<<":"<<SOMA2<<endl;

    return 0;
}