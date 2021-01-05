#include <iostream>
#include <vector>
#include <queue>
#include <string.h>

using namespace std;

const int MAXN = 1000;

int N, M;

char arr[MAXN][MAXN+1];
int dist[MAXN][MAXN];
int b_dist[MAXN][MAXN];

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

bool inrange(int y, int x) {
    return  y >= 0 && y < N&&x >= 0 && x < M;
}

int main() {
    scanf("%d %d", &N, &M);

    for(int i=0; i<N; i++) {
        scanf("%s", arr[i]);
    }

    queue<vector<int>> q;
    q.push(vector<int> (3, 0));
    memset(dist, -1, sizeof(dist));
    memset(b_dist, -1, sizeof(b_dist));
    dist[0][0] = 1;
    
    while(!q.empty()) {
        int uy=q.front()[0], ux = q.front()[1], bc = q.front()[2];
        q.pop();

        for(int m=0; m < 4; m++) {
            int vy = uy + dy[m], vx = ux + dx[m];
            if(!inrange(vy, vx)) continue;
            if(bc == 1 && arr[vy][vx] == '1') continue;
            vector<int> push_vector = {vy, vx};
            int r_dist = (bc) ? b_dist[uy][ux] + 1 : dist[uy][ux] + 1;
            int (*temp_dist)[MAXN] = (bc || arr[vy][vx] == '1') ? b_dist : dist;
            if(temp_dist[vy][vx] == -1 || r_dist < temp_dist[vy][vx]) {
                temp_dist[vy][vx] = r_dist;
                push_vector.push_back((arr[vy][vx] == '1')? 1: bc);
                q.push(push_vector);    
            }
        }
    }

    //int result = (dist[N-1][M-1] == -1) ?  b_dist[N-1][M-1] : (b_dist[N-1][M-1] < dist[N-1][M-1]) ? b_dist[N-1][M-1] : dist[N-1][M-1];
    int result;
    if(dist[N-1][M-1] == -1 && b_dist[N-1][M-1] == -1)
        result = -1;
    else if(dist[N-1][M-1] == -1)
        result = b_dist[N-1][M-1];
    else if(b_dist[N-1][M-1] == -1)
        result = dist[N-1][M-1];
    else
        result = (b_dist[N-1][M-1] < dist[N-1][M-1]) ? b_dist[N-1][M-1] : dist[N-1][M-1];

    
    printf("%d\n", result);
    return 0;
}