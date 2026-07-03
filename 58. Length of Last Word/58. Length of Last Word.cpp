/*
 * Problem: 58. Length of Last Word
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/length-of-last-word/submissions/2054935701/
 * Language: cpp
 * Date: 2026-07-03
 */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};
