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
    int n; scan n;
    string s; scan s;
    
    if (next_permutation(s.begin, s.end)) print n << " " << s;
    else print n << " " << "BIGGEST";        
    endline();
}

MAIN{
    test 
        case;
    return 0;
}

/*
Hãy viết chương trình nhận vào một chuỗi (có thể khá dài) các ký tự số 
    và đưa ra màn hình hoán vị kế tiếp của các ký tự số đó
        hoặc chuỗi “BIGGEST” nếu không có hoán vị kế tiếp. 
*/