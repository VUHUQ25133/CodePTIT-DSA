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

int n, m, cnt;
vector<string> a;
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j) {
    a[i][j] = 0;
    fu(k, 1, 7) {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 and x < n and y >= 0 and y < m and a[x][y] == 'W'){
            a[x][y] = '.';
            dfs(x, y);
        }
    }
}


void case{
    cnt = 0;
    scan n >> m;
    fu(i, 0, n-1) {
        string s; scan s;
        a.pb(s);
    }
    fu(i, 0, n-1) fu(j, 0, m-1) {
            if (a[i][j] == 'W') {
                a[i][j] = '.';
                cnt++;
                dfs(i, j);
            }
        }
    println(cnt);
}
MAIN {
    test
        case;
    return 0;
}

/*
Mảnh đất thuê là một hình chữ nhật N x M (1≤ N≤ 100; 1≤ M≤ 100) ô đất hình vuông. 
Nhưng chỉ sau đó vài ngày, Mảnh đất bỗng biến thành các cái ao. 
Và sinh viên lại dự định chuyển sang nuôi cá. 
Các bạn ấy muốn biết mảnh đất được chia thành bao nhiêu cái ao 
để có thể tính toán nuôi cá cho hợp lý. 
Chú ý: Ao là gồm một số ô đất bị ngập có chung đỉnh. 
Dễ nhận thấy là một ô đất có thể có tối đa 8 ô chung đỉnh.

Dữ liệu vào: 
Dòng1: 2 số nguyên cách nhau bởi dấu cách: N và M. 
Dòng 2..N+1: M kí tự liên tiếp nhau mỗi dòng đại diện cho 1 hàng các ô đất.  
Mỗi kí tự là 'W' hoặc '.' tương ứng với ô đất đã bị ngập và ô đất vẫn còn nguyên.

Kết quả:  Một dòng chứa 1 số nguyên duy nhất là số ao tạo thành.
*/