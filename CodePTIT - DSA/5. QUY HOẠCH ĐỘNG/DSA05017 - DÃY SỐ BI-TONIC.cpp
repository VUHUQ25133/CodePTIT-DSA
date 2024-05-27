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
    int a[n], l[n], r[n];
    for (int &i : a) scan i;
    
    fu(i, 0, n-1) {
        l[i] = a[i];
        fu(j, 0, i-1) 
            if (a[i] > a[j]) 
                l[i] = max(l[i], l[j] + a[i]);
    }

    fd(i, n-1, 0) {
        r[i] = a[i];
        fd(j, n-1, i) 
            if (a[i] > a[j]) 
                r[i] = max(r[i], r[j] + a[i]);
    }

    int res = 0;
    fu(i, 0, n-1) res = max(res, l[i] + r[i] - a[i]);
    println(res);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Một dãy số được gọi là Bi-tonic 
nếu nó được chia thành hai dãy đầu tăng dần và dãy tiếp theo giảm dần. 
Nhiệm vụ của bạn là tìm tổng lớn nhất dãy con Bi-tonic của dãy số A[]. 
    Ví dụ với dãy A[] = {1, 15, 51, 45, 33, 100, 12, 18, 9} 
    ta có kết quả là 194 tương ứng với dãy Bi-tonic {1, 15, 51, 100, 18, 9}.
*/