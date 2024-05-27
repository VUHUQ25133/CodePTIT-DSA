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
string s;
vector<string> res;

void solve() {
    if (s[0] == 'H' and s[n - 1] == 'A' and s.find("HH") == -1) res.pb(s);
}

void Try(int i) {
    fu(j, 0, 1) {
        if (j == 0) s[i] = 'H';
        else s[i] = 'A';
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void case {
    scan n;
    s.resize(n);
    res.clear();
    Try(0);
    sort(res.begin, res.end);
    for (string i : res) println(i);
    endline();
}

MAIN{
    test 
        case;
    return 0;
}

/*
Khi chat chit vui vẻ, anh em chiến hữu thường hay gõ HAHA để thể hiện sự sảng khoái. 
Đôi khi cũng có thể gõ HAHAAAAA chẳng hạn cho thêm phần nhấn mạnh.
Giả sử một xâu ký tự được coi là HAHA nếu thỏa mãn các điều kiện:
    Ký tự đầu tiên phải là chữ H, ký tự cuối cùng phải là chữ A
    Không có hai chữ H nào liền nhau
Cho trước độ dài N, hãy liệt kê tất cả các xâu ký tự HAHA theo thứ tự từ điển.
*/