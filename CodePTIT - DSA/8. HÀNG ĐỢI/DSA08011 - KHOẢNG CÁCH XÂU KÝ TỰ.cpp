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

void case {
    int n, count;
    string st, en, s;
    scan n >> st >> en;
    set<string> dd;

    while (n--) {
        scan s;
        dd.insert(s);
    }

    queue<pair<string, int>> q;

    q.push({st, 1});
    while (!q.empty()) {
        s = q.front().st;
        count = q.front().nd;
        q.pop();

        if (s == en) {
            println(count);
            return;
        }
        
        fu(i, 0, s.length()-1) {
            string tmp = s;
            for (char j = 'A'; j <= 'Z'; ++j) {
                tmp[i] = j;
                if (dd.find(tmp) != dd.end) {
                    dd.erase(tmp);
                    q.push({tmp, count + 1});
                }
            }
        }
    }

}
MAIN {
    test
        case;
    return 0;
}

/*
Cho tập n xâu ký tự S và hai xâu s, t. 
Ta giả thiết các xâu ký tự S[i] ,s, t có độ dài bằng nhau.  
Hãy tìm khoảng cách đường đi ngắn nhất từ s đến t. 
Biết từ một xâu ký tự bất kỳ ta chỉ được phép dịch chuyển đến xâu 
khác với nó duy nhất 1 ký tự. 
    Ví dụ ta có tập các từ S = {POON, TOON, PLEE, SAME, POIE, PLEA, PLIE, POIN}, 
    s = TOON, t = PLEA 
    ta có độ dài đường đi ngắn nhất là 7 tương ứng với các phép dịch chuyển : 
    TOON -> POON –> POIN –> POIE –> PLIE –> PLEE –> PLEA.
*/