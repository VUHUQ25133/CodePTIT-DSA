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

int V, E, u, v, OK;
matrix G;
array checked, ans;

void DFS(int u, int count) {
    if (count == V) OK = true;
    if (OK) return;

    for (int v : G[u]) {
        if (!checked[v]) {
            checked[v] = true;
            DFS(v, count + 1);
            checked[v] = false;
        }
    }
}


void case{
    OK = 0;
    scan V >> E;
    G.assign(V + 100, {});
    checked.assign(V + 100, 0);
    ans.clear();
    while (E--) {
        scan u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
    fu(i, 1, V) {
        checked.assign(V + 100, 0);
        checked[i] = true;
        DFS(i, 1);
        if (OK) break;
    }
    println((OK ? 1 : 0));
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho đồ thị vô hướng G = <V, E>, hãy kiểm tra xem đồ thị có đường đi Hamilton hay không?
*/