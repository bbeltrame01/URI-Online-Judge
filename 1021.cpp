#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int A, SOMA, SOMA1, SOMA2, SOMA3, SOMA4, SOMA5, SOMA6, money, C;
    double B, SOMA7, SOMA8, SOMA9, SOMA10, SOMA11;
    cin>> B;
    A= B;
    C= (B-A)*100;
    money= A;
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
    A= A%1;
    SOMA7= C/50;
    C= C%50;
    SOMA8= C/25;
    C= C%25;
    SOMA9= C/10;
    C= C%10;
    SOMA10= C/5;
    C= C%5;
    SOMA11= C/1;

    cout<<"NOTAS:"<<endl;
    cout<<SOMA<<" nota(s) de R$ 100.00"<<endl;
    cout<<SOMA1<<" nota(s) de R$ 50.00"<<endl;
    cout<<SOMA2<<" nota(s) de R$ 20.00"<<endl;
    cout<<SOMA3<<" nota(s) de R$ 10.00"<<endl;
    cout<<SOMA4<<" nota(s) de R$ 5.00"<<endl;
    cout<<SOMA5<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<SOMA6<<" moeda(s) de R$ 1.00"<<endl;
    cout<<SOMA7<<" moeda(s) de R$ 0.50"<<endl;
    cout<<SOMA8<<" moeda(s) de R$ 0.25"<<endl;
    cout<<SOMA9<<" moeda(s) de R$ 0.10"<<endl;
    cout<<SOMA10<<" moeda(s) de R$ 0.05"<<endl;
    cout<<SOMA11<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}