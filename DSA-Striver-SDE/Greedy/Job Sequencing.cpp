#include <bits/stdc++.h> 

bool  Compare(vector<int> a , vector<int> b){
    return (a[1]>b[1]);
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n=jobs.size();
    sort(jobs.begin(),jobs.end(),Compare);
    int maxi=jobs[0][0];
    for(int i=0;i<n;i++){
     maxi=max(maxi,jobs[i][0]); 
    }

    int slot[maxi + 1];

    for(int i=0;i<=maxi;i++){
        slot[i]= -1;
    }

    int cnt=0,profit=0;
    for(int i=0;i<n;i++){
        for(int j=jobs[i][0];j>0;j--){
            if(slot[j]==-1){
                slot[j]=i;
                cnt++;
                profit+=jobs[i][1];
                break;
            }
        }
    }
  return profit;
}
