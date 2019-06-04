#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(2);
    int a, maiorAB;
    int b, maiorABC;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    maiorAB= (a+b+abs(a-b))/2;
    maiorABC= (maiorAB+c+abs(maiorAB-c))/2;
    cout<<maiorABC<< " eh o maior"<<endl;
    return 0;
}