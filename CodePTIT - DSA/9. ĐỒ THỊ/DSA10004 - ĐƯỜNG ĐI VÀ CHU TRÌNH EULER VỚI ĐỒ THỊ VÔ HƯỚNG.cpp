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
#define     Case            testcase()

int V, E, u, v;
matrix G;
void Case{
    scan V >> E;
    G.clear(); G.resize(V + 1);
    while(E--) {
        scan u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
    int odd_deg = 0;
    fu(i, 1, V)
        odd_deg += (G[i].size() % 2);


    switch(odd_deg){
        case 0: println(2); break;
        case 2: println(1); break;
        default: println(0); break;
    } 
}
MAIN {
    test
        Case;
    return 0;
}

/*
Đưa ra 1, 2, 0 kết quả mỗi test theo từng dòng 
tương ứng với đồ thị có đường đi Euler, 
                        chu trình Euler 
                        và trường hợp không tồn tại.
*/