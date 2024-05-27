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

int V, E, u, v, x, y;
matrix G;
vector <ii> edge;
vector<bool> checked;

void bfs(int s) {
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        u = q.front(); q.pop();
        if (!checked[u]) {
            print u << ' ';
            checked[u] = true;
        }
        for (int v : G[u]) {
            if (!checked[v]) {
                q.push(v);
            }
        }
    }
}



void case{
    scan V >> E >> x;
    G.clear(); G.resize(V + 1);
    checked.clear(); checked.resize(V + 1, 0);
    fu(i, 1, E) {
        scan u >> v;
        G[u].pb(v);
    }
    bfs(x);
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*

*/