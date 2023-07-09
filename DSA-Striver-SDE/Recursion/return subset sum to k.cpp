void func(int ind,vector<int> &arr,int k,vector<int> &ds,vector<vector<int>> &ans){
 
  if(ind == arr.size()){
   if(accumulate(ds.begin(), ds.end(), 0) == k){
   ans.push_back(ds);
  }

return;

}
ds.push_back(arr[ind]);
func(ind + 1, arr, k, ds,ans);
ds.pop_back();
func(ind + 1, arr, k, ds, ans);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>ds;
   // sort(arr.begin(),arr.end());
    func(0,arr,k,ds,ans);
    //vector<int>v;

    return ans;
}