#include <iostream>

using namespace std;

int main() {
    int memo[1001];
    int arr[1000];

    int count;
    cin >> count;

    for(int i=0; i<count; i++) {
        cin >> arr[i];
    }
    
    for(int i=0; i<count; i++) {
        int max = 0;
        for(int j=0; j<i; j++) {
            if(arr[j] < arr[i]) {
                if(max < memo[j])
                    max = memo[j];
            }
        }
        memo[i] = max+1;
    }

    int max=0;
    for(int i=0; i<count; i++) {
        if(max < memo[i])
            max = memo[i];
    }
    cout << max;
    return 0;
}