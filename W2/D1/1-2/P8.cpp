#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <pair<int, int> > v;
    int arr[10][2] = {{1, 2}, {2, 3}, {10, 3}, {2, 2}, {34, 1}, {35, 1}, {4, 4}, {4, 3}, {53, 1}, {3, 3}};

    for(int i=0; i<10; i++) {
        v.push_back(pair<int, int>(arr[i][0], arr[i][1]));
    }

    cout << "original vector: [";
    for(vector<pair<int, int> >::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << "( " << iter->first << ", " << iter->second << " ), ";
    cout << "]" << endl;
    sort(v.begin(), v.end());
    cout << "sorted vecter: [";
    for(vector<pair<int, int> >::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << "( " << iter->first << ", " << iter->second << " ), ";
    cout << "]" << endl;

    //첫번째 인자를 기준으로 오름차순으로 정렬하고
    //첫번째 인자가 같으면 두번째 인자를 비교하여 오름차순으로 정렬한다.

    return 0;
}