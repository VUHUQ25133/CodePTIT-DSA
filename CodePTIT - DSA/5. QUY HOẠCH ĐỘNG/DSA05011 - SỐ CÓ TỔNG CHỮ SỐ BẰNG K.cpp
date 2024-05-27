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
    int n, k; scan n >> k;
    
	ll dp[n+1][k+1];
	fill(dp, 0);

	fu(i, 1, 9) dp[1][i] = 1;
	 
	fu(i, 1, n)
		fu(l, 0, 9)
			fu(j, l, k)
				dp[i][j] = (dp[i][j] % MOD + dp[i - 1][j - l] % MOD) % MOD;
	
    println(dp[n][k]);
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho 2 số nguyên N và K. 
Bạn hãy đếm số lượng các số có N chữ số mà tổng các chữ số của nó bằng K. 
Lưu ý, chữ số 0 ở đầu không được chấp nhận.
*/