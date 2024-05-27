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

int X[8] = {2, 1,-1,-2,-2,-1, 1, 2}; 
int Y[8] = {1, 2, 2, 1,-1,-2,-2,-1}; 
 
bool valid (int x, int y){
    return x >= 1 and x <= 8 and y >= 1 and y <= 8;
}
 
int bfs(int xa, int ya, int xb, int yb){
    queue<pair <ii, int>> q;
    q.push(make_pair(make_pair(xa, ya), 0));
 
    while (!q.empty()){
        pair <ii, int> x = q.front();
        q.pop();
        if (x.st.st == xb and x.st.nd == yb) return x.nd;
        fu(i, 0, 7){
            int xx = x.st.st + X[i];
            int yy = x.st.nd + Y[i];
            int cnt = x.nd + 1;
            if (valid (xx, yy)) q.push(make_pair(make_pair(xx, yy), cnt));
        }
    }
    return -1;
}

void case {
    char xa, xb; int ya, yb;
    scan xa >> ya >> xb >> yb;
    xa -= 96; xb -= 96;
 
    println(bfs(xa, ya, xb, yb));
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho một quân mã trên bàn cờ vua tại vị trí ST. 
Nhiệm vụ của bạn là hãy tìm số bước di chuyển ít nhất để
đưa quân mã tới vị trí EN.
*/