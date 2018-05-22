#include <bits/stdc++.h>
using namespace std;
string convert(string s)
{
    int n = s.length();
     int res_ind = 0;
     for (int i = 0; i < n; i++) {
    if (s[i] == ' ') {
    s[i + 1] = toupper(s[i + 1]);
            continue;
        }
 else
            s[res_ind++] = s[i];        
    }
 
    s[res_ind] = '\0';
     return s;
}
int main()
{
    string str = "I am pd";
    cout << convert(str);
    return 0;
}
