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
    int c, n, w;
    scan c >> n;
    bool f[c + 1] = {false};
    f[0] = true;
    fu(i, 1, n) {
        scan w;
        fd(j, c, w)
            if (!f[j] and f[j - w])
                 f[j] = true;
    }
    fd(i, c, 0) {
        if (f[i]) {
            println(i);
            return;
        }
    }
}
MAIN{
    // test 
        case;
    return 0;
}

/*
Một ngày đẹp trời, anh ta quyết định mua xe tải với khả năng chở được C kg (1000 ≤ C ≤ 25000) để đưa những con bò đi xem phim. 
Cho số con bò là N (20 ≤ N ≤ 100) và khối lượng w[i] của từng con (đều nhỏ hơn C), 
hãy cho biết khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.
*/