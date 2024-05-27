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


#define N 10005
struct edge {
    int u, v, w;                                    // Cấu trúc để lưu cạnh đồ thị,
    bool operator < (edge& other) {                 // u, v là 2 đỉnh, w là trọng số cạnh
        return w < other.w;
    }
};

int cha[N], hang[N];

// Tìm xem u thuộc cây nào
int find(int u) {
    if (cha[u] != u) cha[u] = find(cha[u]);
    return cha[u];
}

bool join(int u, int v) {                           // Hợp nhất 2 cây thứ u và v,
    u = find(u); v = find(v);                       
    if (u == v) return false;                       // Trả về false nếu không thể hợp nhất
    if (hang[u] == hang[v]) hang[u]++;
    if (hang[u] < hang[v]) cha[u] = v;
    else cha[v]=u;
    return true;
}
void case {
    int n, m; scan n >> m;
    vector<edge> edges(m);
    for (edge &e: edges) scan e.u >> e.v >> e.w;

    // Sắp xếp lại các cạnh theo trọng số tăng dần
    sort(edges.begin, edges.end);

    fu(i, 1, n) {
        cha[i] = i;
        hang[i] = 0;
    }
    // Lưu tổng trọng số các cạnh trong cây khung nhỏ nhất
    int mst_weight = 0;

    // Duyệt qua các cạnh theo thứ tự đã sắp xếp
    for (edge &e: edges) {
        if (join(e.u, e.v)) {   // Thử hợp nhất 2 cây chứa u và v
            mst_weight += e.w;  // Hợp nhất thành công, ta thêm e và kết quả
        }
    }

    // Xuất kết quả
    println(mst_weight);
}
MAIN {
    test
        case;
    return 0;
}

/*
Nhiệm vụ của bạn là hãy xây dựng một cây khung nhỏ nhất của đồ thị bằng thuật toán Kruskal.
*/