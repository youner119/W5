#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int parent[10000];

int find(int u) {
    if(parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
    parent[find(v)] = find(u);
}

int main() {
    int V, E;

    scanf("%d %d", &V, &E);

    for(int i=0; i<10000; i++)
        parent[i] = i;
    
    vector<vector<int> > graph;    
    for(int i=0; i<E; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph.push_back({w, u, v});
    }
    
    sort(graph.begin(), graph.end());

    for(int i=0; i<E; i++) {
        if(find(graph[i][1]) != find(graph[i][2])) merge(graph[i][1], graph[i][2]);
        else graph[i][0] = 0;
    }

    int sum = 0;
    for(int i=0; i<E; i++) {
        sum += graph[i][0];
    }
    printf("%d", sum);
    return 0;
}

