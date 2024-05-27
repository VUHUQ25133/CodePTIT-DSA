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

void bfs(int start) {
    checked.clear(); checked.resize(V + 1, 0);
    queue<int> q;
    q.push(start);
    checked[start] = true;

    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int v : G[u]) {
            if (checked[v] == false) {
                q.push(v);
                checked[v] = true;
            }
        }
    }
}

void case{
    cin >> V >> E;
    G.clear(); G.resize(V + 1);
    while(E--) {
        scan u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int Q;scan Q;
    while (Q--) {
        scan x >> y;
        bfs(x);
        println((checked[y] ? "YES" : "NO"));
    }
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho đồ thị vô hướng có N đỉnh và M cạnh. 
Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi 
giữa 2 đỉnh x và y có tồn tại đường đi tới nhau hay không?
*/