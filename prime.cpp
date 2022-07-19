#include <bits/stdc++.h>
#include<vector>
using namespace std;
int isPrime(int n){
    int i,j, count = 0,flag = 0;
    for(int i = 2;i>0;i++){
        flag = 0;
        for(j = 2;j<i;i++){
            if(i%j == 0){
              flag = 1;
              break;
            }
        }
        if(flag == 0){
            count++;
        }
    if(count == n){
        return i;
        break;
    }
}
return 0;
}
int main() {
int n;
cin >> n;
cout<< isPrime(n)<<endl;
  
}