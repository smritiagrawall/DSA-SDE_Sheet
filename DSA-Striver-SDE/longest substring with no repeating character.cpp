#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int n=input.length(),cnt=0,maxi=0,k=0;
    set<int>s;
    while(cnt<n){
        if(s.find(input[cnt])!=s.end()){
            s.erase(input[k]);
            k++;
        }
     else{
         s.insert(input[cnt]);
         cnt++;
     }
     maxi=max(maxi,cnt-k);

    }
    return maxi;
}