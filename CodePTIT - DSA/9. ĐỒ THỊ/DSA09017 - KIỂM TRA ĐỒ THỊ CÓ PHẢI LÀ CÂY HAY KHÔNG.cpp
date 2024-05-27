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

int V, E, u, v, res;
matrix G;
array checked;

void DFS(int u) {
    checked[u] = true;
    for (int v : G[u]) {
        if (!checked[v]) {
            DFS(v);
        }
    }
}


void case{
    scan V;
    G.assign(V + 10, {});
    checked.assign(V + 10, 0);
    fu(i, 1, V-1){
        scan u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
    //  Ktra Liên thông
    DFS(1);
    fu(i, 1, V) {
        if (!checked[i]) {
            println("NO");
            return;
        }
    }
    println("YES");
}
MAIN {
    test
        case;
    return 0;
}

/*
(tương tự:
    N sinh viên, trong đó có M cặp là bạn bè của nhau. 
    Bạn của bạn cũng là bạn, tức là nếu A là bạn của B, B là bạn của C thì A và C cũng là bạn bè của nhau.
    Các bạn hãy xác định xem số lượng sinh viên nhiều nhất trong một nhóm bạn là bao nhiêu?
)
*/