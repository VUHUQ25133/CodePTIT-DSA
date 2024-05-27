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

int V, E, s, t, u, v, x, y;
matrix G;
vector<bool> checked;
array way;
void dfs(int s) {
    stack<int> st;
    st.push(s);

    while (!st.empty()) {
        u = st.top(); st.pop();
        checked[u] = true;
        if (u == t) return;

        for (int v : G[u]) {
            if (checked[v] == false) {
                st.push(u);
                st.push(v);
                way[v] = u;
                break;
            }
        }
    }
}
void trace() {
    if (!checked[t]) {
        print -1;
        return;
    }
    stack<int> st_way;
    int last = t;
    while (last != -1) {
        st_way.push(last);
        last = way[st_way.top()];
    }
    while (!st_way.empty()) {
        cout << st_way.top() << " ";
        st_way.pop();
    }
}

void case{
    scan  V >> E >> s >> t;
    G.clear(); G.resize(V + 1);
    checked.clear(); checked.resize(V + 1, 0);
    way.clear(); way.resize(V + 1, -1);
    while (E--) {
        scan u >> v;
        G[u].pb(v);
    }
    dfs(s);
    trace();
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*

*/