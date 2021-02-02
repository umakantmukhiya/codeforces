#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1001];
    cin >> s;

    if(s[0] >= 'a'){
        s[0] -= 32;
    }

    cout << s;
}