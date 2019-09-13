#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int A;
    cin>> A;
    if(A==61)
    {
        cout<<"Brasilia"<<endl;
    }
        if(A==71)
    {
        cout<<"Salvador"<<endl;
    }
        if(A==11)
    {
        cout<<"Sao Paulo"<<endl;
    }
        if(A==21)
    {
        cout<<"Rio de Janeiro"<<endl;
    }
        if(A==32)
    {
        cout<<"Juiz de Fora"<<endl;
    }
        if(A==19)
    {
        cout<<"Campinas"<<endl;
    }
        if(A==27)
    {
        cout<<"Vitoria"<<endl;
    }
        if(A==31)
    {
        cout<<"Belo Horizonte"<<endl;
    }
        if(A!=61 and A!= 71 and A!= 11 and A!=21 and A!=32 and A!=19 and A!=27 and A!=31)
    {
        cout<<"DDD nao cadastrado"<<endl;
    }
    return 0;
}