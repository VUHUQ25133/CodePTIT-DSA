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
    int s, t;
    scan s >> t;
    queue<ii> q;
    map<int, bool> mp;

    q.push({s, 0});
    while (!q.empty()) {
        ii p = q.front(); q.pop();
        if (p.st == t) {
            println(p.nd);
            return;
        }
        if (p.st - 1 == t or p.st * 2 == t) {
            println(p.nd + 1);
            return;
        }


        if (p.st * 2 <= t * 2 and mp[p.st * 2] == 0) {
            q.push({p.st * 2, p.nd + 1});
            mp[p.st * 2] = 1;
        }
        if (p.st - 1 >= 0 and mp[p.st - 1] == 0) {
            q.push({p.st - 1, p.nd + 1});
            mp[p.st - 1] = 1;
        }
    }

}
MAIN {
    test
        case;
    return 0;
}

/*
Cho hai số nguyên dương S và T (S, T<10000) và hai thao tác (a), (b) dưới đây:
Thao tác (a): Trừ S đi 1  (S = S-1) ;
Thao tác (b): Nhân S với 2 ( S = S*2);

Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác (a), (b) là ít nhất. 

Ví dụ với S = 2, T = 5 thì số các bước ít nhất để dịch chuyển S thành T 
thông qua 4 thao tác sau:
Thao tác (a): 2*2 = 4;
Thao tác (b): 4-1 = 3;
Thao tác (a): 3*2 = 6;
Thao tác (b): 6-1 = 5;
*/