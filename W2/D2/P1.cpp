#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int N, C;

bool f(int x) {
    int count = 1;
    vector<int>::iterator riter = v.end()-1;
    vector<int>::iterator iter;
    iter = riter-1;
    while(1) {
        if(*riter - *iter >= x) {
            count++;
            riter=iter;
        }
        if(iter == v.begin()) break;
        --iter;
    }
    if(count >= C) return true;
    else return false;
}

int main() {
    cin >> N >> C;

    for(int i=0; i<N; i++) {
        int number;
        cin >> number;
        v.push_back(number);
    }

    sort(v.begin(), v.end());

    int lo = 0, hi = 1e9;
    while(lo+1 != hi) {
        int mid = (lo+hi) / 2;
        if(f(mid)) lo = mid;
        else hi = mid;
    }

    cout << lo;
}