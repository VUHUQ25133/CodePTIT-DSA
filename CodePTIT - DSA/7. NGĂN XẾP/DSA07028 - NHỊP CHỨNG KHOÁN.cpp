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

void case{
    int n; scan n;
    array a(n+1);
    fu (i, 1, n) scan a[i];
    stack<int> st;
    fu(i, 1, n) {
        while (!st.empty() and a[st.top()] <= a[i]) st.pop();
        if (st.empty()) print i << " ";
        else print i - st.top() << " ";
        st.push(i);
    }
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*
Nhiệm vụ hàng ngày của bạn là tính nhịp tăng giảm của phiên chứng khoán 
trong N ngày để có thể bắt kịp thị trường. 
Nhịp chứng khoán của ngày thứ i được định nghĩa là 
số ngày liên tiếp từ ngày thứ i trở về mà 
giá chứng khoán bé hơn hoặc bằng với giá chứng khoán của ngày i.
*/