#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int arr[10] = {3, 3, 5, 3, 6, 5, 7, 6, 2, 1};

    for(int i=0; i<10; i++)
        v.push_back(arr[i]);

    cout << "original vector: [";

    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << ", ";
    cout << "]" << endl;

    sort(v.begin(), v.end());

    vector<int>::iterator viter = unique(v.begin(), v.end());
    
    v.erase(viter, v.end());
    
    cout << "edit vector: [";

    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << ", ";
    cout << "]" << endl;

    return 0;
}