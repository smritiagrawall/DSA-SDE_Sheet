<<<<<<< HEAD
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int>p;
	sort(arr.begin(),arr.end());
	int m,r;
	for(int i=0;i<n;i++){
          if (arr[i] == arr[i - 1]) {
            r = arr[i];
            break;
          }
        }

int sum=0;
int actsum=n*(n+1)/2;
for (int i = 0; i < n; i++) {
  sum += arr[i];
}
m = actsum - (sum - r);
p = make_pair(m, r);

        return p;
}
=======
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int>p;
	sort(arr.begin(),arr.end());
	int m,r;
	for(int i=0;i<n;i++){
          if (arr[i] == arr[i - 1]) {
            r = arr[i];
            break;
          }
        }

int sum=0;
int actsum=n*(n+1)/2;
for (int i = 0; i < n; i++) {
  sum += arr[i];
}
m = actsum - (sum - r);
p = make_pair(m, r);

        return p;
}
>>>>>>> 503b4685a00ba1dc78722a7bdccc20b2fe356346
