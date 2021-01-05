#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[1001];
bool visited[1001];
int count =0;

void bfs(int cur) {
    queue<int> q;
    visited[cur] = true;
    q.push(cur);
    while (!q.empty()) {
        int here = q.front();
        q.pop();
        for (int i = 0; i < graph[here].size(); i++) {
            int there = graph[here][i];
            if (visited[there]) continue;
            visited[there] = true;
            q.push(there);
        }
    }
    count++;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for(int i=0; i<M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0; i<N; i++) {
        if(visited[i+1]) continue;
        bfs(i+1);
    }
    printf("%d", count);
    return 0;
}