#include <iostream>
using namespace std;

int main() {
    int A[3] = {2, 4, 5};
    int B[3] = {1, 3, 4};
    int C[3];

    for (int i = 0; i < 3; i++) {
        C[i] = A[i] + B[i];
        cout << "Soma indice " << i << ": " << C[i] << endl;
    }
    return 0;
}
