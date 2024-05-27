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

ll a[10005];

void init() {
    int i2 = 1, i3 = 1, i5 = 1;
    a[1] = 1;
    fu(i, 2, 10000) {
        a[i] = min({a[i2] * 2, a[i3] * 3, a[i5] * 5});
        if (a[i] == a[i2] * 2) i2++;
        if (a[i] == a[i3] * 3) i3++;
        if (a[i] == a[i5] * 5) i5++;
    }
}

void case{
    int n;
    scan n;
    println(a[n]);
}
MAIN{
    init();
    test 
        case;
    return 0;
}

/*
Số Ugly là các số chỉ có ước số là 2, 3, 5. 
Theo qui ước số 1 cũng là 1 số Ugly. 
Dưới đây là 11 số Ugly đầu tiên: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15. 
Cho số tự nhiên N, nhiệm vụ của bạn là tìm số Ugly thứ N.
*/