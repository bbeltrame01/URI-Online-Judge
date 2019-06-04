#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int A, SOMA,SOMA1, SOMA2, SOMA3, SOMA4, SOMA5, SOMA6, money;
    cin>> A;
    money = A;
    SOMA= A/100;
    A= A%100;
    SOMA1= A/50;
    A= A%50;
    SOMA2= A/20;
    A= A%20;
    SOMA3= A/10;
    A= A%10;
    SOMA4= A/5;
    A= A%5;
    SOMA5= A/2;
    A= A%2;
    SOMA6= A/1;

    cout << money<<endl;
    cout<<SOMA<<" nota(s) de R$ 100,00"<<endl;
    cout<<SOMA1<<" nota(s) de R$ 50,00"<<endl;
    cout<<SOMA2<<" nota(s) de R$ 20,00"<<endl;
    cout<<SOMA3<<" nota(s) de R$ 10,00"<<endl;
    cout<<SOMA4<<" nota(s) de R$ 5,00"<<endl;
    cout<<SOMA5<<" nota(s) de R$ 2,00"<<endl;
    cout<<SOMA6<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}