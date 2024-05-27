#include <bits/stdc++.h>
using namespace std;
#define     fast            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     test            fast int T; cin >> T; cin.ignore(); while (T--)

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
    int n, m;
    scan n >> m;
    array w(n + 1);
    array v(n + 1);
    fu(i, 1, n) scan w[i];
    fu(i, 1, n) scan v[i];

    int f[n+1][m+1] = {};
    fu(i, 1, n) fu(j, 1, m)
    
            if (j >= w[i]) f[i][j] = max(f[i-1][j], f[i-1][j-w[i]] + v[i]);
            else           f[i][j] = f[i - 1][j];

    println(f[n][m]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Một người có cái túi thể tích V (V<1000). 
Anh ta có N đồ vật cần mang theo (N≤1000), 
mỗi đồ vật có thể tích là A[i] (A[i]≤100) và giá trị là C[i] (C[i]≤100). 

Hãy xác định tổng giá trị lớn nhất của các đồ vật mà người đó có thể mang theo, 
sao cho tổng thể tích không vượt quá V.
*/