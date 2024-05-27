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

int n;
array a, b;
matrix res;

void solve(array j) {
    print "[";
    fu(i, 0, j.size()-1) {
        print j[i];
        if (i != j.size() - 1) print " ";
    }
    print "] ";
}

void Try(int i) {
    res.pb(a);
    if (i == 1) return;
    fu(j, 0, i-1)
        b.pb(a[j] + a[j+1]);

    a = b;
    a.resize(i - 1);
    b.clear();
    Try(i - 1);
}

void case{
    scan n;
    a.resize(n);
    res.clear();
    for (int &i : a) scan i;
    Try(n);
    reverse(res.begin, res.end);
    for (auto i : res) solve(i);
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
in ngược lại bài Dãy số 1
*/