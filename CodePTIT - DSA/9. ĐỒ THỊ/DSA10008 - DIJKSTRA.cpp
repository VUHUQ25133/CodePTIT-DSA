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

int V, E, S, u, v, w;
vector<vector<ii>> G;
vector<bool> checked;
array d;

struct cmp {
    bool operator() (ii a, ii b) {
        return a.second > b.second;
    }
};

void Dijkstra(int S) {
    priority_queue<ii, vector<ii>, cmp> q;
    q.push({S, 0});
    d[S] = 0;
    while (!q.empty()) {
        u = q.top().st, w = q.top().nd;
        q.pop();
        checked[u] = true;
        for (ii p : G[u]) {
            v = p.st;
            if (!checked[v]) {
                d[v] = min(d[v], w + p.nd);
                q.push({v, d[v]});
            }
        }
    }
    fu(i, 1, V) print d[i] << " ";
}

void case{
    scan V >> E >> S;
    G.assign(V + 1, {});
    checked.assign(V + 1, false);
    d.assign(V + 1, INT_MAX);

    while (E--) {
        scan u >> v >> w;
        G[u].push_back({v, w});
        G[v].push_back({u, w});
    }
    Dijkstra(S);
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho đồ thị có trọng số không âm G=<V, E> được biểu diễn dưới dạng danh sách cạnh trọng số. 
Hãy viết chương trình tìm đường đi ngắn nhất từ đỉnh u đến tất cả các đỉnh còn lại trên đồ thị.

Kết quả mỗi test là trọng số đường đi ngắn nhất 
từ đỉnh u đến các đỉnh còn lại của đồ thị theo thứ tự tăng dần các đỉnh.
*/