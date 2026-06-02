/*
 * Problem: 455. Assign Cookies
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/assign-cookies/submissions/2019794672/
 * Language: cpp
 * Date: 2026-06-02
 */

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int index=0;
        int count =0;
        while(index<s.size() && count<g.size()){
            if(s[index]>=g[count]){
                count++;
            }
                index++;
        }
        return count;
    }
};
