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
array vt, cnt; // vị trí có người đứng & số người có thể đi qua
vector<bool> checked;

void DFS(int u) {
    checked[u] = true;
    cnt[u]++;
    for (int v : G[u]) {
        if (!checked[v]) DFS(v);
    }
}

void case{
    int k, n, m; scan k >> n >> m;
    G.assign(n + 1, {});
    cnt.assign(n + 1, 0);
    vt.clear();
    fu(i, 0, k-1) {
        scan u;
        vt.pb(u);
    }
    while (m--) {
        scan u >> v;
        G[u].pb(v);
    }

    for (int u : vt) {
        checked.assign(n + 1, false);
        DFS(u);
    }
    int res = 0;
    fu(i, 1, n) {
        if (cnt[i] == k)
            res++;
    }
    println(res);
}

MAIN {
    test
        case;
    return 0;
}

/*
Có K người đứng tại vị trí nào đó trong N địa điểm cho trước được đánh số từ 1..N. 
Các điểm được nối với nhau bởi M đoạn đường một chiều (1 ≤ M ≤ 10,000) 
(không có đoạn đường nào nối một điểm với chính nó).

Mọi người muốn cùng tụ họp tại một địa điểm nào đó. 
Tuy nhiên, với các đường đi cho trước, chỉ có một số địa điểm nào đó có thể được chọn là điểm họp mặt. 
Cho trước K, N, M và vị trí ban đầu của K người cùng với M đường đi một chiều, 
hãy xác định xem có bao nhiêu điểm có thể được chọn làm điểm họp mặt. 
*/