/*
 * Problem: 3633. Earliest Finish Time for Land and Water Rides I
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/submissions/2020834569/?envType=daily-question&envId=2026-06-03
 * Language: cpp
 * Date: 2026-06-03
 */

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m= waterStartTime.size();
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int result=max(landStartTime[i]+landDuration[i], waterStartTime[j])+waterDuration[j];
                 ans=min(ans, result);
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int result = max(waterStartTime[i]+waterDuration[i], landStartTime[j])+landDuration[j];
                 
            ans=min(ans,result);
            }
        }
            return ans;
    }
};
