#include <bits/stdc++.h> 
    struct meet{
        int meetingID;
        int startTime;
        int endTime;
    };

    bool compare(struct meet a, struct meet b){
        if(a.endTime==b.endTime){
            return a.meetingID<b.meetingID;

        }
        else{
            return a.endTime<b.endTime;
        }
    }


vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
     int n=start.size();

    struct meet meeting[n]; 
    for (int i = 0; i < n; i++) {
    meeting[i].meetingID=i+1;
    meeting[i].startTime=start[i];
    meeting[i].endTime=end[i];
    }

    sort(meeting,meeting+n,compare);
    vector<int>v;
    v.push_back(meeting[0].meetingID);
    int currentTime = meeting[0].endTime;
  
    for (int i = 1; i < n; i++){
        if(meeting[i].startTime>currentTime){
         v.push_back(meeting[i].meetingID);
         currentTime=meeting[i].endTime;
        }
    }

    return v;
}