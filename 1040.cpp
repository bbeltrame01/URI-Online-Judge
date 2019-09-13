#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    double N1, N2, N3, N4, X, Y, media;

    cin >> N1;
    cin >> N2;
    cin >> N3;
    cin >> N4;

    X = (N1*2+N2*3+N3*4+N4*1)/10;

    if(X >= 7)

    {
        cout <<"Media: " << X <<endl;
        cout << "Aluno aprovado." << endl;
    }

    if(X < 5)

    {
        cout <<"Media: " << X << endl;
        cout <<"Aluno reprovado." << endl;
    }

    if(X >= 5 and X <7)

    {
        cin >> Y;
        media = (X + Y)/2;
        cout << "Media: " << X << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << Y << endl;

        if(media >= 5)

        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << media << endl;
        }

        else
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << media << endl;
        }
    }

    return 0;
}
