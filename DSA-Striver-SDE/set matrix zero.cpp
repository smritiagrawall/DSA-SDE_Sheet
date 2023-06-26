#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m=matrix.size();
	int n=matrix[0].size();
	set<int>r,c;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==0){
				r.insert(i);
				c.insert(j);
			}
		}
	}
	for(int i:r){
		for(int j=0;j<n;j++){
			matrix[i][j]=0;
		}
	}

   for(int j:c){
     for (int i = 0; i < m; i++) {
       matrix[i][j] = 0;
     }
   }
}