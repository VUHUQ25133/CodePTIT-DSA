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
    fu(i, 1, k) scan a[i];

    int i = k;
    while (a[i] == n - k + i) i--;
    if (i == 0) a[i] = 0;
    else a[i]++;
    
    while (i < k) {
        a[i + 1] = a[i] + 1;
        i++;
    }
    fu(i, 1, k) print a[i] << " ";
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. 
Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử tiếp theo của X[]. 
Ví dụ N=5, K=3, X[] = {2, 3, 4} thì tập con tiếp theo của X[] là {2, 3, 5}.
*/