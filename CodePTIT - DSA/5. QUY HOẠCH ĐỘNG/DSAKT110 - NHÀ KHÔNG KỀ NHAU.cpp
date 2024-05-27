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
    int n; scan n;
    array a(n), f(n);
    for (int &i : a) scan i;
    f[0] = a[0];
    f[1] = max(a[0], a[1]);
    fu (i, 2, n-1)
        f[i] = max(f[i - 2] + a[i], f[i - 1]);

    println(f[n - 1]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Có N ngôi nhà trên một dãy phố, mỗi ngôi nhà chứa đựng lượng tài sản khác nhau.
    Một tên trộm muốn ăp cắp được nhiều nhất tài sản của dãy phố 
        nhưng không muốn lấy tài sản của hai nhà kề nhau.
            Hãy cho biết, bằng cách đó tên trộm có thể đánh cắp được 
                nhiều nhất bao nhiêu tài sản.
*/