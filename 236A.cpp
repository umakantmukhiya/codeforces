#include <bits/stdc++.h>

using namespace std;

int main()
{
char s[101];
int c[26] = {0};
int count = 0;
cin >> s;

for( int i = 0; i < strlen(s); i++){
        if(c[s[i] - 'a'] == 0){
            c[s[i] - 'a'] = 1;
        }
}

for( int i = 0; i < 26; i++){
    if(c[i] == 1){
        count++;
    }

}

if(count % 2 == 0){
    cout << "CHAT WITH HER!";
}
else{
    cout <<"IGNORE HIM!";
}


}