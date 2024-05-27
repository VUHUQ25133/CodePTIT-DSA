#include <bits/stdc++.h>
using namespace std;
#define     fast            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     test            fast int T; cin >> T; cin.ignore(); while (T--)

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
    int n, m;
    scan n >> m;
    int a[n+1][m+1] = {};
    fu(i, 1, n) fu(j, 1, m) scan a[i][j];

    vector<vector<ll>>  f(n + 1, vector<ll>(m + 1, 1e9));

    f[0][0] = 0;
    fu(i, 1, n) fu(j, 1, m) f[i][j] = min({f[i-1][j], f[i][j-1], f[i-1][j-1]}) + a[i][j];
    println(f[n][m]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho bảng A[] kích thước N x M (N hàng, M cột). 
Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới. 
Khi đi qua ô (i, j), điểm nhận được bằng A[i][j].
Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.
*/