#include <iostream>


int parent[500000];

int find(int u) {
    if(parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
    parent[find(v)] = find(u);
}

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    for(int i=0; i<N; i++) {
        parent[i] = i;
    }
    int count = 0;
    for(int i=0; i<M; i++) {
        int u, v;

        scanf("%d %d", &u, &v);
        if(find(u) != find(v))
            merge(u, v);
        else
            count = (!count) ? i+1 : count ;
    }

    printf("%d", count);
    return 0;
}