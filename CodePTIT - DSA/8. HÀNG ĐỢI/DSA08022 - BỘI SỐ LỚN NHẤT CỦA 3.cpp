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

priority_queue<int, vector<int>, greater<int>> q1, q2;
priority_queue<int> q;

void case {
    int n; scan n;		
	ll sum = 0;
	int x;
	fu(i, 1, n){
		scan x;
		sum += x;
		if (x % 3 == 1) q1.push(x);
		else if (x % 3 == 2) q2.push(x);
		else q.push(x);
	}

	if (sum % 3 == 1) {
		if (q1.size()) q1.pop();
		else if (q2.size() >= 2){
			q2.pop();
			q2.pop();
		}
		
	}
	else if (sum % 3 == 2) {
		if (q2.size()) q2.pop();
		else if (q1.size() >= 2){
			q1.pop();
			q1.pop();
		}
	}

    while (q1.size()){
		q.push(q1.top());
		q1.pop();
	}
	while (q2.size()){
		q.push(q2.top());
		q2.pop();
	}
    
    if (q.empty()) print -1;
	else if (!q.top()) print 0;
    else 
 	    while (q.size()){
		    print q.top();
		    q.pop();
	    }
	endline();
}
MAIN {
    test
        case;
    return 0;
}

/*
Cho dãy số A[] có N phần tử là các chữ số từ 0 đến 9. 
Nhiệm vụ của bạn là hãy chọn lấy một tổ hợp các phần tử và 
sắp xếp chúng sao cho thu được số lớn nhất chia hết cho 3.

Nếu không tìm được số nào, in ra -1.
*/