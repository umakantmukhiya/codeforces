#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[100];
    cin.getline(arr,100);

    for(int i = strlen(arr)-1; i >= 0; i-- ){
    	if(arr[i] == ' '){
    		arr[i] = '\0';
    		printf("%s ", (arr + i + 1));
    	}
    	else if(i == 0){
    		printf("%s", (arr + i));
    	}
        
    }
}