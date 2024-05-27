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


struct Data {
    int r, c;
    int cnt;

    Data(int r, int c, int cnt) {
        this->r = r;
        this->c = c;
        this->cnt = cnt;
    }
};

void case {
    int n, m;
    scan n >> m;
    matrix a(n + 1, array(m + 1));
    vector<vector<bool>> vs(n + 1, vector<bool>(m + 1, 0));
    fu (i, 1, n) fu (j, 1, m)
            scan a[i][j];


    queue<Data> q;
    q.push(Data(1, 1, 0));
    while (!q.empty()) {
        Data x = q.front();
        q.pop();

        int i = x.r, j = x.c;
        if (i == n and j == m) {
            println(x.cnt);
            return;
        }

        if (i + a[i][j] <= n and vs[i + a[i][j]][j] == 0) {
            vs[i + a[i][j]][j] = 1;
            q.push(Data(i + a[i][j], j, x.cnt + 1));
        }
        if (j + a[i][j] <= m and vs[i][j + a[i][j]] == 0) {
            vs[i][j + a[i][j]] = 1;
            q.push(Data(i, j + a[i][j], x.cnt + 1));
        }
    }
    println(-1);
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho ma trận A[M][N]. 
Nhiệm vụ của bạn hãy tìm số bước đi ít nhất dịch chuyển 
từ vị trí A[1][1] đến vị trí A[M][N]. 
Biết mỗi bước đi ta chỉ được phép dịch chuyển 
đến vị trí A[i][j + A[i][j]] hoặc vị trí A[i + A[i][j]][j] bên trong ma trận.
*/