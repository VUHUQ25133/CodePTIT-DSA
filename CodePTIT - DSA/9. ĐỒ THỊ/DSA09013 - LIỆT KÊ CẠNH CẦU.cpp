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

int V, E, u, v, x, y, lt;
matrix G;
vector <ii> edge;
vector<bool> checked;

void bfs(int s) {
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        u = q.front(); q.pop();
        checked[u] = 1;

        for (int v : G[u]) {
            if ((u == x && v == y) || (u == y && v == x))  continue;
            if (!checked[v]) {
                checked[v] = 1;
                q.push(v);
            }
        }
    }
}

void canhCau() {
    checked.clear(); checked.resize(V + 1, false);
    int new_lt = 0;
    fu(i, 1, V) {
        if (!checked[i]) {
            bfs(i);
            new_lt++;
        }
    }
    if (new_lt > lt) cout << x << " " << y << " ";
}

void case {
    lt = 0;
    x = y = -1;
    scan V >> E;
    G.clear(); G.resize(V + 1);
    edge.clear(); edge.resize(E + 1);
    checked.clear(); checked.resize(V + 1, 0);
    fu(i, 1, E) {
        scan u >> v;
        edge[i] = {u, v};
        G[u].pb(v);
        G[v].pb(u);
    }
    fu(i, 1, V) {
        if (!checked[i]) {
            bfs(i);
            lt++;
        }
    }
    fu(i, 1, E) {
        x = edge[i].st;
        y = edge[i].nd;
        canhCau();
    }
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*

*/