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

int a[10005];

void case{
    int n; scan n;
	int sum1 = 0, sum2 = 0;
	fu(i, 1, n){
        scan a[i];
		sum1 += a[i];
		sum2 = max(sum1, sum2);
		if(sum1 < 0) sum1 = 0;
	}
	println(sum2);
}
MAIN{
    test 
        case;
    return 0;
}

/*
Nhiệm vụ của bạn là tìm mảng con liên tục có tổng lớn nhất của mảng. 

Ví dụ với mảng A[]={-2, -5, 6, -2,-3, 1, 5, -6} 
    ta có kết quả là 7 tương ứng với dãy con {6, -2, -3, 1, 5}.
*/