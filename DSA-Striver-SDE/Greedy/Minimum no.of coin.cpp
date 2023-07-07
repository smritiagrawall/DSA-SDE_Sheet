#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int arr[9]={1,2,5,10,20,50,100,500,1000};
    int sum=0,cnt=0,a;
    int i=8;
    while(amount!=0 && i>=0){
      if (amount < arr[i]) {
        i--;
        continue;
      }
            amount=amount-arr[i];
            cnt++;
        
    }
    return cnt;
}
