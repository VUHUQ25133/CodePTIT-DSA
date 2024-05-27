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

struct Matrix{
    ll n;  matrix data;
    Matrix(ll n) : n(n), data(n, array(n)){} // constructor

    // nhân 2 ma trận
    Matrix operator * (Matrix other) const {                  
        Matrix res(n);
        fu(i, 0, n-1) 
            fu(j, 0, n-1) 
                fu(k, 0, n-1) {
                    res.data[i][j] += data[i][k] * other.data[k][j];
                    res.data[i][j] %= MOD;
                }
        return res;
    }

    // tính lũy thừa ma trận
    Matrix operator ^(ll x) const {
        if (x == 1) return *this;

        Matrix res = (*this)^(x/2); 
        res = res*res;
        if (x & 1) res = res*(*this);
        return res;
    }
};

void case {
    ll n; scan n;
    ll x; scan x;
    Matrix A(n);
    fu(i, 0, n-1) fu(j, 0, n-1) scan A.data[i][j];

    Matrix X = A^x;
    fu(i, 0, n-1){
        fu(j, 0, n-1) print X.data[i][j] << " ";
        endline();
    }
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho ma trận vuông A kích thước N x N. 
Nhiệm vụ của bạn là hãy tính ma trận X = A^K với K là số nguyên cho trước. 
Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 1e9+7.
*/