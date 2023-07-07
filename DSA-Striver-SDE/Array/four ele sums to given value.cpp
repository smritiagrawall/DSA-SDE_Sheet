#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    //int n = nums.size(); //size of the array
    vector<vector<int>> ans;

    // sort the given array:
    sort(arr.begin(), arr.end());

    //calculating the quadruplets:
    for (int i = 0; i < n; i++) {
        // avoid the duplicates while moving i:
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            // avoid the duplicates while moving j:
            if (j > i + 1 && arr[j] == arr[j - 1]) continue;

            // 2 pointers:
            int k = j + 1;
            int l = n - 1;
            while (k < l) {
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if (sum == target) {
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++; l--;

                    //skip the duplicates:
                    while (k < l && arr[k] == arr[k - 1]) k++;
                    while (k < l && arr[l] == arr[l + 1]) l--;
                }
                else if (sum < target) k++;
                else l--;
            }
        }
    }

    if(ans.size()==0)
        return "No";
        else 
        return "Yes";
     
}

