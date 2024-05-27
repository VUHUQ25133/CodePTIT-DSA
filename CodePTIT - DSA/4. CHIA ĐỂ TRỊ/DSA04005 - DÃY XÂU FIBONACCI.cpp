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

ll fibo(int n){
    if (n == 1 or n == 2) return 1;
    ll a = 1, b = 1, c = 0;
    fu(i, 3, n){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

char FIND(int n, ll i){
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    ll len = fibo(n-2);
    if (i <= len) return FIND(n-2, i);
    else return FIND(n-1, i-len);
}
void case{
    int n; ll i;
    scan n >> i;
    println(FIND(n, i));
}
MAIN{
    test 
        case;
    return 0;
}

/*
Một dãy xâu ký tự G chỉ bao gồm các chữ cái A và B 
được gọi là dãy xâu Fibonacci nếu thỏa mãn tính chất:    
    G(1) = A; G(2) = B; G(n) = G(n-2)+G(n-1). 
    Với phép cộng (+) là phép nối hai xâu với nhau.  
    
Bài toán đặt ra là tìm ký tự ở vị trí thứ i (tính từ 1) của xâu Fibonacci thứ n.
*/