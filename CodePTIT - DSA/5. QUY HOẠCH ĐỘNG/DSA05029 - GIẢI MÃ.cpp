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

bool check(string s, int i) {
    return (s[i - 1] == '1' or (s[i - 1] == '2' and s[i] <= '6'));
}

void case {
    string s; scan s;
    int n = s.length();
    s = "#" + s;

    vector<ll> f(n + 1, 0);
    f[0] = 1;
    
    fu(i, 1, n) {
        if (s[i] == '0') {
            if (i == 1 or (s[i - 1] != '1' and s[i - 1] != '2')) {
                println(0);
                return;
            }
            f[i] = f[i - 2];
        }
        else {
            f[i] = f[i - 1];
            if (i >= 2 and check(s, i))
                f[i] += f[i - 2];
        }
    }
    println(f[n]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Một bản tin M đã mã hóa bí mật thành các con số theo ánh xạ như sau: 
‘A’->1, ‘B’->2, .., ‘Z’->26. 

Hãy cho biết có bao nhiêu cách khác nhau để giải mã bản tin M. 
Ví dụ với bản mã M=”123” nó có thể được giải mã thành 
ABC (1 2 3), LC (12 3), AW(1 23).
*/