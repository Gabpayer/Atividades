#include <iostream>
using namespace std;

void dobrarRef(int &x) {
    x = x * 2;
}

int main() {
    int a = 5;
    dobrarRef(a);
    cout << "Valor dobrado (referencia): " << a << endl;
    return 0;
}
