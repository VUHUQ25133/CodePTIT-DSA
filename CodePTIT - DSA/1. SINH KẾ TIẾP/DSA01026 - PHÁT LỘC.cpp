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
    if (s.front() == '8' and s.back() == '6' 
                         and s.find("88") == -1 
                         and s.find("6666") == -1)  res.pb(s);
}

void Try(int i) {
    fu(j, 0, 1) {
        if (j == 0) s[i] = '6';
        else s[i] = '8';
        if (i == n - 1) solve();
        else Try( i + 1);
    }
}   

void case {
    scan n;
    s.resize(n);
    Try(0);
    sort(res.begin, res.end);
    for (string i : res) println(i);
}

MAIN{
    // test 
        case;
    return 0;
}

/*
Một xâu ký tự số chỉ bao gồm các chữ số 6 và 8 sẽ được gọi là 
````“phát lộc” nếu thỏa mãn các điều kiện sau:

    Độ dài xâu ít nhất là 6
    Chữ số đầu tiên là chữ số 8, chữ số cuối cùng là chữ số 6
    Không có 2 chữ số 8 nào ở cạnh nhau
    Không có nhiều hơn 3 chữ số 6 ở cạnh nhau.
    
Viết chương trình liệt kê các xâu ký tự phát lộc độ dài N theo thứ tự tăng dần.
*/