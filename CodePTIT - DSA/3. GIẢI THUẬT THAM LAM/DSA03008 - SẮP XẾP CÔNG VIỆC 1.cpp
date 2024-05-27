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

bool cmp(ii a, ii b) {
    if (a.nd == b.nd)
        return a.st < b.st;
    return a.nd < b.nd;
}

void case{
    int n; scan n;
    ii a[n];
    fu(i, 0, n-1) scan a[i].st;
    fu(i, 0, n-1) scan a[i].nd;
    
    sort(a, a+n, cmp);
    int ans = 1;
    int cur = a[0].nd;
    fu(i, 1, n-1) if (a[i].st >= cur) {
        ans ++;
        cur = a[i].nd;
    }
    println(ans);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho hệ gồm N hành động. 
Mỗi hành động được biểu diễn như một bộ đôi <Si, Fi> 
tương ứng với thời gian bắt đầu và thời gian kết thúc của mỗi hành động. 

Hãy tìm phương án thực hiện nhiều nhất các hành động 
được thực hiện bởi một máy hoặc một người sao cho hệ không xảy ra mâu thuẫn.
*/