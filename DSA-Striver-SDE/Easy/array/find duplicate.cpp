#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	sort(arr.begin(),arr.end());
	int ele;
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
         ele=arr[i];
		}
	}
	return ele;
}
