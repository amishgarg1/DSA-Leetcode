/*
 * Problem: 3. Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/2042478146/
 * Language: cpp
 * Date: 2026-06-22
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left=0;
        int maxlen=0;
        for(int right=0; right<s.size(); right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxlen=max(maxlen, right-left+1);
        }
        return maxlen;
    }
};
