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


void case{
    string s; scan s;
    stack<char> st;
    int open = 0, close = 0;
    for (char i : s) {
        if (i == '(') {
            open++;
            st.push(i);
        }
        else {
            if (!st.empty() and st.top() == '(') {
                open--;
                st.pop();
            }
            else {
                close++;
                st.push(i);
            }
        }
    }

    int ans = open / 2 + close / 2;
    ans += open % 2 + close % 2; 
    /*
    mỗi cặp đóng mở ngoặc chỉ cần đảo ngược 1 dấu
    nếu có cặp ngoặc trái hướng, cần đảo cả 2
    */
    print ans;
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho một xâu chỉ gồm các kí tự ‘(‘, ‘) và có độ dài chẵn. 
Hãy đếm số lượng dấu ngoặc cần phải đổi chiều ít nhất, 
sao cho xâu mới thu được là một dãy ngoặc đúng.
*/