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

bool check(string s, int n) {
    int x = 0;
    for (char i : s) {
        x = (x * 10 + (i - '0')) % n;
    }
    return x == 0;
}

void case {
    int n; scan n;
    queue<string> q;
    q.push("1");
    while (true) {
        string s = q.front(); q.pop();

        if (check(s, n)) {
            println(s);
            return;
        }

        q.push(s + "0");
        q.push(s + "1");
    }

}
MAIN {
    test
        case;
    return 0;
}

/*
Ta gọi số nguyên dương K là một số BDN nếu 
các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. 
Ví dụ số K =  101 là số BDN, k=102 không phải là số BDN.
Số BDN của N là số P = M*N sao cho P là số BDN. 
Cho số tự nhiên N (N<1000), hãy tìm số BDN nhỏ nhất của N.

Ví dụ. Với N=2, ta tìm được số BDN của N là P = 5*2=10. 
N = 17 ta tìm được số BDN của 17 là P = 653*17=11101.
*/