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
    string a, b;
    scan a >> b;
    int n = a.length(), m = b.length();
    int f[n + 1][m + 1] = {};
    fu(i, 0, n) {
        fu(j, 0, m) {
            if (i == 0) f[i][j] = j;
            
            else if (j == 0) f[i][j] = i;

            else if (a[i - 1] == b[j - 1]) f[i][j] = f[i - 1][j - 1];

            else f[i][j] = min({ f[i - 1][j], 
                                 f[i][j - 1], 
                                 f[i - 1][j - 1] }) + 1;
        }
    }
    println(f[n][m]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho hai xâu ký tự str1, str2 bao gồm các ký tự in thường và các thao tác dưới đây:
    Insert: chèn một ký tự bất kỳ vào str1.
    Delete: loại bỏ một ký tự bất kỳ trong str1.
    Replace: thay một ký tự bất kỳ trong str1.
Nhiệm vụ của bạn là đếm số các phép Insert, Delete, Replace ít nhất thực hiện trên str1 để trở thành str2.
*/