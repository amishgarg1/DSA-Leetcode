/*
 * Problem: 205. Isomorphic Strings
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/isomorphic-strings/submissions/2018708218/
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>mp1;
        unordered_map<char, char>mp2;
        int n=s.size();
        for(int i=0; i<n; i++){
        char ch1=s[i];
        char ch2=t[i];
        if(mp1.count(ch1) && mp1[ch1]!=ch2)
            return false;
        if(mp2.count(ch2) && mp2[ch2]!=ch1)    
            return false;
        mp1[ch1]=ch2;
        mp2[ch2]=ch1;

        }
        return true;
    }
};
