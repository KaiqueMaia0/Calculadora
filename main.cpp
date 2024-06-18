#include <iostream>
#include <locale>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float num1, num2, x1, x2, rdelta;
    int b, a, c, delta;
    int opt;
        cout<<"-----Escolha-----"<<endl;
        cout<<"--------A--------"<<endl;
        cout<<"----Operação----"<<endl;
        cout<<"1. Soma           "<<endl;
        cout<<"2. Subtração      "<<endl;
        cout<<"3. Multiplicação  "<<endl;
        cout<<"4. Divisão        "<<endl;
        cout<<"5. Bhaskara        "<<endl;
        cout<<"0. Sair           "<<endl;
        cout<<"Digite o index da operação:";
            cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<"Escolha dois números:"<<endl;
            cout<<"Número 1: ";
                cin>>num1;
            cout<<"Número 2: ";
                cin>>num2;
            cout<<"O resultado da soma é: "<<num1 + num2;
            break;
        case 2:
            cout<<"Escolha dois números:"<<endl;
            cout<<"Número 1: ";
                cin>>num1;
            cout<<"Número 2: ";
                cin>>num2;
            cout<<"O resultado da subtração é: "<<num1 - num2;
            break;
        case 3:
            cout<<"Escolha dois números:"<<endl;
            cout<<"Número 1: ";
                cin>>num1;
            cout<<"Número 2: ";
                cin>>num2;
            cout<<"O resultado da multiplicação é: "<<num1 * num2;
            break;
        case 4:
            cout<<"Escolha dois números:"<<endl;
            cout<<"Número 1: ";
                cin>>num1;
            cout<<"Número 2: ";
                cin>>num2;
            cout<<"O resultado da divisão é: "<<num1 / num2;
            break;
        case 5:
            cout<<"Escreva o valor de A: "<<endl;
                cin>>a;
            cout<<"Escreva o valor de B: "<<endl;
                cin>>b;
            cout<<"Escreva o valor de C: "<<endl;
                cin>>c;
            delta = pow(b,2) - 4 * a * c;
            rdelta = sqrt(delta);
                x1 = (-b+rdelta)/(2*a);
                x2 = (-b-rdelta)/(2*a);
                    cout<<"O resultado de X1 é: "<< x1 <<" e o resultado de X2 é: "<<x2;
            break;
        case 0:
            cout<<"Saindo da calculadora...";
            break;
        default:
            cout<<"Opção invalida!";
        }
}