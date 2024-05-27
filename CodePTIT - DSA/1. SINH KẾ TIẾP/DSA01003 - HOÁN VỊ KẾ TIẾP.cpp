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
    array a(n + 1);
    fu(i, 1, n) scan a[i];

    int i = n - 1;
    while (i  and a[i] >= a[i + 1]) i--;
    if (i == 0) {
        fu(j, 1, n) a[j] = j;
    }
    else {
        fd(j, n, i+1) {
            if (a[j] > a[i]) {
                swap(a[i], a[j]);
                break;
            }
        }
    }
    fu(i, 1, n) print a[i] << " ";
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho số tự nhiên N và một hoán vị X[] của 1, 2, .., N. 
Nhiệm vụ của bạn là đưa ra hoán vị tiếp theo của X[]. 
Ví dụ N=5, X[] = {1, 2, 3, 4, 5} thì hoán vị tiếp theo của X[] là {1, 2, 3, 5, 4}.
*/