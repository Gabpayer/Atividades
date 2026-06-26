#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Maior que 20 E menor que 90: " << (idade > 20 && idade < 90) << endl;
    cout << "Menor que 12 OU maior que 50: " << (idade < 12 || idade > 50) << endl;
    return 0;
}
