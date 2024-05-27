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

ll result(array& heights) {
    int n = heights.size();
    array left(n), right(n);
    
    fu(i, 0, n-1) {
        ll j = i - 1;
        while (j >= 0 and heights[j] >= heights[i]) j = left[j];
        left[i] = j;
    }
    
    fd(i, n-1, 0) {
        ll j = i + 1;
        while (j < n and heights[j] >= heights[i])  j = right[j];
        right[i] = j;
    }
 
    ll res = 0;
    fu(i, 0, n-1) {
        ll area =(right[i] - left[i] - 1) * 1LL * heights[i];
        res = max(res, area);
    }
 
    return res;
}

void case{
    int n; scan n;
    array H(n);
    fu(i, 0, n-1) scan H[i];
    print result(H);
    endline();
}

MAIN{
    test
        case;
    return 0;
}


/*
Cho N cột, mỗi cột có chiều cao bằng H[i]. 
Bạn hãy tìm hình chữ nhật lớn nhất bị che phủ bởi các cột?
*/