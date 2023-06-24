#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>vs;
int n=arr.size();
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(arr[i]+arr[j]==s && i!=j){
vector<int>v;
v.push_back(arr[i]);
v.push_back(arr[j]);
sort(v.begin(),v.end());
vs.push_back(v);
}
}
}
sort(vs.begin(),vs.end());

return vs;
}