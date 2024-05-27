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

void case{
    int n, k;
    scan n >> k;
    vector<ll> f(1e5 + 1, 0);
    ll tmp = 0;
    fu(i, 1, k) {
        f[i] = (tmp + 1) % MOD;
        tmp = (tmp + f[i]) % MOD;
    }
    fu(i, k+1, n)
        fu(j, 1, k)
            f[i] = (f[i] + f[i - j]) % MOD;
    println(f[n]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Một chiếc cầu thang có N bậc. 
Mỗi bước, bạn được phép bước lên trên tối đa K bước. 
Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? 
(Tổng số bước đúng bằng N).
*/