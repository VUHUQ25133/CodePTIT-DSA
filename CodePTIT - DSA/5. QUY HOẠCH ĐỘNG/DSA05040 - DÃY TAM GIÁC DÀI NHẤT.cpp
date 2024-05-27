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
    int n; scan n;
    int a[100005], l[100005] = {}, r[100005] = {};
    fu(i, 1, n) scan a[i];
    
    fu(i, 1, n) 
        if (a[i] > a[i - 1])
            l[i] = l[i - 1] + 1;
        else
            l[i] = 1;
            
    fd(i, n, 1)
        if (a[i] > a[i + 1])
            r[i] = r[i + 1] + 1;
        else
            r[i] = 1;

    int res = 0;
    fu(i, 1, n) res = max(res, l[i] + r[i] - 1);
    println(res);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho dãy số A[] gồm có N phần tử.  
Một dãy con liên tiếp được gọi là dãy tam giác nếu như dãy đó 
tăng dần rồi lại giảm dần, hay tồn tại i, j, k sao cho 
A[i] ≤ A[i+1] ≤ … ≤ A[k] ≥ A[k+1] ≥ … ≥ A[j].

Nhiệm vụ của bạn là hãy tìm dãy con liên tiếp là dãy tam giác có độ dài lớn nhất.
Lưu ý: Dãy đơn điệu không giảm hoặc không tăng 
cũng là dãy tam giác. Ví dụ A[] = {10, 20, 30, 40} là một dãy tam giác.
*/