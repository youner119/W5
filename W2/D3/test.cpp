#include <iostream>

using namespace std;

int main() {
    int arr1[100][100];
    int arr2[100][100];

    arr1[1][1] = 1;
    arr2[1][1] = 2;

    int (*temp)[100] = arr1;
    cout << temp[1][1] << endl;
}