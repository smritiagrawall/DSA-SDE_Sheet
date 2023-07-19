#include <bits/stdc++.h> 
int search(int* arr, int n, int key) {
    // Write your code here.
   // sort(arr,arr+n);
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e){
        
        if(arr[m]==key){
            return m;
        }
        if(arr[s]<=arr[m]){
            if(key>=arr[s] && key<arr[m]){
               e=m-1;
            }
            else{
                s=m+1;
            }
        }

        else{
         if(key<=arr[e] && key>arr[m]){
             s=m+1;
        }
        else{
            e=m-1;
        }
        }
        
     m=s+(e-s)/2;
    }
    return -1;
}