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

void case {
    int n, inserT, deletE, copY;
    scan n >> inserT >> deletE >> copY;

    int f[101] = {}; f[1] = inserT;
    fu(i, 2, n) {
        if (i % 2)
            f[i] = min({ f[i - 1] + inserT, 
                         f[(i - 1) / 2] + copY + inserT, 
                         f[(i + 1) / 2] + copY + deletE });
        else
            f[i] = min(f[i - 1] + inserT, f[i / 2] + copY);
    }
    println(f[n]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho biểu thức đúng P chỉ bao gồm 
các phép toán +, -, các toán hạng cùng với các ký tự ‘(’, ‘)’. 
Hãy bỏ tất cả các ký tự ‘(’, ‘)’ trong P để nhận được biểu thức tương đương. 
Ví dụ với P = a – (b + c) ta có kết quả P = a – b – c .
*/