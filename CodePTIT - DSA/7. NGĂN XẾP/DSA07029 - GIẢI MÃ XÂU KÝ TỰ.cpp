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

void case{
    string s; scan s;
    stack<string> st1;
    stack<int> st2;
    fu(i, 0, s.length()-1) {
        if (isdigit(s[i])) {

            int num = 0;
            while (i < s.length() and isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            st2.push(num);
        }
        else if (s[i] == ']') {

            string tmp = "";
            while (st1.top() != "[") {
                tmp = st1.top() + tmp;
                st1.pop();
            }
            st1.pop(); // bo dau [

            string res = "";
            int dem = st2.top(); st2.pop();
            while (dem--) res += tmp;
            st1.push(res);
        }
        else {

            st1.push(string(1, s[i]));
            if (s[i] == '[' and (i == 0 or s[i - 1] < '0' or s[i - 1] > '9'))
                st2.push(1);
        }
    }

    string ans = "";
    while (!st1.empty()) {
        ans = st1.top() + ans;
        st1.pop();
    }
    print ans;
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho xâu ký tự mã hóa str. 
Hãy viết chương trình giải mã xâu ký tự str. 
Xâu ký tự mã hóa được thực hiện theo số lần lặp các xâu con của str như sau:
    Xâu đầu vào: “abbbababbbababbbab ”
    Xâu mã hóa : "3[a3[b]1[ab]]"
*/