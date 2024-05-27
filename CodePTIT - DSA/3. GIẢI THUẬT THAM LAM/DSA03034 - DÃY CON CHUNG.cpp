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

void case {
    int n; scan n;
    int m; scan m;
    int q; scan q;
    vector<ll> a(n); for (auto &i : a) scan i;
    vector<ll> b(m); for (auto &i : b) scan i;
    vector<ll> c(q); for (auto &i : c) scan i;

    vector<ll> res;
    int i = 0, j = 0, k = 0;
    while (i < n and j < m and k < q) {
        if (a[i] == b[j] and a[i] == c[k]) {
            res.pb(a[i]);
            i++, j++, k++;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[k]) j++;
        else k++;
    }
    
    if (res.empty()) println("NO");
    else 
        for (auto i : res) print i << " ";
    endline();
}

MAIN{
    test 
        case;
    return 0;
}

/*
Cho dãy số A[], B[] và C[] là dãy không giảm và có lần lượt N, M, K phần tử. 
Nhiệm vụ của bạn là hãy tìm các phần tử chung của 3 dãy số này.
*/