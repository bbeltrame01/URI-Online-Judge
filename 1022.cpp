#include <iostream>
using namespace std;
typedef struct {
    int n;
    int d;
} RACIONAL;

char barra;

void ler_racional(RACIONAL &r) {
    cin >> r.n;
    cin >> barra;
    cin >> r.d;

}

void imprime (RACIONAL R) {
    cout << R.n << "/" << R.d;
}

int main (void) {
    RACIONAL r1,r2,result,simpli;
    char operacao;
    int div = 2, m;
    cin >> m;
    while(m--){
bool flag = false;

    ler_racional(r1);
    cin >> operacao;
    ler_racional(r2);
    if(operacao == '+') {
        result.n = r1.n * r2.d + r1.d * r2.n;
        result.d = r1.d * r2.d;
    }
    if(operacao == '-') {
        result.n = r1.n * r2.d - r1.d * r2.n;
        result.d = r1.d * r2.d;
    }
    if(operacao == '*') {
        result.n = r1.n * r2.n;
        result.d = r1.d * r2.d;
    }
    if(operacao == '/') {
        result.n = r1.n * r2.d;
        result.d = r2.n * r1.d;
    }

    imprime(result);
    cout << " = ";
    if(result.n < 0) {
            result.n = result.n*-1;
            flag = true;
    }
    while(result.n >= div and result.d >= div){
        if(result.n%div==0 and result.d%div==0){
        result.n = result.n/div;
        result.d = result.d/div;
        }else
            div++;
    }
    if (flag){
        result.n = result.n*-1;
    }
    imprime(result);
    cout << endl;
     div = 2;
    }


    return 0;
}
