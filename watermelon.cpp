#include<iostream>
using namespace std;

 int main(){
     int w;
     cin >> w;
     if(w >=1  && w <= 100){
         
       if(w%2 == 0){
           if((w/2)%2 == 0){
               cout<<"YES";
           }
           else if((w-2) > 0 && (w-2)%2 == 0){
               cout<<"YES";
           }
           else{
               cout<<"NO";
           }
       }
       else{
           cout<<"NO";
       }
       
         
     }
 }