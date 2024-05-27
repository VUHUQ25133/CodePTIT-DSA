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
    int a[501][501] = {};
    fu(i, 1, n) fu(j, 1, m) scan a[i][j];

    int ans = 0;
    int f[501][501] = {};
    fu(i, 1, n) {
        fu(j, 1, m) {
            if (!a[i][j]) f[i][j] = 0;
            else
                f[i][j] = min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]}) + 1;
            ans = max(ans, f[i][j]);
        }
    }
    println(ans);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho một bảng số N hàng, M cột chỉ gồm 0 và 1. 
Bạn hãy tìm hình vuông có kích thước lớn nhất, 
sao cho các số trong hình vuông toàn là số 1.
*/