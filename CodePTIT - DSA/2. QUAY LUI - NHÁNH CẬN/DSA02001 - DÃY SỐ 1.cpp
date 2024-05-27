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

int n;
array a, b;

void solve() {
    print "[";
    fu(i, 0, a.size()-1) {
        print a[i];
        if (i != a.size() - 1) print " ";
    }
    print "]";
    endline();
}

void Try(int i) {
    solve();
    if (i == 1) return;
    fu(j, 0, i-2)
        b.pb(a[j] + a[j+1]);

    a = b;
    a.resize(i - 1);
    b.clear();
    Try(i - 1);
}

void case{
    scan n;
    a.resize(n);
    for (int &i : a) scan i;
    Try(n);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho dãy số A[] gồm n số nguyên dương. 
Tam giác đặc biệt của dãy số A[] là tam giác được tạo ra bởi n hàng, 
trong đó hàng thứ 1 là dãy số A[], 
hàng i là tổng hai phần tử liên tiếp của hàng i-1 (2 ≤ i ≤ n). 
Ví dụ A[] = {1, 2, 3, 4, 5}, khi đó tam giác được tạo nên như dưới đây:

[1, 2, 3, 4, 5 ]
[3, 5, 7, 9 ]
[8, 12, 16]
[20, 28]
[48]
*/