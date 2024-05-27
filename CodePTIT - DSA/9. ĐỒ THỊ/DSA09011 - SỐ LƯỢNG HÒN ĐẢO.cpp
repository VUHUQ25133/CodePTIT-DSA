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

int n, m, cnt;
int a[501][501];
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j) {
    a[i][j] = 0;
    fu(k, 0, 7) {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 1 and x <= n and y >= 1 and y <= m and a[x][y])
            dfs(x, y);
    }
}


void case{
    cnt = 0;
    cin >> n >> m;
    fu(i, 1, n) fu(j, 1, m) scan a[i][j];
    fu(i, 1, n) fu(j, 1, m) {
            if (a[i][j]) {
                cnt++;
                dfs(i, j);
            }
        }
    println(cnt);
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho một bản đồ kích thước N x M được mô tả bằng ma trận A[][].
A[i][j] = 1 có nghĩa vị trí (i, j) là nổi trên biển. 
2 vị trí (i, j) và (x, y) được coi là liền nhau nếu như nó có chung đỉnh hoặc chung cạnh. 
Một hòn đảo là một tập hợp các điểm (i, j) mà A[i][j] = 1 
và có thể di chuyển giữa hai điểm bất kì trong đó.

Nhiệm vụ của bạn là hãy đếm số lượng đảo xuất hiện trên bản đồ.
*/