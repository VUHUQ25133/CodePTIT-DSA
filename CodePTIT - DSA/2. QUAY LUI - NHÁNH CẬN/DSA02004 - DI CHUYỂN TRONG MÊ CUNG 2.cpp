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

const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};
const string S = "URDL";

int n;
bool a[10][10];
vector<string> v;

void Try(int i, int j, string s) {
    if (i == n and j == n) {
        v.pb(s);
        return;
    }
    fu(k, 0, 3) {
        int r = i + X[k];
        int c = j + Y[k];
        if (r >= 1 and r <= n and c >= 1 and c <= n and a[r][c]) {
            a[r][c] = false;
            Try(r, c, s + S[k]);
            a[r][c] = true;
        }
    }
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
    a[1][1] = false;
    Try(1, 1, "");

    if (v.empty()) {
        println("-1");
        return;
    }
    sort(v.begin, v.end);
    for (auto x : v) print x << " ";
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
    Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
    Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.
    
Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.
*/