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
    int n; scan n;
    int k; scan k; 
    
    array a(n);
    for (int &i : a) scan i;
    int pos = lower_bound(a.begin, a.end, k) - a.begin;
    if (pos == n or a[pos] != k) println("NO");
    else println(pos + 1);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Nhiệm vụ của bạn là kiểm tra xem số K có xuất hiện trong dãy số hay không.
 Nếu có hãy in ra vị trí trong dãy A[], nếu không in ra “NO”.
*/