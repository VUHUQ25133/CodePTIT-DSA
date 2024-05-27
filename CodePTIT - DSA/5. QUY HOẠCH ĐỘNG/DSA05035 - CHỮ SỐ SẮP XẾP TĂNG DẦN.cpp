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

ll a[11], f[101];

void Init() {
    fu(i, 1, 10) a[i] = 1;
    f[1] = 10;
    fu(i, 2, 100) {
        fu(j, 1, 9) {
            ll s = 0;
            fu (k, j, 9) s += a[k];
            a[j] = s;
            f[i] = (f[i] + s) % MOD;
        }
    }
    fu(i, 2, 100) f[i] = (f[i] + f[i - 1]) % MOD;
}


void case {
    int n; scan n;
    println(f[n]);
}
MAIN{
    Init();
    test 
        case;
    return 0;
}

/*
Xét các số X có các chữ số được sắp xếp tăng dần, 
tức a[1] ≤ a[2] ≤ … ≤ a[N] 
trong đó a[1], a[2], …, a[N] lần lượt là các chữ số của X. 
Chẳng hạn 223, 8999, …

Cho trước số chữ số N. Nhiệm vụ của bạn là đếm xem có bao nhiêu số như vậy.
*/