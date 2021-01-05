#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> >  memo(1025, vector<int>(1025, -1));
vector< vector<int> > arr(1025, vector<int>(1025, -1));

/*int F(int x, int y) {
    if(memo[x][y]!= -1) return memo[x][y];
    return memo[x][y] = F(x-1, y) + F(x, y-1) - F(x-1, y-1) + arr[x][y];
}
*/

int main() {
    int N, M;
    cin >> N >> M;
    vector< vector<int> >  memo(N+1, vector<int>(N+1, -1));
    vector< vector<int> > arr(N+1, vector<int>(N+1, -1));
    for(int i=0; i<N+1; i++) {
        memo[0][i] = 0;
        memo[i][0] = 0;
        arr[0][i] = 0;
        arr[i][0] = 0;
    }
    //입력
    for(int i=0; i<N; i++) {
        for(int j = 0; j<N; j++) {
            scanf("%d", &arr[i+1][j+1]);
        }       
    }

    for(int x = 1; x <= N; x++) {
        for(int y=1; y<= N; y++) {
            memo[x][y] = memo[x-1][y] + memo[x][y-1] - memo[x-1][y-1] + arr[x][y];
        }
    }

    vector<int> v;
    for(int k = 0; k<M; k++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
        int result = memo[x2][y2] - memo[x1-1][y2] - memo[x2][y1-1] + memo[x1-1][y1-1];
        v.push_back(result);
    }

    vector<int>::iterator iter = v.begin();
    while(1) {
        printf("%d", *iter);
        ++iter;
        if(iter == v.end())
            break;
        printf("\n");
    }
    return 0;
}