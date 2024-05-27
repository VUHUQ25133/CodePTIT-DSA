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

void DFS(int u, int pre, array path) {
    checked[u] = true;
    for (int v : G[u]) {
        if (v == 1 and v != pre and ans.empty()) {
            path.pb(v);
            ans = path;
            return;
        }
        if (!checked[v]) {
            path.pb(v);
            DFS(v, u, path);
            path.pop_back();
        }
    }
}


void case{
    OK = 0;
    scan V >> E;
    G.assign(V + 1, {});
    checked.assign(V + 1, 0);
    ans.clear();
    while (E--) {
        scan u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
    for (auto &i : G) sort(i.begin, i.end);
    DFS(1, -1, {1});

    if (ans.empty()) println("NO");
    else{
        for (int i : ans) print i << " ";
        endline();
    }
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. 
Hãy kiểm tra xem đồ thị có chu trình từ đỉnh 1 hay không, 
nếu có, hãy in ra chu trình đầu tiên tìm thấy theo DFS.
*/