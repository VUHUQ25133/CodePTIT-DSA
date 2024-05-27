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
    string a, b;
    scan a; scan b;
    ll x = 0, y = 0;
    for (char c : a) x = x * 2 + (c - '0');
    for (char c : b) y = y * 2 + (c - '0');
    println(x*y);
}

MAIN{
    test 
        case;
    return 0;
}

/*
Cho hai xâu nhị phân biểu diễn hai số. 
Nhiệm vụ của bạn là đưa ra tích của hai số. 
Ví dụ với xâu S1 = ”1100” và S2 = ”1010” ta sẽ có kết quả là 120.
*/