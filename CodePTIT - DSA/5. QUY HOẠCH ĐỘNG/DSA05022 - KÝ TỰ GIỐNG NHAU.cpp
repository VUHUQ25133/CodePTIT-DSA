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
    int n, inserT, deletE, copY;
    scan n >> inserT >> deletE >> copY;

    int f[101] = {}; f[1] = inserT;
    fu(i, 2, n) {
        if (i % 2)
            f[i] = min({ f[i - 1] + inserT, 
                         f[(i - 1) / 2] + copY + inserT, 
                         f[(i + 1) / 2] + copY + deletE });
        else
            f[i] = min(f[i - 1] + inserT, f[i / 2] + copY);
    }
    println(f[n]);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Giả sử bạn cần viết N ký tự giống nhau lên màn hình. Bạn chỉ được phép thực hiện ba thao tác dưới đây với chi phí thời gian khác nhau:

    Thao tác insert: chèn một ký tự với thời gian là X.
    Thao tác delete: loại bỏ ký tự cuối cùng với thời gian là Y.
    Thao tác copying: copy và paste tất cả các ký tự đã viết để số ký tự được nhân đôi với thời gian là Z.

Hãy tìm thời gian ít nhất để có thể đưa ra màn hình N ký tự giống nhau. 

    Ví dụ với N = 9, X = 1, Y = 2, Z = 1 
    ta có kết quả là 5 bằng cách thực hiện: insert, insert, copying, copying, insert.
*/