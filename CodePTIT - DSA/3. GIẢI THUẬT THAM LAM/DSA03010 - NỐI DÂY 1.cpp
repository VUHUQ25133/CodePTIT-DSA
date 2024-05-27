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
    priority_queue<int, array, greater<int>> pq;
    while (n--) {
        int x; scan x;
        pq.push(x);
    }
    ll ans = 0;
    while (pq.size() >= 2) {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();
        ans += x + y;
        pq.push(x + y);
    }
    println(ans);

}
MAIN{
    test 
        case;
    return 0;
}

/*
Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. 
Nhiệm vụ của bạn là nối N sợi dây thành một sợi 
sao cho tổng chi phí nối dây là nhỏ nhất. 
    Biết chi phí nối sợi dây thứ i và sợi dây thứ j 
    là tổng độ dài hai sợi dây A[i] và A[j].
*/