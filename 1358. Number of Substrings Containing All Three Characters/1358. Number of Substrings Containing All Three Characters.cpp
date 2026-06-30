/*
 * Problem: 1358. Number of Substrings Containing All Three Characters
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/submissions/2051413695/?envType=daily-question&envId=2026-06-30
 * Language: cpp
 * Date: 2026-06-30
 */

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> freq(3, 0);

        int left = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {
            freq[s[right] - 'a']++;

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                ans += n - right;
                freq[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};
