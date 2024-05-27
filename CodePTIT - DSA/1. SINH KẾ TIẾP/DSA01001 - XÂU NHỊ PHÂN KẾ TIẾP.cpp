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


void case{
    string s; scan s;
    int n = s.size()-1;
    while (s[n] == '1') n--;
    if (n == -1) {
        fu(i, 1, s.size()-1) print "0";
        cout el;
        return;
    }
    s[n] = '1';
    fu(i, n+1, s.size()-1) s[i] = '0';
    println(s);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho xâu nhị phân X, nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X. 
Ví dụ X =”010101” thì xâu nhị phân tiếp theo của X là “010110”.
*/