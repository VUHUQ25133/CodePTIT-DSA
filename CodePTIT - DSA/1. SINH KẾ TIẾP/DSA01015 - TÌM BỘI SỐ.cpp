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
    int n; scan n;
    queue<string> q;
    q.push("9");

    while (true) {
        string s = q.front();
        q.pop();

        int x = 0;
        for (char i : s) {
            x = x * 10 + (i - '0');
            x %= n;
        }
        if (x == 0) {
            println(s);
            return;
        }
        q.push(s + '0');
        q.push(s + '9');
    }
    endline();
}

MAIN{
    test 
        case;
    return 0;
}

/*
Cho số nguyên N. 
Nhiệm vụ của bạn cần tìm số nguyên X nhỏ nhất là bội của N, 
    và X chỉ chứa hai chữ số 0 và 9.
*/