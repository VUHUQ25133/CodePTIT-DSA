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
    array a(k + 1);
    fu(i, 1, k) a[i] = i;
    while (true){
        fu(i, 1, k) print a[i];
        print ' ';
        int i = k;
        while (a[i] == n - k + i) i--;
        if (i == 0) break;
        a[i]++;
        int j = a[i];
        while (i <= k) 
            a[i++] = j++;
    }
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho hai số nguyên dương N và K. 
Nhiệm vụ của bạn là hãy liệt kê tất cả các tập con K phần tử của 1, 2, .., N. 
Ví dụ với N=5, K=3 ta có 10 tập con của 1, 2, 3, 4, 5 như sau: 
{1, 2, 3}, {1, 2, 4},{1, 2, 5},{1, 3, 4},{1, 3, 5},{1, 4, 5},{2, 3, 4},{2, 3, 5},{2, 4, 5},{3, 4, 5}.
*/