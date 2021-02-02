#include <bits/stdc++.h>

using namespace std;

int main()
{
   char s[101];
   int n[100], j = 0;
   int * v = n;

   

   cin >> s;

   for( int i = 0; i < strlen(s); i++){
       if(s[i] == '+'){
           continue;
       }
       else{
           *(v + j)= s[i] - 48;
           j++;

       }
   }
   

   for(int i = 0; i < j; i++){
       for(int k =0; k < j - i - 1; k++){
           if(n[k] > n[k+1]){
               int tmp = n[k+1];
               n[k+1] = n[k];
               n[k] = tmp;
           }
       }
   }

   for( int i = 0; i < j; i++){
       if(i+1 == j){
           cout << n[i];
       }
       else{
            cout << n[i] << '+';
       }
   }


}