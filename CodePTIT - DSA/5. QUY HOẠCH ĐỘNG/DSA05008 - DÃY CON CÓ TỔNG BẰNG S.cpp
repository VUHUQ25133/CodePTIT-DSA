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

void case{
    int n; scan n;
    int s; scan s;
    int a[n], f[s+1] = {};

    f[0] = 1;
    fu(i, 0, n-1) {
        scan a[i];
        fd(j, s, 1) {
            if (j >= a[i] and !f[j] and f[j-a[i]])
                f[j] = 1;
            }
        }
    println((f[s] ? "YES" : "NO"));
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho N số nguyên dương tạo thành dãy A={A1, A2, ..., AN}. 
Tìm ra một dãy con của dãy A 
(không nhất thiết là các phần tử liên tiếp trong dãy) có tổng bằng S cho trước.
*/