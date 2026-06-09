/*
 * Problem: 933. Number of Recent Calls
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/number-of-recent-calls/submissions/2026988767/
 * Language: cpp
 * Date: 2026-06-09
 */

class RecentCounter {
public:
queue<int>q;

    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        while(!q.empty()&& q.front()<t-3000){
            q.pop();

        }
    return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
