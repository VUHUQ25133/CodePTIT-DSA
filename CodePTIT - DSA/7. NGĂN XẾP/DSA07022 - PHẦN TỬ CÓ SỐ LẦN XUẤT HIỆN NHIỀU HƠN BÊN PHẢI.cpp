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
    array a(n);
    map<int, int> mp;
    fu (i, 0, n-1) {
        scan a[i];
        mp[a[i]]++;
    }
    array res(n);
    stack<int> st;
    fd(i, n-1, 0) {
        while (!st.empty() and mp[st.top()] <= mp[a[i]]) st.pop();
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();
        st.push(a[i]);
    }
    fu (i, 0, n-1) print res[i] << " ";
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho mảng A[]  gồm n phần tử. 
Nhiệm vụ của bạn là tìm phần tử gần nhất phía bên phải
có số lần xuất hiện lớn hơn phần tử hiện tại. 
 Nếu không có phần tử nào có số lần xuất hiện lớn hơn phần tử hiện tại 
 hãy đưa ra -1.

Ví dụ với dãy A[] = {1, 1, 2, 3, 4, 2, 1 }, 
ta nhận được kết quả ans[] = {-1, -1, 1, 2, 2, 1, -1} 
vì số lần xuất hiện mỗi phần tử trong mảng là F = {3, 3, 2, 1, 1, 2, 3} 
vì vậy phần tử A[0] = 1 có số lần xuất hiện là 3 và 
không có phần tử nào xuất hiện nhiều hơn 3 nên ans[0] = -1, 
tương tự như vậy với A[2]= 2 tồn tại A[6] = 1 có số lần xuất hiện là 3 
nên ans[2] = 1
*/