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
    array a(n+1);
    fu(i, 1, n) a[i] = i;
    while (true){
        fu(i, 1, n) print a[i];
        print ' ';
        int i = n-1;
        while (i and a[i] > a[i+1]) i--;
        if (i==0) break;
        int k = n;
        while (a[i]>a[k]) k--;
        swap(a[k], a[i]);
        int c = n, r = i+1;
        while (r<c){
            swap(a[c], a[r]);
            r++; c--;
        }
    }
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho số nguyên dương N. 
Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N. 
Ví dụ với N = 3 ta có kết quả: 123, 132, 213, 231, 312, 321.
*/