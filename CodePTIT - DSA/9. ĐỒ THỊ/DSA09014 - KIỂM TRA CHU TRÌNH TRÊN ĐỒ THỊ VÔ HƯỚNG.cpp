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
vector<bool> checked;

void bfs(int s) {
    queue<ii> q;
    q.push({s, 0});
    checked[s] = 1;

    while (!q.empty()) {
        u = q.front().st;
        pre = q.front().nd;
        q.pop();

        for (int v : G[u]) {
            if (checked[v] and v != pre) {
                OK = 1;
                return;
            }
            if (!checked[v]) {
                checked[v] = 1;
                q.push({v, u});
            }
        }
    }
}

void case{
    OK = 0;
    scan V >> E;
    G.clear(); G.resize(V + 1);
    checked.clear(); checked.resize(V + 1, 0);
    while(E--) {
        scan u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
    fu(i, 1, V) {
        if (!checked[i]) {
            bfs(i);
        }
        if (OK) break;
    }
    println((OK ? "YES" : "NO"));
}
MAIN {
    test
        case;
    return 0;
}

/*
Hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?
*/