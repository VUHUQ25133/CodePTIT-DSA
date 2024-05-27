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

array a = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void case {
    int n; scan n;

    int ans = 0;
    for (int i : a) {
        ans += n / i;
        n %= i;
    }
    print ans;
    endline();
}

MAIN{
    test 
        case;
    return 0;
}

/*
Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. 
Tổng số tiền cần đổi có giá trị bằng N.  
Hãy xác định xem có ít nhất bao nhiêu tờ tiền sau khi đổi tiền?
*/