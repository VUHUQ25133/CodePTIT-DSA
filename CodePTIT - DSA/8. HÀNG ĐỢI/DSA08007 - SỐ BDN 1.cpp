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

void case {
    string s; scan s;
    int res = 0;
    queue<string> q;
    q.push("1");
    while (!q.empty()) {
        string z = q.front();q.pop();
        res++;

        string x = z + "0";
        if (x.length() > s.length() or (x.length() == s.length() and x > s))
            break;
        q.push(x);

        x = z + "1";
        if (x.length() > s.length() or (x.length() == s.length() and x > s))
            break;
        q.push(x);
    }
    println(res + q.size());
}
MAIN {
    test
        case;
    return 0;
}

/*
Ta gọi số nguyên dương K là một số BDN nếu 
các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. 
Ví dụ số K = 1, 10, 101. 
Cho số tự nhiên N (N<263). Hãy cho biết có bao nhiêu số BDN nhỏ hơn N. 
Ví dụ N=100 ta có 4 số BDN bao gồm các số: 1, 10, 11, 100.
*/