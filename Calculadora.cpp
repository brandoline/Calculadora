#include <iostream>
#include <ctype.h>
#include <stdbool.h>
#include "calculos.h"
using namespace std;

int main() {
    
    double NumeroUm = 0, NumeroDois = 0, Resultado = 0;
    char Opcao;

    bool Saida = false;
    cin >> NumeroUm;

do{
    cin >> Opcao;

    switch (toupper(Opcao)){
        // ADICAO
        case '+':
            Resultado = Adicao(NumeroUm);
            NumeroUm = Resultado;
            cout << Resultado;
        break;

        // SUBTRACAO
        case '-':
            Resultado = Subtracao(NumeroUm);
            NumeroUm = Resultado;
            cout << Resultado;
        break;

        // DIVISAO
        case '/':
            Resultado = Divisao(NumeroUm);
            NumeroUm = Resultado;
            cout << Resultado;
        break;

        // MULTIPLICACAO
        case '*':
            Resultado = Multiplicacao(NumeroUm);
            NumeroUm = Resultado;
            cout << Resultado;
        break;

      // CLEAR
        case 'C':
            system("cls");
            cin >> NumeroUm;
        break;  

        // SAIDA 
        case 'S':
            Saida = true;
        break;

        default:
            cout << "Opção inválida";
        break;
    }

}while(!Saida);

    return 0;
}