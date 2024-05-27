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
    ll a[n+1], f[n+1]={};

    fu(i, 1, n) {
        scan a[i];
        if (i == 1) f[i] = a[i];
        else f[i] = max(f[i-1], f[i-2] + a[i]);
    }
    println(*max_element(f + 1, f + n+1));
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho dãy số A[] gồm N phần tử. 
Hãy tìm tổng lớn nhất của dãy con của dãy số A[] sao cho dãy con không có hai số cạnh nhau trong A[]. 
    Ví dụ với A[] = {6, 7, 1, 3, 8, 2, 4} 
    ta có kết quả là 19 tương ứng với tổng của dãy con {6, 1, 6, 4} 
    không có haI phần tử nào kề nhau trong A[].
*/