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

int dp[1001][1001];
void case {
    int n, k; scan n >> k;
	dp[0][0] = 0;
	fu(i, 1, n) dp[0][i] = -1e9;
	fu(i, 1, n) {
		int x; scan x;
		x %= k;
		fu(j, 0, k-1)
		    dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - x + k) % k] + 1);
	}
	println(dp[n][0]);
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho một dãy gồm n số nguyên dương và số nguyên dương k. 
Hãy tìm dãy con gồm nhiều phần tử nhất của dãy đã cho 
sao cho tổng các phần tử của dãy con này chia hết cho k. 
*/