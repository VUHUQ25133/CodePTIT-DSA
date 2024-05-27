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
    int a[100];
    fu(i, 1, n) scan a[i];
    fu(i, 1, n) if (a[i] != i and a[i] != n-i+1) {
        println("No");
        return;
    }
    println("Yes");
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho mảng A[] gồm N số và thực hiện các thao tác theo nguyên tắc dưới đây:

Ta chọn một mảng con sao cho phần tử ở giữa của mảng con cũng là phần tử ở giữa của mảng A[] (trong trường hợp N lẻ).
Đảo ngược mảng con đã chọn trong mảng A[]. 
Ta được phép chọn mảng con và phép đảo ngược mảng con bao nhiêu lần tùy ý.
Hãy cho biết ta có thể sắp xếp được mảng A[] bằng cách thực hiện các thao tác kể trên hay không?
*/