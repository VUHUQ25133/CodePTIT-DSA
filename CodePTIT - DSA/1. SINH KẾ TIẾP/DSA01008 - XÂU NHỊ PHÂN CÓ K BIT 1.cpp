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

int n, k;
array a;

void solve() {
    int cnt = 0;
    for (int i : a)
        if (i == 1) cnt++;
        
    if (cnt == k) {
        for (int i : a) print i;
        endline();
    }
}

void Try(int i) {
    fu(j, 0, 1) {
        a[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void case {
    scan n >> k;
    a.resize(n);
    Try(0);
}

MAIN{
    test 
        case;
    return 0;
}

/*
Hãy in ra tất cả các 
xâu nhị phân độ dài N, có K bit 1 theo thứ tự từ điển tăng dần.
*/