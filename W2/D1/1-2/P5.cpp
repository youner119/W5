#include <iostream>
#include <algorithm>

using namespace std;

typedef struct _Point
{
    int x;
    int y;
} Point;

bool cmp(const Point &p1, const Point &p2)
{
    if (p1.y < p2.y) {
        return true;
    }
    else if (p1.y == p2.y) {
        return p1.x > p2.x;
    }
    else {
        return false;
    }
}

int main() {
    Point p[10];
    int arr[10][2] = {{1, 2}, {2, 3}, {10, 3}, {2, 2}, {34, 1}, {35, 1}, {4, 4}, {4, 3}, {53, 1}, {3, 3}};

    for(int i=0; i<10; i++) {
        p[i].x = arr[i][0];
        p[i].y = arr[i][1];
    }

    printf("original: [");
    for(int i=0; i<10; i++) {
        printf("( %d, %d ), ", p[i].x, p[i].y);
    }
    printf("\n");
    
    stable_sort(p, p+10, cmp);

    printf("sorted: [");
    for(int i=0; i<10; i++) {
        printf("( %d, %d ), ", p[i].x, p[i].y);
    }
    printf("\n");

    return 0;

}