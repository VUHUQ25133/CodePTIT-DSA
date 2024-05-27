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

int n, k;
array a, b;
bool hasAnswer;

void solve() {
    int sum = 0;
    for (int i: b) sum += a[i];
    if (sum == k) {
        hasAnswer = true;
        print "[";
        fu(i, 0, b.size()-1) {
            print a[b[i]];
            if (i != b.size() - 1) print " ";
        }
        print "] ";
    }
}

void Try(int i) {
    fd(j, 1, 0) {
        if (j == 1) b.pb(i);
        if (i == n-1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

void case{
    scan n >> k;
    a.resize(n);
    hasAnswer = false;
    for (int &i : a) scan i;
    
    sort(a.begin, a.end);
    Try(0);
    if (!hasAnswer) print -1;
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho dãy số A[] = (a1, a2, .., an) và số tự nhiên K. 
    Hãy đưa ra tất cả các dãy con của dãy số A[] 
    sao cho tổng các phần tử của dãy con đó đúng bằng K. 
        Các phần tử của dãy số A[] được giả thuyết là nguyên dương 
        và không có các phần tử giống nhau. 
Ví dụ với dãy con A[] = {5, 10, 15, 20, 25}, K = 50 
ta có 3 dãy con {5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.
*/