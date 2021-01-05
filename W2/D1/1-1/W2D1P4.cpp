#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "int type max: " <<numeric_limits<int>::max() << endl;
    cout << "int type min: " <<numeric_limits<int>::min() << endl;

    cout << "long long type max: " << numeric_limits<long long>::max() << endl;
    cout << "long long type min: " << numeric_limits<long long>::min() << endl;

    return 0;
}