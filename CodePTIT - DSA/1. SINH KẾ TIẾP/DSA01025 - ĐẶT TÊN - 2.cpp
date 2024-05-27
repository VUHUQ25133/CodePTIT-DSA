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
    int n; scan n;
    int k; scan k;
    array a(k + 1);
    fu(i, 1, k) a[i] = i;
    while (true){
        fu(i, 1, k){
            char c = a[i] + 64;
            print c;
        }
        endline();
        int i = k;
        while (a[i] == n - k + i) i--;
        if (i == 0) break;
        a[i]++;
        int j = a[i];
        while (i <= k) 
            a[i++] = j++;
    }
}


MAIN{
    test 
        case;
    return 0;
}

/*
Vương quốc PTIT sử dụng bảng chữ cái gồm N chữ cái Latin viết hoa. 
Quy tắc đặt tên của gia đình Hoàng gia  PTIT là 
  chọn ra K chữ cái (không trùng nhau) và sắp xếp lại theo thứ tự từ điển.

Hãy liệt kê tất cả các cái tên có thể có của gia đình Hoàng gia PTIT
*/