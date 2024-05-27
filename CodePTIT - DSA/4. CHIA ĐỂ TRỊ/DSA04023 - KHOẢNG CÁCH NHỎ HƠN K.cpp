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
    ll a[n]; //! kiểu dữ liệu để long long
    fu(i, 0, n-1) scan a[i];
    sort(a, a + n);
    ll ans = 0;
    fu(i, 0, n-1) ans += lower_bound(a + i+1, a + n, a[i] + k) - (a + i+1);     // với x-y = k ứng với mỗi x tìm y+k < x
    println(ans);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho mảng A[] gồm n số nguyên dương và số K. 
Hãy đếm số các cặp phần tử có hiệu nhỏ hơn K. 
Ví dụ A[] = {1, 2, 4, 10}, K=3 ta nhận được kết quả là 2 tương ứng với các cặp (1, 2), (4, 2).
*/