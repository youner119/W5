#include<iostream>
#include<algorithm> //헤더파일
#include <vector>

using namespace std;

int main(void){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v;

    for(int i=0; i<10; i++) {
        v.push_back(arr[i]);
    }

    cout << "lower_bound(6) : " << *lower_bound(v.begin(), v.end(), 6)<< endl;
    cout << "lower_bound(7) : " << *lower_bound(v.begin(), v.end(), 7)<< endl;
    cout << "lower_bound(8) : " << *lower_bound(v.begin(), v.end(), 8)<< endl;
    cout << "lower_bound(9) : " << *lower_bound(v.begin(), v.end(), 0)<< endl;
    cout << *(v.end()-1);
    return 0;
}