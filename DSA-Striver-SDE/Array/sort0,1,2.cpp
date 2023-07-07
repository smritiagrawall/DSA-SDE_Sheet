#include <bits/stdc++.h> 

//approach 1
void sort012(int *arr, int n)
{
   //   Write your code here
   int zero=0,one=0,second=0;
   for(int i=0;i<n;i++){
    if(arr[i]==0){
       zero++;
    }
    if(arr[i]==1){
       one++;
    }
    if (arr[i] == 2) {
      second++;
    }
   }
    int j=0;
    while(zero--){
       arr[j++]=0;
    }
     while(one--){
       arr[j++]=1;
    }
     while(second--){
       arr[j++]=2;
    }
   
}


//3 pointer approach

void sort012(int *arr, int n)
{
   //   Write your code here
  int low = 0;
  int mid = 0;
  int high= n-1;
  while(mid<=high)
  {
     if(arr[mid]==0)
     {
        swap(arr[mid], arr[low]);
        low++;
        mid++;
     }
     else if(arr[mid]==1) mid++;
     else
     {
        swap(arr[mid], arr[high]);

        high--;
     }

  }

}

