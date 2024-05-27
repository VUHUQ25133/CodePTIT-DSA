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
vector<bool> checked;

void dfs(int u) {
    stack<int> st;
    st.push(u);
    checked[u] = 1;
    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (checked[u] == false) {
            print u << " ";
            checked[u] = true;
        }

        for (int v : G[u]) {
            if (!checked[v]) {
                checked[v] = true;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

void case{
    int LT_cnt = 0;
    scan V >> E;
    G.clear(); G.resize(V + 10);
    checked.clear(); checked.resize(V + 10, 0);
    while (E--) {
        scan x >> y;
        G[x].pb(y);
        G[y].pb(x);
    }
    fu(i, 1, V) {
        if (!checked[i]) {
            dfs(i);
            LT_cnt++;
        }
    }
    println(LT_cnt);
}
MAIN {
    test
        case;
    return 0;
}

/*

*/