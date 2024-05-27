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

void case{
    int n, m, x, y;
    scan n >> m;
    matrix g(n + 1);
    while (m--) {
        scan x >> y;
        g[x].pb(y);
    }
    fu(i, 1, n) {
        print i << ": ";
        for (int j : g[i]) print j << " ";
        endline();
    }
}
MAIN {
    test
        case;
    return 0;
}

/*
	CHUYỂN DANH SÁCH CẠNH SANG DANH SÁCH KỀ
    (có hướng)
*/