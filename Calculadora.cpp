#include <iostream>
#include <ctype.h>
#include <stdbool.h>
#include <locale.h>
using namespace std;

#include <iostream>
using namespace std;

// ADICAO
double Adicao(double x){
    double NumeroDois = 0;
    cin >> NumeroDois;

    return x + NumeroDois;
}

// SUBTRACAO
double Subtracao(double x){
    double NumeroDois = 0;
    cin >> NumeroDois;

    return x - NumeroDois;
}

// DIVISAO
double Divisao(double x){
    double NumeroDois = 0;
    cin >> NumeroDois;

    return x / NumeroDois;
}

// MULTIPLICACAO
double Multiplicacao(double x){
    double NumeroDois = 0;
    cin >> NumeroDois;

    return x * NumeroDois;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    cout << "[BEM-VINDO A  SUA CALCULADORA BÁSICA]" << endl;
    cout << "\nVOcê terá acesso a operações básicas como adição, subtração, multiplicação e divisão.";
    cout << "\nPodendo também limpar seu histórico através das teclas C(Clean) e E(Exit)" << endl;
    cout << "\nPara começar, basta digitar o número inicial e logo após escolher sua operação através dos símbolos +, -, /, *, c, e" << endl;

    double NumeroUm = 0, NumeroDois = 0, Resultado = 0;
    char Opcao;

    bool Exit = false;
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
        case 'E':
            Exit = true;
        break;

        default:
            cout << "Opção inválida";
        break;
    }

}while(!Exit);

    return 0;
}