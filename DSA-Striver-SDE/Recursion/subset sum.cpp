void func(int i, vector < int > & num, int n, vector < int > & ans, int sum){
	if(i==n){
		ans.push_back(sum);
		return;
	}

	func(i+1,num,n,ans,sum+num[i]);
	func(i+1,num,n,ans,sum);
}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	int n= num.size();	
	vector<int>ans;
	//int sum=0;
	func(0,num,n,ans,0);
	sort(ans.begin(),ans.end());
	return ans;
}