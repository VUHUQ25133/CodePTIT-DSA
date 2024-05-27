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

int f[101][101][101];
void case{
    int n, m, k, res = 0;
    scan n >> m >> k;
    string x, y, z;
    scan x >> y >> z;

    fill(f, 0);
    fu(i, 1, n) {
        fu(j, 1, m) {
            fu(l, 1, k) {
                if (x[i - 1] == y[j - 1] and x[i - 1] == z[l - 1])
                    f[i][j][l] = f[i - 1][j - 1][l - 1] + 1;
                else
                    f[i][j][l] = max({f[i - 1][j][l], f[i][j - 1][l], f[i][j][l - 1]});

                res = max(res, f[i][j][l]);
            }
        }
    }
    println(res);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho ba xâu ký tự X, Y, Z. Nhiệm vụ của bạn là tìm độ dài dãy con chung dài nhất có mặt trong cả ba xâu.
*/