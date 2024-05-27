#include <bits/stdc++.h>
using namespace std;
#define     fast            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     test            fast int T; cin >> T; while (T--)

#define     fu(i, a, b)     for (int i = a; i <= b; i++)
#define     fd(i, b, a)     for (int i = b; i >= a; i--)
#define     fill(a, b)      memset(a, b, sizeof(a))

#define     matrix          vector<vector<int>>
#define     array           vector<int>
#define     pb              push_back
#define     begin           begin()
#define     end             end()

#define     ii              pair<int, int>
#define     st              first
#define     nd              second
#define     ll              long long
#define     MOD             1000000007

#define     scan            cin >>
#define     print           cout <<
#define     el              << '\n'
#define     println(n)      cout << n << '\n'
#define     endline()       cout << '\n'

#define     MAIN            int main()
#define     case            testcase()

int V, E, u, v, start;
matrix G;
vector<bool> checked;
vector <ii> tree;

void BfsTree(int start) {
    queue<int> q;
    q.push(start);
    checked[start] = true;

    while (!q.empty()) {
        u = q.front(); q.pop();

        for (int v : G[u]) {
            if (!checked[v]) {
                tree.pb({u, v});
                q.push(v);
                checked[v] = true;
            }
        }
    }
}
void Output() {
    if (tree.size() != V - 1) {
        println(-1);
        return;
    }
    fu(i, 1, V) {
        if (!checked[i]) {
            println(-1);
            return;
        }
    }
    for (auto i : tree)
        print i.st << " " << i.nd el;
}


void case{
    scan V >> E >> start;
    G.assign(V + 1, {});
    checked.assign(V + 1, false);
    tree.clear();

    while (E--) {
        scan u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
    BfsTree(start);
    Output();
}
MAIN {
    test
        case;
    return 0;
}

/*
Hãy xây dựng một cây khung của đồ thị G 
với đỉnh u ∈ V là gốc của cây bằng thuật toán BFS.
*/