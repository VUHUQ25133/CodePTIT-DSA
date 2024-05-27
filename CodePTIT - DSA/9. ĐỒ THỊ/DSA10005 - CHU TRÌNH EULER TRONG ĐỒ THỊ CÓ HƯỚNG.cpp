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

int V, E, u, v;
vector<ii> G;

void case{
    scan V >> E;
    G.clear(); G.resize(V + 1);
    while (E--) {
        scan u >> v;
        G[u].st++;
        G[v].nd++;
    }
    fu(i, 1, V) {
        if (G[i].st != G[i].nd) {
            println(0);
            return;
        }
    }
    println(1);
}

MAIN {
    test
        case;
    return 0;
}

/*
Đưa ra 1, 0 kết quả mỗi test theo từng dòng 
tương ứng với đồ thị có chu trình Euler 
và trường hợp không tồn tại đáp án.
*/