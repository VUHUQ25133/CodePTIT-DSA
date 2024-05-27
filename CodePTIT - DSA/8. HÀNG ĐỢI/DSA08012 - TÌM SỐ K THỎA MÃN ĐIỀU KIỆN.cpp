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

array a;
bool vs[6];

void Try(int n) {
    a.pb(n);
    fu(i, 0, 5) {
        if (!vs[i]) {
            vs[i] = true;
            Try(n * 10 + i);
            vs[i] = false;
        }
    }
}

void Init() {
    a.pb(0);
    fu(i, 1, 5) {
        vs[i] = true;
        Try(i);
        vs[i] = false;
    }
    sort(a.begin, a.end);
}
void case {
    int l, r;
    scan l >> r;
    int res = upper_bound(a.begin, a.end, r) - lower_bound(a.begin, a.end, l);
    println(res);
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho hai số nguyên dương L, R. 
Hãy đưa ra số các số K trong khoảng [L, R] thỏa mãn điều kiện:
    Tất cả các chữ số của K đều khác nhau.
    Tất cả các chữ số của K đều nhỏ hơn hoặc bằng 5.
Ví dụ với L = 4, R = 13 ta có 5 số thỏa mãn yêu cầu là 4, 5, 10, 12, 13,
*/