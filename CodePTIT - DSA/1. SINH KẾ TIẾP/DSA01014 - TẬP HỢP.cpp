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

int cntSets(int n, int k, int s, int start) {
    if (k == 0 and s == 0) return 1;
    
    int cnt = 0;
    fu(i, start, n) {
        if (i <= s) cnt += cntSets(n, k - 1, s - i, i + 1);
        else break;
    }
    return cnt;
}
void case {
    int n, k, s;
    while (cin >> n >> k >> s) {
        
        if (n == 0 and k == 0 and s == 0) break;

        int res = cntSets(n, k, s, 1);
        println(res);
    }
}
MAIN{
    // test 
        case;
    return 0;
}

/*
Xét tất cả các tập hợp các số nguyên dương 
    có các phần tử khác nhau và không lớn hơn số n cho trước. 
    
Nhiệm vụ của bạn là hãy đếm xem có tất cả 
    bao nhiêu tập hợp có số lượng phần tử bằng k 
        và tổng của tất cả các phần tử trong tập hợp bằng s?

Các tập hợp là hoán vị của nhau chỉ được tính là một.

Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.
*/