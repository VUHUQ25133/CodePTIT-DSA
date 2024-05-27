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

int L[6] = {3, 0, 2, 4, 1, 5},
    R[6] = {0, 4, 1, 3, 5, 2};

string left (string s){
    string res = "";
    fu(i, 0, 5) res += s[L[i]];
    return res;
}
string right (string s){
    string res = "";
    fu(i, 0, 5) res += s[R[i]];
    return res;
}
 
int bfs(string a, string b){
    queue <pair<string, int>> q;
    q.push({a, 0});
    pair <string, int> x;
    string y;
    while (q.size()){
        x = q.front(); q.pop();
        if (x.st == b) return x.nd;
        y = left(x.st);  q.push({y, x.nd + 1});
        y = right(x.st); q.push({y, x.nd + 1});
    }
    return -1;
}

void case {
    string a = "", b = "";
        fu(i, 1, 6) {int x; scan x; a += x + '0';}
        fu(i, 1, 6) {int x; scan x; b += x + '0';}
    println(bfs(a, b));   
}
MAIN {
    test
        case;
    return 0;
}

/*
Có một chiếc bảng hình chữ nhật với 6 miếng ghép, 
trên mỗi miếng ghép được điền một số nguyên trong khoảng từ 1 đến 6.
vd:
( 1 2 3
  4 5 6 )

Tại mỗi bước, chọn một hình vuông (bên trái hoặc bên phải), 
rồi quay theo chiều kim đồng hồ.

Yêu cầu: Cho một trạng thái của bảng, 
hãy tính số phép biến đổi ít nhất để đưa bảng đến trạng thái đích.
*/