#include <iostream>
using namespace std;

double Adicao(double NumeroUm){
    double Resultado = 0, NumeroDois = 0;

    cin >> NumeroDois;
    Resultado = NumeroUm + NumeroDois;

    return Resultado;
}

int main() {
    
    double NumeroUm = 0, NumeroDois = 0, Resultado = 0;
    char Opcao;

    bool saida = false;
    cin >> NumeroUm;

do{
    cin >> Opcao;

    switch (Opcao){
        // ADICAO
        case '+':
            cin >> NumeroDois;
            Resultado = NumeroUm + NumeroDois;
            cout << Resultado;
            NumeroUm = Resultado;
        break;

        // SUBTRACAO
        case '-':
            cin >> NumeroDois;
            Resultado = NumeroUm - NumeroDois;
            cout << Resultado;
            NumeroUm = Resultado;
        break;

        // DIVISAO
        case '/':
            cin >> NumeroDois;
            Resultado = NumeroUm / NumeroDois;
            cout << Resultado;
            NumeroUm = Resultado;

        break;

        // MULTIPLICACAO
        case '*':
            cin >> NumeroDois;
            Resultado = NumeroUm * NumeroDois;
            cout << Resultado;
            NumeroUm = Resultado;
        break;

        // SAIDA 
        case 'S':
            saida = true;
        break;

        default:
            cout << "Opção inválida";
        break;
    }

}while(!saida);

    return 0;
}