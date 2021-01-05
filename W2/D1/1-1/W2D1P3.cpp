#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Print(int *arr) {
    cout << "[";
    for(int i=0; i<10; i++)
        cout << arr[i] <<", ";
    cout <<"]" << endl;
}

void Print(vector<int>& v) {
    cout << "[";
    for(vector<int>::iterator iter=v.begin(); iter != v.end(); ++iter)
        cout << *iter << ", ";
    cout << "]" << endl;
}

int main() {
    int arr[10] = {3, 5, 4, 7, 34, 1, 234, 612, 4, 43};
    vector<int> v;

    for(int i=0; i<10; i++) {
        v.push_back(arr[i]);
    }

    //int type array
    //sort
    cout <<"int type array" << endl;
    cout << "original: ";
    Print(arr);
    sort(arr, arr+10);
    cout << "sorted: ";
    Print(arr);
    
    //binary search
    cout << "Is there 7? ";
    if(binary_search(arr, arr+10, 7))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout <<"lower_bound(7): " << lower_bound(arr, arr+10, 7)-arr+1 << endl;
    cout <<"upper_bound(7): " << upper_bound(arr, arr+10, 7)-arr+1 << endl;

    cout << "int type vector" << endl;
    
    cout << "original: ";
    Print(v);
    sort(v.begin(), v.end());
    cout << "sorted: ";
    Print(v);

    cout << "is there 8? ";
    if (binary_search(v.begin(), v.end(), 8))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout <<"lower_bound(7): " << lower_bound(v.begin(), v.end(), 7)-v.begin()+1 <<endl;
    cout <<"upper_bound(7): " << upper_bound(v.begin(), v.end(), 7)-v.begin()+1 << endl;

    return 0;
}