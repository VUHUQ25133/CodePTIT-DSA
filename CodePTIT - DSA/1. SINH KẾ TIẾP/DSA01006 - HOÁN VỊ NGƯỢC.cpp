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

int n;
array a, b;

void OUT() {
    fu(i, 1, n) print a[i];
    print ' ';
}

void Try(int i) {
    fd(j, n, 1) {
        if (!b[j]) {
            a[i] = j;
            b[j] = 1;
            if (i == n) OUT();
            else Try(i + 1);
            b[j] = 0;
        }
    }
}

void case {
    scan n;
    a.resize(n + 1);
    b.resize(n + 1, 0);
    Try(1);
    endline();
}

MAIN{
    test 
        case;
    return 0;
}

/*
Cho số nguyên dương N. 
Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N theo thứ tự ngược. 
Ví dụ với N = 3 ta có kết quả: 321, 312, 231, 213, 132, 123.
*/