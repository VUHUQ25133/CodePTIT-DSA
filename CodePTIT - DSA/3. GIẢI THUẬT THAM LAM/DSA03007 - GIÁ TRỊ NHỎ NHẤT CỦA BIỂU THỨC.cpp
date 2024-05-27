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

void case{
    int n; scan n;
    array a(n), b(n);
    for (int &i : a) scan i;
    for (int &i : b) scan i;
    sort(a.begin, a.end);
    sort(b.rbegin(), b.rend());
    ll ans = 0;
    fu(i, 0, n-1) ans += a[i] * b[i];
    println(ans);

}   
MAIN{
    test 
        case;
    return 0;
}

/*
Cho mảng A[], B[] đều có N phần tử. 
Nhiệm vụ của bạn là tìm giá trị nhỏ nhất của biểu thức 

P = A[0]*B[0] + A[1]*B[1] + ..+A[N-1]*B[N-1] 

bằng cách tráo đổi vị trí các phần tử của cả mảng A[] và B[].
*/