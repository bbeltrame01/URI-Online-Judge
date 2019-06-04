#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout<< fixed <<setprecision(3);
    double A, B, C;
    cin>>A;
    cin>>B;
    cin>>C;
    double SOMA, SOMA2, SOMA3, SOMA4, SOMA5;
    SOMA= A*C/2;
    SOMA2= 3.14159* pow(C,2);
    SOMA3= (A+B)*C/2;
    SOMA4= pow(B,2);
    SOMA5= A*B;
    cout<<"TRIANGULO: "<<SOMA<<endl;
    cout<<"CIRCULO: "<<SOMA2<<endl;
    cout<<"TRAPEZIO: "<<SOMA3<<endl;
    cout<<"QUADRADO: "<<SOMA4<<endl;
    cout<<"RETANGULO: "<<SOMA5<<endl;
    return 0;
}