#include <iostream>

using namespace std;

void ChangeNumber(int& var1, int& var2) {
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main() {
    int a, b;

    a = 5;
    b = 7;

    cout << "a: " << a << ",b: " << b << endl;
    ChangeNumber(a, b);
    cout << "a: " << a << ",b: " << b << endl;

    return 0;
}