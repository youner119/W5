#include <iostream>
#include <string.h>

using namespace std;

int memo[1001][1001];

int BinominalCoefficient (const int& x, const int& y) {
    //(n, k) = (n-1, k) +(n-1, k-1);
    //(n, 0) = 1
    //(n, k) = (n, n-k)

    if(memo[x][y] != -1)
        return memo[x][y];
    else if(memo[x][x-y] != -1) {
        memo[x][y] = memo[x][x-y];
        return memo[x][y];
    }

    if(y == 0 || x == y) {
        memo[x][y] = 1;
        return 1;
    }

    memo[x][y] = (BinominalCoefficient(x-1, y) + BinominalCoefficient(x-1, y-1))%10007;
    return memo[x][y];
}

int main() {
    int n, k;
    memset(memo, -1, sizeof(memo));
    memo[1][0] = 1;
    
    scanf("%d %d", &n, &k);

    int result = BinominalCoefficient(n, k);

    printf("%d", result);
    
    return 0;
}