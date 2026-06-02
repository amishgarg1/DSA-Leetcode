/*
 * Problem: 506. Relative Ranks
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/relative-ranks/submissions/2019692782/
 * Language: cpp
 * Date: 2026-06-02
 */

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n =score.size();
        vector<int> arr=score;
        unordered_map<int, string>mp; 
        sort(arr.rbegin(), arr.rend());
        for(int i=0; i<n; i++){
            if(i==0){
                mp[arr[i]]="Gold Medal";
            }
            else if(i==1){
                mp[arr[i]]="Silver Medal";
            }
            else if(i==2){
                mp[arr[i]]="Bronze Medal";
            }else{
                mp[arr[i]]= to_string(i+1);
            }
        }
        vector<string> ans;
        for(auto i:score){
            ans.push_back(mp[i]);
        }
        return ans;
        
        
    }
};
