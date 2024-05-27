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

ll result(array& input){
    ll n = input.size();
    stack<ll> st;
    vector<ll> l(n), r(n);
 
    fu(i, 0, n-1)
    {
        while (!st.empty() and input[st.top()] >= input[i]) st.pop();
        l[i] = st.empty() ? 0 : st.top()+1;
        st.push(i);
    }
 
    while (!st.empty()) st.pop();
 
    fd(i, n-1, 0)
    {
        while (!st.empty() and input[st.top()] >= input[i]) st.pop();
        r[i] = st.empty() ? n-1 : st.top()-1;
        st.push(i);
    }
    ll res = 0;
    fu(i, 0, n-1)
        res = max(res, (r[i]-l[i]+1)*input[i]);
    return res;
}

void case{
    int n, m; 
    scan n >> m;
    matrix a(n, array (m));

    fu(i, 0, n-1) fu (j, 0, m-1) scan a[i][j];
    fu(i, 1, n-1) fu (j, 0, m-1) if (a[i][j]) a[i][j] = a[i-1][j] + 1;

    ll res = 0;
    fu(i, 0, n-1) res = max (res, result(a[i]));
    print res;
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho một bảng kích thước NxM, được chia thành lưới ô vuông đơn vị N dòng M cột. 
Trên các ô của bảng ghi số 0 hoặc 1. 
Các dòng của bảng được đánh số 1, 2... N theo thứ tự từ trên xuống dưới 
và các cột của bảng được đánh số 1, 2..., M theo thứ tự từ trái qua phải
Yêu cầu: Hãy tìm một hình chữ nhật gồm các ô của bảng thoả mãn các điều kiện sau:

1 - Hình chữ nhật đó chỉ gồm các số 1
2 - Cạnh hình chữ nhật song song với cạnh bảng
3 - Diện tích hình chữ nhật là lớn nhất có thể
*/