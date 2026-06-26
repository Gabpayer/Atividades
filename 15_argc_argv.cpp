#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 3) {
        int valor1 = atoi(argv[1]);
        int valor2 = atoi(argv[2]);
        cout << "Soma dos argumentos: " << valor1 + valor2 << endl;
    } else {
        cout << "Forneca exatamente dois numeros como argumentos." << endl;
    }
    return 0;
}
