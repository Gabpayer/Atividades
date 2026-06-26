#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

void adicionar(No*& cabeca, int novoValor) {
    No* novoNo = new No{novoValor, cabeca};
    cabeca = novoNo;
}

int main() {
    No* lista = nullptr;
    adicionar(lista, 30);
    adicionar(lista, 20);
    adicionar(lista, 10);

    No* atual = lista;
    while (atual != nullptr) {
        cout << atual->valor << " -> ";
        atual = atual->proximo;
    }
    cout << "NULO" << endl;

    return 0;
}
