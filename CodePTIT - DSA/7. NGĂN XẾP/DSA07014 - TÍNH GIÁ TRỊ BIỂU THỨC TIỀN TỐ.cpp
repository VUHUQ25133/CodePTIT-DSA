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
#define     Case            testcase()

bool isOP(char s) {
    return s == '+' or s == '-' or s == '*' or s == '/';
}

int cal(int x, int y, char o) {
    switch (o) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
    }
}
void Case {
    string s; scan s;
    stack<int> st;
    fd (i, s.length(), 0) {
        if (isOP(s[i])) {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            int z = cal(x, y, s[i]);
            st.push(z);
        }
        else st.push(s[i] - '0');
    }
    println(st.top());
}
MAIN {
    test
        Case;
    return 0;
}

/*

*/