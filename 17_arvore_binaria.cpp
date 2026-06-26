#include <iostream>
using namespace std;

struct NoArvore {
    int valor;
    NoArvore* esquerda;
    NoArvore* direita;
};

NoArvore* inserir(NoArvore* raiz, int valor) {
    if (raiz == nullptr) return new NoArvore{valor, nullptr, nullptr};
    if (valor < raiz->valor) raiz->esquerda = inserir(raiz->esquerda, valor);
    else raiz->direita = inserir(raiz->direita, valor);
    return raiz;
}

void emOrdem(NoArvore* raiz) {
    if (raiz != nullptr) {
        emOrdem(raiz->esquerda);
        cout << raiz->valor << " ";
        emOrdem(raiz->direita);
    }
}

int main() {
    NoArvore* raiz = nullptr;
    raiz = inserir(raiz, 50);
    inserir(raiz, 30);
    inserir(raiz, 70);
    
    cout << "Elementos em ordem: ";
    emOrdem(raiz);
    return 0;
}
