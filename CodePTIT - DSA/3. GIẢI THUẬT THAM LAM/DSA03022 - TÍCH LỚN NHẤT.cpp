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
    int n; scan n;
    array a(n);
    for (int &i : a) scan i;
    sort(a.begin, a.end);
    priority_queue<int> b;
    b.push(a[0]*a[1]);
    b.push(a[0]*a[1]*a[n-1]);
    b.push(a[n-1]*a[n-2]);
    b.push(a[n-1]*a[n-2]*a[n-3]);
    println(b.top());

}
MAIN{
    // test 
        case;
    return 0;
}

/*
Cho dãy số A gồm N phần tử là các số nguyên.
 Hãy tính tích lớn nhất của 2 hoặc 3 phần tử trong dãy.
*/