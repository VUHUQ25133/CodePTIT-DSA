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
    int k; scan k;
    string s; scan s;
    int dd[127] = {};
    for (char i : s) dd[i]++;
    priority_queue<int> q;
    for (int i : dd) {
        if (i > 0) q.push(i);
    }
    while (k--) {
        if (q.empty()) break;
        int x = q.top(); q.pop();
        x--;
        q.push(x);
    }
    ll ans = 0;
    while (!q.empty()) {
        ll x = q.top(); q.pop();
        ans += x * x;
    }
    print ans;
    endline();
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho xâu ký tự S[] bao gồm các ký tự in hoa [A, B, …,Z]. 
Ta định nghĩa giá trị của xâu S[] là 
tổng bình phương số lần xuất hiện mỗi ký tự trong xâu. 
Ví dụ với xâu S[] = “AAABBCD” ta có F(S) = 3^2 + 2^2 + 1^2 + 1^2 = 15. 
Hãy tìm giá trị nhỏ nhất của xâu S[] sau khi loại bỏ K ký tự trong xâu.
*/