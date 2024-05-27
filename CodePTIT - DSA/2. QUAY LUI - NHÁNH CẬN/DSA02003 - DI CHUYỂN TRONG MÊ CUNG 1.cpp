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

int n, a[11][11];
vector<string> v;

void Try(int i, int j, string s) {
    if (i == n and j == n) {
        v.pb(s);
        return;
    }
    if (i < n and a[i+1][j]) Try(i+1, j, s + 'D');
    if (j < n and a[i][j+1]) Try(i, j+1, s + 'R');
}

void case{
    v.clear();
    scan n;
    fu(i, 1, n) 
        fu(j, 1, n) 
            scan a[i][j];
    
    if (!a[1][1] or !a[n][n]) {
        println("-1");
        return;
    }
    Try(1, 1, "");

    if (v.empty()) {
        println("-1");
        return;
    }
    sort(v.begin, v.end);
    for (auto x : v) cout << x << " ";
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N].
 Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) 
                 đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

    Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
    Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.

Hãy đưa ra một hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.
*/