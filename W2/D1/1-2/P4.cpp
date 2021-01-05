#include <iostream>
#include <algorithm>

typedef struct _Point {
    int x;
    int y;
}Point;

void sort(Point* p) {
    for(int i=0; i<10; i++) {
        for(int j=0; j<9-i; j++) {
            if(p[j].y > p[j+1].y || (p[j].y == p[j+1].y && p[j].x < p[j+1].x)) {
                int x, y;
                x = p[j].x;
                y = p[j].y;
                p[j].x = p[j+1].x;
                p[j].y = p[j+1].y;
                p[j+1].x = x;
                p[j+1].y = y;
            }
        }
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
    
    sort(p);

    printf("sorted: [");
    for(int i=0; i<10; i++) {
        printf("( %d, %d ), ", p[i].x, p[i].y);
    }
    printf("\n");

    return 0;
}