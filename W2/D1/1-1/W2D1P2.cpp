#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> empty1;
    map<int, double> empty2;
    map<int, string> empty3;

    cout << "int: " << empty1[32] << endl;
    cout << "double: " << empty2[32] << endl;
    cout << "string: " << empty3[32] << endl;

    return 0;
}