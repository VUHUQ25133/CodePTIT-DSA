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
    int s; scan s;
    int d; scan d;

    if (s > 9 * d) {
        println(-1);
        return;
    }

    int a[d] = {1}; 
    s--;
    
    fd(i, d-1, 0) {
        int x = min(s, 9 - a[i]);
        a[i] += x;
        s -= x;
    }

    fu(i, 0, d-1) print a[i];
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho hai số nguyên dương S và D, 
trong đó S là tổng các chữ số và D là số các chữ số của một số. 
Nhiệm vụ của bạn là tìm số nhỏ nhất thỏa mãn S và D? 
    
    Ví dụ với S = 9, D = 2 ta có số nhỏ nhất thỏa mãn S và D là 18.
*/