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
    int n, k;
    scan n >> k;
    ll tmp = 0;
    vector<ll> f(1e5 + 1, 0);
    fu(i, 1, k) {
        f[i] = (tmp + 1) % MOD;
        tmp = (tmp + f[i]) % MOD;
    }
    fu(i, k+1, n) {
        fu(j, 1, k) {
            f[i] += f[i - j];
            f[i] %= MOD;
        }
    }
    println(f[n]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Khu vui chơi trẻ em thiết kế một cầu thang có N bậc để di chuyển lên đỉnh tháp. 
Nhìn chung chân sinh viên khá là dài nên có thể đi từ 1 đến K bậc mỗi bước 
(chứ không chỉ là 1 bậc như trẻ em).
Hãy tính xem sinh viên có bao nhiêu cách để leo lên đến đỉnh.
*/