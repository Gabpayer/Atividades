#include <iostream>
using namespace std;

void dobrarPtr(int *x) {
    *x = (*x) * 2;
}

int main() {
    int a = 5;
    dobrarPtr(&a);
    cout << "Valor dobrado (ponteiro): " << a << endl;
    return 0;
}
