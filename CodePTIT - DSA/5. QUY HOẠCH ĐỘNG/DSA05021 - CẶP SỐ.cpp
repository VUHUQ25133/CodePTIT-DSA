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
    vector<ii> a(n);
    for (auto &i : a) scan i.st >> i.nd;
    sort(a.begin, a.end);

    array f(n, 1);
    fu(i, 0, n-1)
        fu(j, 0, i-1)
            if (a[i].st > a[j].nd)
                f[i] = max(f[i], f[j] + 1);

    println(*max_element(f.begin, f.end));
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho N cặp số, trong đó số thứ nhất bao giờ cũng nhỏ hơn số thứ 2. 
Ta nói, cặp số <c, d> được gọi là theo sau cặp số <a,b> nếu b<c. 
Nhiệm vụ của bạn là tìm số lớn nhất chuỗi các cặp thỏa mãn ràng buộc trên. 
Ví dụ với các cặp {<5, 24>, <39, 60>, <15, 28>, <27, 40>, <50, 90>} 
ta có kết quả là 3 tương ứng với chuỗi các cặp {<5,24>, <27, 40>, <50, 90>}.
*/