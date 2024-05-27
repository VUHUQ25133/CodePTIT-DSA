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

int V, E, u, v, pre, OK;
matrix G;
array checked;

void DFS(int u) {
    if (OK) return;
    checked[u] = 1;
    for (int v : G[u]) {
        if (!checked[v])
            DFS(v);
        else if (checked[v] == 1) {
            OK = 1;
            return;
        }
    }
    checked[u] = 2;
}

void case{
    OK = 0;
    scan V >> E;
    G.assign(V + 1, {});
    checked.assign(V + 1, 0);
    while (E--) {
        scan u >> v;
        G[u].pb(v);
    }
    fu(i, 1, V)
        if (!checked[i] and !OK)
            DFS(i);
    println((OK ? "YES" : "NO"));
}

MAIN {
    test
        case;
    return 0;
}

/*

*/