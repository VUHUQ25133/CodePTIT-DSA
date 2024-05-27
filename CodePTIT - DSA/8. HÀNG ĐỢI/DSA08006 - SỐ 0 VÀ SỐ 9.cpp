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
    q.push("9");
    while (true) {
        string s = q.front();
        q.pop();
        if (check(s, n)) {
            println(s);
            return;
        }

        q.push(s + "0");
        q.push(s + "9");
    }
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho số tự nhiên N. 
Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 9 và số 0 chia hết cho N. 
Ví dụ với N = 5 ta sẽ tìm ra  X = 90.
*/