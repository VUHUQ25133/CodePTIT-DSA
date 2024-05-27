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

matrix Mul(matrix A,  matrix B) {
    	int m = A.size();
    	int n = B[0].size();
    	matrix C(m, array(n));
    	fu(i, 0, m-1){
        	fu(j, 0, n-1){
            		ll sum = 0;
            		fu(k, 0, A[0].size() - 1) sum = (sum + A[i][k] * B[k][j]) % MOD;
            		C[i][j] = sum;
        	}
    	}
    return C;
}

matrix Pow(matrix A, int n) {
    if (n == 1) return A;
    if (n % 2 == 0) {
        	matrix sub = Pow(A, n / 2);
        	return Mul(sub, sub);
    }
    return Mul(A, Pow(A, n - 1));
}

ll fib(int n) {
    if (n == 0) return 0;
    matrix F = {{1, 1}, {1, 0}};
    F = Pow(F, n - 1);
    return F[0][0];
}

void case{
    int n; scan n;
        println(fib(n));
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho số nguyên dương N không quá 1e9. 
Hãy xác định số thứ N trong dãy fibonacci A[]. 
Nếu kết quả quá lớn, hãy in ra theo modulo 1e9+7.
*/