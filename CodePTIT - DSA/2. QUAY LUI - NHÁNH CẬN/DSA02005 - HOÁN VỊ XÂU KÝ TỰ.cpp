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

int n;
string a, b;
vector<bool> check;

void Try(int i) {
    fu(j, 0, n-1) {
        if (!check[j]) {
            b[i] = a[j];
            check[j] = true;
            if (i == n-1) print b << " ";
            else Try(i + 1);
            check[j] = false;
        }
    }
}

void case{
    scan a;
    sort(a.begin, a.end);
    n = a.length();
    b.resize(n);
    check.resize(n, false);
    Try(0);
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho xâu ký tự S bao gồm các ký tự in hoa khác nhau. 
Hãy đưa ra tất cả các hoán vị của xâu ký tự S. 
Ví dụ S=”ABC” ta có kết quả {ABC ACB BAC BCA CAB CBA}. 
*/