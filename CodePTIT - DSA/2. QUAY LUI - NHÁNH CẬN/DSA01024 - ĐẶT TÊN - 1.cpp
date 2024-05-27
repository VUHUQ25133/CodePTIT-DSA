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

int n, k;
int a[30];
vector<string> temp;
vector<vector<string>> res;

void solve() {
    vector<string> x;
    fu(i, 1, k)
        x.pb(temp[a[i]]);
    sort(x.begin, x.end);
    res.pb(x);
}

void Try(int i) {
    fu (j, a[i-1] + 1, n-k+i) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void case{
    scan n;
    scan k;
    map<string, bool> mp;
    fu(i, 1, n) {
        string s; scan s;
        mp[s] = true;
    }
    temp.pb("");
    for (auto i : mp) {
        temp.pb(i.st);
    }
    n = temp.size() - 1;
    Try(1);
    sort(res.begin, res.end);
    for (auto i : res) {
        for (string j : i) {
            print j << " ";
        }
        endline();
    }
}
MAIN{
    // test 
        case;
    return 0;
}

/*
K đội của PTIT tham gia và đội tuyển đang rất đau đầu không biết chọn các cái tên như thế nào cho các đội. 
Yêu cầu phải đảm bảo tên không có khoảng trống và không được trùng nhau. 
Sau khi thảo luận, có N cái tên được đề xuất (có thể bị trùng nhau). 

Với K<15 và 4 < N < 30.
Hãy liệt kê tất cả danh sách các tổ hợp K cái tên khác nhau có thể được tạo ra theo thứ tự từ điển.
*/