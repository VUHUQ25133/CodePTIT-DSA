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

bool f[1001][1001];

void case{
    string s; scan s;
    int n = s.length();
    fill(f, 0);
    fu(i, 0, n-1) f[i][i] = true;

    int res = 1;
    fu(k, 1, n-1) {
        fu(i, 0, n-k-1) {
            int j = i + k;
            
            if      (s[i] == s[j] and k == 1) f[i][j] = 1;
            else if (s[i] == s[j] and k  > 1)  f[i][j] = f[i + 1][j - 1];
            else f[i][j] = 0;
            if (f[i][j] == 1)
                res = max(res, j - i + 1);
        }
    }
    println(res);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho xâu S chỉ bao gồm các ký tự viết thường và dài không quá 1000 ký tự.
Hãy tìm xâu con đối xứng dài nhất của S.
*/