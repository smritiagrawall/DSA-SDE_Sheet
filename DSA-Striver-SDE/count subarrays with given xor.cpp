#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n=arr.size();
    int currentvalue,cnt=0;

    for(int i=0;i<n;i++){
        currentvalue=arr[i];
        if(currentvalue==x){
            cnt++;
        }
        for (int j = i + 1; j < n; j++) {
          currentvalue=currentvalue^arr[j];
          if(currentvalue==x){
            cnt++;
        }
        }
    }
    return cnt;
}