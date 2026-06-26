#include <iostream>
using namespace std;

int main() {
    int* a = new int;
    *a = 42;
    cout << "Valor na heap: " << *a << endl;
    delete a;
    return 0;
}
