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

int dp[101][101];
void case {
    string s; scan s;
    int n = s.length();
	fill(dp, 0);
	fu(i, 0, n-1) dp[i][i] = 1;
	fd(i, n-1, 0) {
		fu(j, i+1, n-1) {
			if (s[i] == s[j])
                dp[i][j] += dp[i + 1][j - 1] + 2;
			else
				dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
		}
	}
	println(n - dp[0][n - 1]);
}
MAIN {
    test
        case;
    return 0;
}

/*
Nhiệm vụ của bạn là tìm số phép chèn tối thiểu các ký tự vào str để str trở thành xâu đối xứng. 
Ví dụ:  str = ”ab”   có số phép chèn tối thiểu là 1 để trở thành xâu đối xứng “aba” hoặc “bab”. 
        str = ”aa”   có số phép chèn tối thiểu là 0. 
        str = ”abcd” có số phép chèn tối thiểu là 3 để trở thành xâu “dcbabcd”
*/