#include <iostream>
#include <queue>

using namespace std;

int main() {
    int arr[10] = {55, 3, 23, 45, 231, 1, 43, 5, 321, 3};
    priority_queue<int> pq;

    for(int i=0; i<10; i++)
        pq.push(arr[i]);

    printf("original: [");
    for(int i=0; i<10; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    for(int i=0; i<10; i++) {
        arr[9-i] = pq.top();
        pq.pop();
    }

    printf("sorted: [");
    for(int i=0; i<10; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    return 0;
}