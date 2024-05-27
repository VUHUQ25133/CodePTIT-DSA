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

vector <ll> a;
int n; ll k;

bool bin_Search(int l, int r, ll val) {
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == val) return 1;
        if (a[m] > val) r = m - 1;
        else l = m + 1;
    }
    return 0;
}

void case {
    scan n >> k;
    a.assign(n+1, 0);
    
    fu(i, 1, n) {
        scan a[i];
        a[i] += a[i - 1];
    }

    if (a[n] == k) {
        println("YES");
        return;
    }

    fu(i, 1, n) {
        if (bin_Search(i, n, a[i-1] + k)) {
            println("YES");
            return;
        }
    }
    println("NO");
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho dãy số A[] gồm có N phần tử không âm và số K.

Nhiệm vụ của bạn là hãy xác định xem có tìm được 
1 dãy con liên tiếp mà tổng các phần tử bằng K hay không?
*/