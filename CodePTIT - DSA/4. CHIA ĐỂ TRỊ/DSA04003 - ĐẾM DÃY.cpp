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
const ll MAX = 123456789;
ll power(ll n, ll k) {
    if (k == 0) return 1;
    
    ll x = power(n, k / 2);
    if (k % 2 == 0) return (x * x) % MAX;
    return (n * ((x * x) % MAX)) % MAX;
}

void case {
    ll a;
    scan a;
    println(power(2, a-1));
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho số nguyên dương n. 
Hãy cho biết có bao nhiêu dãy số nguyên dương 
có tổng các phần tử trong dãy bằng n. 
*/