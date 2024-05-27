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
    int n; scan n; 
    array arr(n);
    fu(i, 0, n-1) scan arr[i]; 
    array lon(n, -1), nho(n, -1);
    stack<int> s;
 
    fu(i, 0, n-1) {
        while (!s.empty() and arr[s.top()] < arr[i]) {
            lon[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
 
    while (!s.empty()) s.pop();
 
    fu(i, 0, n-1) {
        while (!s.empty() and arr[s.top()] > arr[i]) {
            nho[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    fu(i, 0, n-1) {
        if (lon[i] == -1)
            print -1;
        else
            print nho[lon[i]];
        print ' ';
    }
    endline();
}

MAIN{
    test
        case;
    return 0;
}


/*
Tìm giá trị nhỏ hơn của lớn hơn
*/