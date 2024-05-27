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

struct Node {
    string config;
    int high;
    Node(string config, int high) {
        this->config = config;
        this->high = high;
    }
};

string S = "", T = "1238004765", le = "0012345678", ri = "0012345678";
map<string, int> xuoi, nguoc;
bool stop = 0;

/* Quay xuôi */
const int L[10] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
const int R[10] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
void quayXuoi(string s) {
    for (int i = 0; i < 10; ++i) {
        le[i] = s[L[i]];
        ri[i] = s[R[i]];
    }
}

/* Quay ngược */
const int l[10] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
const int r[10] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};
void quayNguoc(string s) {
    for (int i = 0; i < 10; ++i) {
        le[i] = s[l[i]];
        ri[i] = s[r[i]];
    }
}

void bfsXuoi() {
    queue<Node> q;
    q.push(Node(S, 0));
    xuoi[S] = 0;

    while (!q.empty()) {
        Node x = q.front(); q.pop();
        if (x.config == T) {
            stop = 1;
            println(x.high);
            return;
        }
        // Dừng BFS xuôi, BFS ngược từ cuối lại
        if (x.high > 15) return;

        quayXuoi(x.config);
        if (xuoi.find(le) == xuoi.end) {
            q.push(Node(le, x.high + 1));
            xuoi[le] = x.high + 1;
        }
        if (xuoi.find(ri) == xuoi.end) {
            q.push(Node(ri, x.high + 1));
            xuoi[ri] = x.high + 1;
        }
    }
}

void bfsNguoc() {
    queue<Node> q;
    q.push(Node(T, 0));
    nguoc[T] = 0;

    while (!q.empty()) {
        Node x = q.front(); q.pop();
        if (xuoi.find(x.config) != xuoi.end) {
            println(x.high + xuoi[x.config]);
            return;
        }

        quayNguoc(x.config);
        if (nguoc.find(le) == nguoc.end) {
            q.push(Node(le, x.high + 1));
            nguoc[le] = x.high + 1;
        }
        if (nguoc.find(ri) == nguoc.end) {
            q.push(Node(ri, x.high + 1));
            nguoc[ri] = x.high + 1;
        }
    }
}

void case {
    fu(i, 1, 10) {
        int x; scan x;
        S += char(x + '0');
    }
    bfsXuoi();
    if (!stop) bfsNguoc();

    stop = 0;
    S.clear();
    xuoi.clear();
    nguoc.clear();
}

MAIN {
    test
        case;
    return 0;
}

/*
HEXGAME là một trò chơi xếp hình gồm 10 miếng ghép hình lục giác đều, 
trên mỗi miếng ghép được điền một số nguyên, 
có 8 miếng được điền số  từ 1 đến 8 và có hai miếng điền số 0. 
Các miếng liên kết với nhau tạo thành lưới tổ ong. 
Ban đầu các miếng ghép ở vị trí như hình vẽ. 
Tại mỗi bước, chọn một miếng ghép có đúng 6 miếng ghép kề cạnh làm tâm, 
rồi xoay một nấc 6 miếng ghép kề cạnh đó theo chiều kim đồng hồ. 
Như vậy chỉ có hai cách chọn tâm, đó là chọn tâm bên trái và chọn tâm bên phải.

VD:    1   2   3
     8   0   0   4
       7   6   5
       
Yêu cầu: Cho một trạng thái của trò chơi 
(nhận được sau một dãy biến đổi từ trạng thái ban đầu), 
hãy tính số phép biến đổi ít nhất để đưa về trạng thái ban đầu.
*/