#include <iostream>
using namespace std;

int main() {
    int valor = 50;
    int* ponteiro = &valor;

    cout << "Valor da variavel: " << valor << endl;
    cout << "Endereco armazenado no ponteiro: " << ponteiro << endl;
    cout << "Valor acessado pelo ponteiro: " << *ponteiro << endl;

    return 0;
}
