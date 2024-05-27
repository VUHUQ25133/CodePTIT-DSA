#include <bits/stdc++.h>
using namespace std;
#define     fast            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     test            fast int T; cin >> T; cin.ignore(); while (T--)

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

string solve(string s) {
    stack<int> st;
    fu(i, 0, s.length()-1) {

        if (s[i] == '(') st.push(i);
        else if (s[i] == ')') {

            if (st.top() != 0 and s[st.top() - 1] == '-') {
                fu(j, st.top(), i-1) {
                    if (s[j] == '+')
                        s[j] = '-';
                    else if (s[j] == '-')
                        s[j] = '+';
                }
            }
            st.pop();
        }
    }

    string res = "";
    for (char i : s) if (i != '(' and i != ')') res += i;
    return res;
}

void case {
    string s; scan s;
    string t; scan t;
    println((solve(s) == solve(t) ? "YES" : "NO"));
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho P1, P2 là hai biểu thức đúng chỉ 
bao gồm các ký tự mở ngoặc ‘(’ hoặc đóng ngoặc ‘)’ và các toán hạng in thường. 
Nhiệm vụ của bạn là định xem P1 và P2 có giống nhau hay không.
*/