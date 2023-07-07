#include <bits/stdc++.h> 

bool compare(pair<int, int> a, pair<int, int> b){
    double r1=(double)a.second/a.first;
    double r2=(double)b.second/b.first;
    return r1>r2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),compare);
    double finalvalue=0.0;
    int currweight=0;

    for(int i=0;i<n;i++){
        if(currweight+items[i].first<=w){
            currweight+=items[i].first;
            finalvalue+=items[i].second;
        }
        else{
            int rem = w-currweight;
            finalvalue+=(items[i].second/(double)items[i].first)*(double)rem;
            break;
        }
    }
    return finalvalue;
}