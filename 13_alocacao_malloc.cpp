#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int tamanho = 3;
    int* vetor = (int*) malloc(tamanho * sizeof(int));
    
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    
    cout << "Elemento alocado via malloc: " << vetor[1] << endl;
    
    free(vetor);
    return 0;
}
