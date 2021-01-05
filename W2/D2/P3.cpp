//https://m.blog.naver.com/orbis1020/220664563768
//최대공약수 구해서 격자점 존재하면 (가로) + (세로)  - (가로 세로의 최대 공약수)
// 격자점 존재 안하면 (가로) + (세로) - 1

#include <iostream>

using namespace std;

int main(void) {
    int row, column;
    cin >> row >> column;

    int a, b, n;
    
    if(row > column) {
        a= row;
        b = column;
    } else {
        a = column;
        b = row;
    }

    while(b != 0) {
        n = a%b;
        a = b;
        b = n;
    }

    if(a == 1) {
        cout << row + column -1;
    } else {
        cout << row + column - a;
    }

    return 0;
}