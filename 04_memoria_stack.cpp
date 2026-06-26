#include <iostream>
using namespace std;

void func2() {
    int y = 20;
    cout << "func2: y = " << y << endl;
}

void func1() {
    int x = 10;
    func2();
    cout << "func1: x = " << x << endl;
}

int main() {
    int a = 5;
    func1();
    cout << "main: a = " << a << endl;
    return 0;
}
