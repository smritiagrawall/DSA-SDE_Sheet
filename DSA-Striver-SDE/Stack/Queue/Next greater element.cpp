#include <bits/stdc++.h>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	// Write your code here
	 stack <int> s;
    vector <int> ans(n,-1);
    for(int i=n-1;i>=0;i--){
        while(!s.empty()){
            if(s.top() > arr[i]){
                ans[i] = s.top();
                break;
            }
            s.pop();
        }
        s.push(arr[i]);
    }
    return ans;
}