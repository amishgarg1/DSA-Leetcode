/*
 * Problem: 71. Simplify Path
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/simplify-path/submissions/2024363859/
 * Language: cpp
 * Date: 2026-06-06
 */

class Solution {
public:
    string simplifyPath(string path) {

        vector<string> st;
        string temp = "";

        for (int i = 0; i <= path.size(); i++) {

            // Process when '/' comes OR string ends
            if (i == path.size() || path[i] == '/') {

                if (temp == "" || temp == ".") {
                    // Ignore
                }
                else if (temp == "..") {

                    if (!st.empty())
                        st.pop_back();
                }
                else {
                    st.push_back(temp);
                }

                temp = "";
            }
            else {
                temp += path[i];
            }
        }

        string ans = "";

        for (string dir : st) {
            ans += "/" + dir;
        }

        return ans.empty() ? "/" : ans;
    }
};
