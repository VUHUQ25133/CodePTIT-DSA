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

void case {
    string s; scan s;
    ll f[15], res = 0;
    f[0] = s[0] - '0';
    res = f[0];
    fu(i, 1, s.length() - 1) {
        int t = s[i] - '0';
        f[i] = f[i - 1] * 10 + t * (i + 1);
        res += f[i];
    }
    println(res);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho số nguyên dương N được biểu diễn như một xâu ký tự số.
Nhiệm vụ của bạn là tìm tổng của tất cả các số tạo bởi các xâu con của N. 
Ví dụ N = ”1234” ta có kết quả là 1670 = 1 + 2 + 3 + 4 + 12 + 23 + 34 + 123 + 234 + 1234.
*/