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
    int a[n], f[n];
    
    fu(i, 0, n-1) {
        scan a[i];
        f[i] = 1;
        fu(j, 0, i-1) {
            if (a[i] >= a[j])
                f[i] = max(f[i], f[j] + 1);
        }
    }
    println(n - *max_element(f, f + n));
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho mảng A[] gồm N số nguyên. 
Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. 
Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng 
                                vào vị trí bất kỳ trong mảng. 
                                
Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }
sẽ cho ta số phép chèn ít nhất là 3 
bằng cách lấy số 1 chèn trước số 2, 
          lấy số 4 chèn trước số 5, 
          lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.
*/