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
    array a(n), r(n);
    for (int &i : a) scan i;

    stack<int> st;
    fd (i, n-1, 0) {
        while (!st.empty() and st.top() <= a[i]) st.pop();
        if (st.empty()) r[i] = -1;
        else r[i] = st.top();
        st.push(a[i]);
    }
    for (int i : r) print i << " ";
    endline();
}

MAIN {
    test
        case;
    return 0;
}

/*
Cho dãy số A[] gồm N phần tử. 
Với mỗi A[i], bạn cần tìm phần tử bên phải đầu tiên lớn hơn nó.
Nếu không tồn tại, in ra -1.
*/