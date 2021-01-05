#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string.h>
#include <algorithm>

using namespace std;

bool visited[1001];
vector<int> graph[1001];
int N, M;
int u, v;

void dfs(int cur) {
    visited[cur] = true;
    cout << cur << ' ';
    for (int i = 0; i < graph[cur].size(); i++) {
        int there = graph[cur][i];
        if (visited[there]) continue;
        dfs(there);
    }
}

void bfs(int cur) {
    queue<int> q;
    visited[cur] = true;
    q.push(cur);
    while (!q.empty()) {
        int here = q.front();
        q.pop();
        cout << here << ' ';
        for (int i = 0; i < graph[here].size(); i++) {
            int there = graph[here][i];
            if (visited[there]) continue;
            visited[there] = true;
            q.push(there);
        }
    }
}

int main() {
    int N, M, V;
    scanf("%d %d %d", &N, &M, &V);

    for(int i=0; i<M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0; i<N; i++)
        sort(graph[i+1].begin(), graph[i+1].end());

    //dfs
    dfs(V);

    memset(visited, 0, sizeof(visited));
    printf("\n");
    //bfs
    bfs(V);
}