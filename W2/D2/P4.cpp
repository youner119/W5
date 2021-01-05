#include <iostream>

using namespace std;

int C;

int pow(int a, int b) {
    if(b ==0)
        return 1%C;
    if(b == 1)
        return a%C;
    
    int n = pow(a, b/2);
    if(b % 2 == 0)
        return (n*n) %C;
    else
        return (((n*n)%C) * a) %C;
}

int main() {
    int a, b;
    cin >> a >> b >> C;

    cout << pow(a, b);
}