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
    stack<string> st;
    queue<string> q;
    q.push("");
    while (!q.empty()) {
        string s = q.front();
        q.pop();
        st.push(s);

        if (s.length() == n) continue;
        q.push(s + "6");
        q.push(s + "8");
    }
    while (!st.empty()) {
        print st.top() << " ";
        st.pop();
    }
    endline();
}

MAIN {
    test
        case;
    return 0;
}

/*
Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. 
Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.
*/