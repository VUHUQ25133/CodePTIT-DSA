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

ll result(array& input) {
    int n = input.size();
    stack<int> st;
    array left(n), right(n);
    
    fu(i, 0, n-1) {
        while (!st.empty() and input[st.top()] >= input[i]) st.pop();
        left[i] = st.empty() ? 0 : st.top()+1;
        st.push(i);
    }
    
    while (!st.empty()) st.pop();

    fd(i, n-1, 0) {
        while (!st.empty() and input[st.top()] >= input[i]) st.pop();
        right[i] = st.empty() ? n-1 : st.top()-1;
        st.push(i);
    }
 
    int res = 0;
    fu(i, 0, n-1) {
        if (right[i] - left[i] + 1 >= input[i])
            res = max(res, input[i]);
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
MAIN {
    test
        case;
    return 0;
}

/*
Tí kiếm được N miếng gỗ hình chữ nhật,
mỗi miếng có chiều dài bằng A[i] và chiều rộng bằng 1. 
Tí đã ghép N miếng gỗ thành một tấm ván lớn, 
rồi thực hiện cắt các miếng gỗ để thu được tấm biển.

Tí muốn tấm biển quảng cáo của mình thật đặc biệt, 
nên Tí đã chọn nhất định nó sẽ là hình vuông. 
Không có eke, thước, dây, … nên Tí phải dựa vào các miếng gỗ ban đầu 
để căn nhát cưa. Việc cưa theo chiều dọc rất dễ dàng, 
nhưng theo chiều ngang, Tí chỉ có thể cưa theo 
một đường thẳng trùng với một cạnh của miếng gỗ nào đó.

Các bạn hãy giúp Tí tính thử xem 
tấm biển quảng cáo của Tí có kích thước lớn nhất bằng bao nhiêu 
(kích thước ở đây là độ dài cạnh hình vuông).
*/