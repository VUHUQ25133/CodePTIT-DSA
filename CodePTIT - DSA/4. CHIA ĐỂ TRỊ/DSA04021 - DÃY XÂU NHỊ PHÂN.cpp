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

ll fibL(int n){
    if (n == 1 or n == 2) return 1;
    ll a = 1, b = 1, c = 0;
 
    for (int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
char find_X(int n, ll i) {
    if (n == 1) return '0';
    if (n == 2) return '1';
    ll length = fibL(n - 2);
    if (i <= length) return find_X(n - 2, i);
    else return find_X(n - 1, i - length);
}
void case {
    ll n; scan n;
    ll k; scan k;
    println(find_X(n, k));
}

MAIN{
    test 
        case;
    return 0;
}

/*
Người ta tạo ra một dãy xâu ký tự nhị phân X[] trong đó:
    X[1] = “0”
    X[2] = “1”
    X[i] = X[i-2] + X[i-1] với i>2
Với phép cộng (+) là phép nối hai xâu với nhau. 

Cho hai số tự nhiên N và K,
Hãy xác định ký tự thứ K trong xâu X[N] là ký tự ‘0’ hay ký tự ‘1’.
*/