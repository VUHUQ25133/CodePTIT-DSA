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
    int n; scan n;
    int k; scan k;
    int b[n+5][n+5], a[n+5];
    vector<string> result;
    fu(i, 1, n) {
        a[i]=i;
        fu(j, 1, n) scan b[i][j];
    }
    int cnt = 0;
    do{
        int sum = 0;
        fu(i, 1, n) sum += b[i][a[i]];
        if (sum == k) {
            string s = "";
            fu(i, 1, n)
                s += to_string(a[i]) + ' ';
            result.pb(s);
            cnt++;
        }
    }while (next_permutation(a + 1, a + n+1));
    println(cnt);

    for (auto x : result) println(x);
    endline();
}
MAIN{
    // test 
        case;
    return 0;
}

/*
Cho ma trận vuông cấp N 
Hãy viết chương trình lấy mỗi hàng, mỗi cột duy nhất một phần tử 
    sao cho tổng các phần tử này đúng bằng K.
*/