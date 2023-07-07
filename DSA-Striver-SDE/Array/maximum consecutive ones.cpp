int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0;
    int j=0;
    int cnt=0;
    int maxi=0;
    while(j<n){
          if(arr[j]==0){
         cnt++;
     } 

     while(cnt>k){
         if(arr[i]==0){
             cnt--;
         }
         i++;
     }
     maxi=max(maxi,j-i+1);
     j++;  
        }
        return maxi; 
    
}
