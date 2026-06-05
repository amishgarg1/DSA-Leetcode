/*
 * Problem: 20. Valid Parentheses
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/valid-parentheses/description/
 * Language: cpp
 * Date: 2026-06-05
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
            if((ch==')' && st.top()=='(') || 
            (ch=='}' && st.top()=='{') || 
            (ch==']' && st.top()=='[')){
                st.pop();
            }else{
                return false;
            }
        }
        }
        return st.empty();
    }
};
