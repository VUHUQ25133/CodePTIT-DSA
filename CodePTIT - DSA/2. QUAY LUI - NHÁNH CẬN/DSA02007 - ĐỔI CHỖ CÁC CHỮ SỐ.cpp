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

string s;
int k;
string result;
 
void Try(int pos, int k) {

    if (k == 0) return;
    
    for (int i = pos; i < s.size()-1; i++) {
        for (int j = i+1; j<s.size(); j++) {

            if (s[j] > s[i]){
                    swap(s[i], s[j]);

                    result = max (result, s);
                    Try(pos + 1, k - 1);

                    swap(s[i], s[j]);
                }
            }
        }
}

void case{
    scan k >> s;
    result = s;
    Try(0, k);
    println(result);
}

MAIN{
    test 
        case;
    return 0;
}

/*
Cho số tự nhiên K và xâu ký tự các chữ số S.  
Nhiệm vụ của bạn là đưa ra số lớn nhất bằng cách 
    thực hiện nhiều nhất K lần đổi chỗ các ký tự trong S. 
Ví dụ K =3 và S = “1234567” ta được “7654321”.
*/