#include <iostream>
#include <vector>

using namespace std;

vector<int> parent;
const char saying[2][10] = {"YES", "NO"};

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

    for(int i=0; i<N+1; i++) {
        parent.push_back(i);
    }

    vector<bool> result;

    for(int i = 0; i < M; i++) {
        int op, u, v;
        scanf("%d %d %d", &op, &u, &v);

        if(op == 0) merge(u, v);
        if (op == 1) result.push_back((find(u) == find(v)) ? 0: 1);
    }

    for(int i=0; i<result.size(); i++)
        printf("%s\n", saying[result[i]]);
    return 0;
}

