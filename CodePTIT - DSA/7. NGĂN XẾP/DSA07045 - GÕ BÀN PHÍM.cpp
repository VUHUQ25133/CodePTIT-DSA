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


void case{
    string input; scan input;
    stack<char> truoc; 
    stack<char> sau;   
 
    for (char c : input)
    {
        if (c == '-')
        {
            if (!truoc.empty())
                truoc.pop();
        }
        else if (c == '<')
        {
            if (!truoc.empty())
            {
                sau.push(truoc.top());
                truoc.pop();
            }
        }
        else if (c == '>')
        {
            if (!sau.empty())
            {
                truoc.push(sau.top());
                sau.pop();
            }
        }
        else
            truoc.push(c);
    }
    while (!truoc.empty())
    {
        sau.push(truoc.top());
        truoc.pop();
    }
    while (!sau.empty())
    {
        print sau.top();
        sau.pop();
    }
    endline();
}

MAIN{
    // test
        case;
    return 0;
}


/*
Trong quá trình gõ một dòng văn bản, chúng ta thường sử dụng phím 
sang trái, sang phải hoặc xóa lùi (backspace). 
Cho một dãy ký tự mô tả các thao tác gõ phím, trong đó:

Ký tự ‘-’ mô tả phím backspace (xóa lùi). Ký tự ở phía trước con trỏ (nếu có) sẽ bị xóa.
Ký tự ‘<’ mô tả phím di chuyển sang trái. Con trỏ sẽ sang trái 1 ký tự nếu có thể.
Ký tự ‘>’ mô tả phím di chuyển sang phải. Con trỏ sẽ sang phải 1 ký tự nếu có thể.
Các ký tự khác là các chữ cái Tiếng Anh (in hoa hoặc in thường). 
Bàn phím để ở chế độ Insert. 
Tức là nếu con trỏ không ở cuối dòng thì khi chèn các ký tự sẽ 
đẩy các ký tự khác sang phải một vị trí.
Hãy thử tính toán và viết ra kết quả tương ứng.
*/