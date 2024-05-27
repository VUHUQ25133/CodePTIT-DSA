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

bool isOP(string s) {
    return s == "+" or s == "-" or s == "*" or s == "/";
}
int priority(char c) {
    if (c == '*' or c == '/') return 3;
    if (c == '+' or c == '-') return 2;
    return 1;
}
ll cal(ll x, ll y, string o) {
    if (o == "*") return x * y;
    if (o == "/") return x / y;
    if (o == "+") return x + y;
    if (o == "-") return x - y;
}
void case {
    string s; scan s;
    vector<string> ve; // Lưu dạng hậu tố
    stack<char> st;    // Lưu các toán tử và dấu ngoặc
    fu (i, 0, s.length()-1) {
        // Xử lý toán hạng
        if (isdigit(s[i])) {
            string num = "";
            while (i < s.length() and isdigit(s[i])) {
                num += s[i];
                i++;
            }
            i--;
            ve.pb(num);
        }
        // Xử lý toán tử hậu tố
        else if (s[i] == '(') st.push(s[i]);
        else if (s[i] == ')') {
            while (st.top() != '(') {
                ve.pb(string(1, st.top()));
                st.pop();
            }
            st.pop(); // Xóa dấu '('
        }
        else {
            while (!st.empty() and priority(st.top()) >= priority(s[i])) {
                ve.pb(string(1, st.top()));
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        ve.pb(string(1, st.top()));
        st.pop();
    }
    // Bắt đầu tính toán
    stack<ll> stk; // Lưu kết quả của các phép tính với 2 toán hạng
    for (auto i : ve) {
        if (isOP(i)) { // Nếu gặp toán tử
            ll y = stk.top(); stk.pop();
            ll x = stk.top(); stk.pop();
            stk.push(cal(x, y, i));
        }
        else stk.push(stoll(i));
    }
    println(stk.top());
}
MAIN {
    test
        case;
    return 0;
}

/*

*/