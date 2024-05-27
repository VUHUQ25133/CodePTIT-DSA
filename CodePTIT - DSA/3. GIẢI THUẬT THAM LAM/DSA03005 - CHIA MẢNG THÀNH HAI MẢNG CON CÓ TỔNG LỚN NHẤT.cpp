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
    int k; scan k;
    int sum = 0;
    array a(n);
    for (int &i : a) {
        scan i;
        sum += i;
    }
    sort(a.begin, a.end);
    k = min(k, n - k);
    fu(i, 0, k-1) sum -= 2 * a[i];
    print sum;
    endline();
}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho mảng A[] gồm N số nguyên không âm và số K. 
Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K 
sao cho hiệu giữa tổng hai mảng con là lớn nhất. 
    Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 
    vì mảng A[] được chia thành hai mảng {4, 2} và {8, 5,10} 
    có hiệu của hai mảng con là 23-6=17 là lớn nhất.
*/