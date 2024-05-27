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
    int n, k;
    scan n >> k;
    vector<ll> a(n + 1);
    fu(i, 1, n) scan a[i];

    vector<ll> f(k + 1, 0);
    f[0] = 1;
    
    fu(i, 1, k) 
        fu(j, 1, n) 
            if (i >= a[j]) {
                f[i] += f[i - a[j]];
                f[i] %= MOD;
            }
    println(f[k]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho một mảng A[] gồm N số nguyên và số K. 
Tính số cách lấy tổng các phần tử của A[] để bằng K. 
Phép lấy lặp các phần tử hoặc sắp đặt lại các phần tử được chấp thuận. 
Ví dụ với mảng A[] = {1, 5, 6}, K = 7 ta có 6 cách sau:

7 = 1 + 1 + 1 + 1 + 1 + 1 + 1 (lặp số 1 7 lần)
7 = 1 + 1 + 5 (lặp số 1)
7 = 1 + 5 + 1 (lặp và sắp đặt lại số 1)
7 = 1 + 6
7 = 6 + 1
*/