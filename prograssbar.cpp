#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, t;
    cin >> n >> k >> t;
    int sum = (n*k*t)/100;
    int rem_sum = sum % k;
    int quo_sum = sum/k;
    
    while(n--){
        if(quo_sum > 0){
            cout << k <<" ";
            quo_sum--;
        }
        else if(rem_sum > 0){
            cout << rem_sum <<" ";
            rem_sum = 0;
        }
        else{
            cout<<0<<" ";
        }
    }

}