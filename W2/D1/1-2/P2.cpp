#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[10] = {3, 5, 2, 6, 1, 32, 6, 3, 5, 100};
    vector<int> v;

    for(int i=0; i<10; i++)
        v.push_back(arr[i]);
    
    int max_value, min_value;
    max_value = min_value = *v.begin();

    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) {
        min_value = min(min_value, *iter);
        max_value = max(max_value, *iter);
    }

    printf("[");
    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        printf("%d, ", *iter);
    printf("]\n");
    printf("Max value: %d  Min Value: %d\n", max_value, min_value);

    return 0;
}