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

void hanoi(int n, char a, char b, char c){
    if (n == 1){
        print  a << " -> " << c el;
        return;
    }
    hanoi(n-1, a, c, b);
    hanoi(1, a, b, c);
    hanoi(n-1, b, a, c);
}   
void case{
    int n;
    scan n;
    hanoi(n, 'A', 'B', 'C');
}
MAIN{
    test 
        case;
    return 0;
}

/*
Bài toán Tháp Hà Nội đã rất nổi tiểng. 
Bắt đầu có các đĩa xếp chồng lên cột A theo thứ tự kích thước giảm dần, nhỏ nhất ở trên cùng. 
Cột B và cột C ban đầu không có đĩa nào cả.
Mục tiêu của bạn là di chuyển toàn bộ các đĩa theo đúng thứ tự về cột C, 
tuân theo các quy tắc sau:

    Mỗi lần chỉ có thể di chuyển một đĩa.
    Mỗi lần di chuyển sẽ lấy đĩa trên từ một trong các cột và đặt nó lên trên một cột khác.
    Không được đặt đĩa lên trên đĩa nhỏ hơn..


    Hãy In ra lần lượt từng bước.
*/