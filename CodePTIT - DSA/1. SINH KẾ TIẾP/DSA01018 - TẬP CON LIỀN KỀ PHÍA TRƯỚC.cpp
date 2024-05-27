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

    array a(k + 1, 0);
    fu(i, 1, k) scan a[i];

    int i = k;
    while (i and a[i] == a[i - 1] + 1) i--;
    if (i) a[i]--;
    fu(j, i+1, k)
        a[j] = n - k + j;
    fu(j, 1, k) cout << a[j] << " ";
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho hai số N, K và một tập con K phần tử 
Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử trước đó
*/