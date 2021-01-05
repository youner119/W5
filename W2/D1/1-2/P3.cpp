#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i=0; i<10; i++)
        v.push_back(arr[i]*arr[i]);
    
    cout << "original int array: [";
    for(int i=0; i<10; i++)
        cout << arr[i] << ", ";
    cout << "]" << endl;
    reverse(arr, arr+10);
    cout << "reverse int array: [";
    for(int i=0; i<10; i++)
        cout << arr[i] << ", ";
    cout << "]" << endl;

    cout << "original vector: [";
    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << ", ";
    cout << "]" << endl;
    reverse(v.begin(), v.end());
    cout << "reverse vector: [";
    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << ", ";
    cout << "]" << endl;

    return 0;
}