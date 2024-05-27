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
    map<int, bool> dd;
    queue<ii> q;
    q.push({n, 0});

    while (!q.empty()) {
        ii x = q.front(); q.pop();

        if (x.st == 2) {
            println(x.nd + 1);
            return;
        }

        fu(i, 2, sqrt(x.st)) {
            if (x.st % i == 0 and dd[x.st/i] == false) {
                dd[x.st/i] = true;
                q.push({x.st / i, x.nd + 1});
            }
        }
        q.push({x.st - 1, x.nd + 1});
    }

}
MAIN {
    test
        case;
    return 0;
}

/*
Cho số tự nhiên N (N<10^9) và hai phép biến đổi (a), (b) dưới đây.

Thao tác (a): Trừ N đi 1 (N=N-1). 
    Ví dụ N=17, thao tác (a) biến đổi N = N-1 =16.
Thao tác (b): N = max(u,v) nếu u*v =N (u>1, v>1). 
    Ví dụ N=16, thao tác (b) có thể biến đổi N = max(2, 8)=8 hoặc N=max(4, 4)=4.
Chỉ được phép sử dụng hai thao tác (a) hoặc (b), 
hãy biến đổi N thành 1 sao số các thao tác (a), (b) được thực hiện ít nhất. 

Ví dụ với N=17, số các phép (a), (b) nhỏ nhất biến đổi N thành 1 là 
4 bước như sau:
        Thao tác (a): N = N-1 = 17-1 = 16
        Thao tác (b): 16 = max(4,4) = 4
        Thao tác (b): 4 = max(2,2) = 2
        Thao tác (a): 2 = 2-1 = 1
*/