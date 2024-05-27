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

int n, k, s, stop;
int a[30];

void Try(int sum, int cnt) {
    if (stop) return;
    if (cnt == k) {
        stop = 1;
        return;
    }
    fu(i, 0, n-1) {
        if (sum == s)
            Try(0, cnt + 1);
        else if (sum < s) 
            Try(sum + a[i], cnt);
        else
            return;
    }
}

void case{
    s = 0, stop = 0;
    scan n >> k;
    fu(i, 0, n-1) {
        scan a[i];
        s += a[i];
    }
    if (s % k ) {
        println(0);
        return;
    }
    s /= k;
    Try(0, 0);
    println((stop ? 1 : 0));
}

MAIN{
    test 
        case;
    return 0;
}

/*
Cho mảng các số nguyên A[] gồm N phần tử. 
Hãy chia mảng số nguyên A[] thành K tập con khác rỗng sao cho tổng các phần tử của mỗi tập con đều bằng nhau. 
Mỗi phần tử thuộc tập con xuất hiện duy nhất một lần trong tất cả các tập con. 
Ví dụ với A[] = {2, 1, 4, 5, 6}, K =3 ta có kết quả {2, 4}, {1, 5}, {6}.
*/