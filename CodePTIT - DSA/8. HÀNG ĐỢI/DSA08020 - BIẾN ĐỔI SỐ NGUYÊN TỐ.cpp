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

int check(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int bfs (string s, string t) {
    queue <pair <string,int>> q;
    q.push({s, 0});
 
    map<string, int> kt;
    kt[s] = 1;
 
    while(q.size()) 
    {
        pair <string,int> a = q.front();
        q.pop();
        if (a.st == t) 
        return a.nd;
        fu(i, 0, 3) {
            for (char x = '0' ; x <= '9'; x++) {
                string str = a.st;
                str[i] = x;
                if (!kt[str] and stoi(str) >= 1000 and check(stoi(str))) {
                    q.push({str, a.nd + 1});
                    kt[str] = 1;
                }
            }
        }
    }
    return -1;
}

void case {
    string s, t; 
    scan s >> t;
    println(bfs(s, t));   
}   
MAIN {
    test
        case;
    return 0;
}

/*
Cho cặp số S và T là các số nguyên tố có 4 chữ số 
(Ví dụ S = 1033, T = 8197 là các số nguyên tố có 4 chữ số). 
Hãy viết chương trình tìm cách dịch chuyển S thành T 
thỏa mãn đồng thời những điều kiện dưới đây:

    Mỗi phép dịch chuyển chỉ được phép thay đổi một chữ số của số ở bước trước đó 
        (ví dụ nếu S=1033 thì phép dịch chuyển S thành 1733 là hợp lệ);
    Số nhận được cũng là một số nguyên tố có 4 chữ số 
        (ví dụ nếu S=1033 thì phép dịch chuyển S thành 1833 là không hợp lệ, và S dịch chuyển thành 1733 là hợp lệ);
    Số các bước dịch chuyển là ít nhất.

Ví dụ số các phép dịch chuyển ít nhất để S = 1033 thành T = 8179 là 
6 bước bao gồm các phép dịch chuyển như sau:       
8179 -> 8779 -> 3779 -> 3739 -> 3733 -> 1733 -> 1033.
*/