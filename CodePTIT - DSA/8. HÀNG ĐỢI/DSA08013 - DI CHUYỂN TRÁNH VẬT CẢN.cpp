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

int n, ans;
vector<string> G;
ii S, T;
vector<vector<bool>> vs;

void bfs() {
    vs.clear();
    vs.resize(n, vector<bool>(n, 0));
    vs[S.st][S.nd] = 1;

    queue<pair<ii, int>> q;
    q.push({S, 0});

    while (!q.empty()) {
        ii p = q.front().st;
        int cou = q.front().nd;
        q.pop();

        // Di chuyen sang ngang
        fd(i, p.nd - 1, 0) {
            if (G[p.st][i] == 'X')
                break;
            if (!vs[p.st][i]) {
                if (p.st == T.st and i == T.nd) {
                    ans = min(ans, cou + 1);
                }
                else {
                    vs[p.st][i] = 1;
                    q.push({{p.st, i}, cou + 1});
                }
            }
        }
        fu(i, p.nd + 1, n - 1) {
            if (G[p.st][i] == 'X')
                break;
            if (!vs[p.st][i]) {
                if (p.st == T.st and i == T.nd) {
                    ans = min(ans, cou + 1);
                }
                else {
                    vs[p.st][i] = 1;
                    q.push({{p.st, i}, cou + 1});
                }
            }
        }

        // Di chuyen len xuong
        fd(i, p.st - 1, 0) {
            if (G[i][p.nd] == 'X')
                break;
            if (!vs[i][p.nd]) {
                if (i == T.st and p.nd == T.nd) {
                    ans = min(ans, cou + 1);
                }
                else {
                    vs[i][p.nd] = 1;
                    q.push({{i, p.nd}, cou + 1});
                }
            }
        }
        fu(i, p.st + 1, n - 1) {
            if (G[i][p.nd] == 'X')
                break;
            if (!vs[i][p.nd]) {
                if (i == T.st and p.nd == T.nd) {
                    ans = min(ans, cou + 1);
                }
                else {
                    vs[i][p.nd] = 1;
                    q.push({{i, p.nd}, cou + 1});
                }
            }
        }
    }
}
void case {
    ans = INT_MAX;
    scan n;
    G.resize(n);
    fu(i, 0, n-1) scan G[i];
    scan S.st >> S.nd >> T.st >> T.nd;
    bfs();
    println(ans);
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho một bảng kích thước N x N, trong đó có các ô trống ‘.’ và vật cản ‘X’. 
Các hàng và các cột được đánh số từ 0.
Mỗi bước di chuyển, bạn có thể đi từ ô (x, y) tới ô (u, v) 
nếu như 2 ô này nằm trên cùng một hàng hoặc một cột, 
và không có vật cản nào ở giữa.
Cho điểm xuất phát và điểm đích. Bạn hãy tính số bước di chuyển ít nhất?
*/