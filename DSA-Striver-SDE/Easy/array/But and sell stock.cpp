
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.

    int max1=0,j=prices[0];
      if (prices.size() == 1) return 0;

    for(int i=1;i<prices.size();i++){
      if(prices[i]<=j){
        //   i++;
          j=prices[i];
      }
     
          // int sub=;
          max1=max(max1,prices[i]-j);
      
    }
    return max1;
}