#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long s=0,e=n-1,maxl=0,maxr=0,sum=0;
    while(s<=e){
        if(arr[s]<=arr[e]){
            if(arr[s]>=maxl){
                maxl=arr[s];
            }
            else
            sum+=maxl-arr[s];
            s++;
        }
        else{
            if(arr[e]>=maxr){
                maxr=arr[e];
            }
            else
            sum+=maxr-arr[e];
            e--;
        }
    }
 
 
 return sum;   
}