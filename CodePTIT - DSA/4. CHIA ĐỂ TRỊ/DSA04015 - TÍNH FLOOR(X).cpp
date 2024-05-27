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

void case {
    ll n; scan n;
    ll x; scan x; 
    
    vector<ll> a(n);
    for (auto &i : a) scan i;
    int pos = upper_bound(a.begin, a.end, x) - a.begin;
    if (pos <= 0) pos = -1;
    println(pos);
}
MAIN{
    test 
        case;
    return 0;
}

/*
 Nhiệm vụ của bạn là tìm  phần tử lớn nhất trong mảng A[] nhỏ hơn hoặc bằng X.
*/