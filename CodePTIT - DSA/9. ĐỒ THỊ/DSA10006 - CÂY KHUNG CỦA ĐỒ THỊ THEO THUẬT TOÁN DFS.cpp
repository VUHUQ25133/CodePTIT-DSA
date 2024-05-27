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

int n, m, start, u, v;
matrix G;
vector<ii> tree;
vector<bool> checked;


void DfsTree(int start) {
    stack<int> st;
    st.push(start);
    checked[start] = true;

    while (!st.empty()) {
        u = st.top();
        st.pop();
        for (int v : G[u]) {
            if (!checked[v]) {
                tree.pb({u, v});
                st.push(u);
                st.push(v);
                checked[v] = true;
                break;
            }
        }
    }
}

void Output() {
    if (tree.size() != n - 1) {
        println(-1);
        return;
    }
    fu(i, 1, n) {
        if (!checked[i]) {
            println(-1);
            return;
        }
    }
    for (auto i : tree) print i.st << " " << i.nd el;
}

void case{
    scan n; 
    scan m ;
    scan start;
    G.assign(n + 1, {});
    checked.assign(n + 1, false);
    tree.clear();

    while (m--) {
        scan u;
        scan v;
        G[u].pb(v);
        G[v].pb(u);
    }
    DfsTree(start);
    Output();
}
MAIN {
    test
        case;
    return 0;
}

/*
 Hãy xây dựng một cây khung của đồ thị G 
 với đỉnh u ∈ V là gốc của cây bằng thuật toán DFS.
*/