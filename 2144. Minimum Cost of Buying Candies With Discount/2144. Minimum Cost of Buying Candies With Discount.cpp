/*
 * Problem: 2144. Minimum Cost of Buying Candies With Discount
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/submissions/2018632333/?envType=daily-question&envId=2026-06-01
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        int i=n-1;
        int sum=0;
        sort(cost.begin(), cost.end());
        while(i>=0){
            if(i-1>=0){
            sum+=(cost[i]+cost[i-1]);
            i=i-3;
        }
        else{
           sum=sum+ cost[i];
           i--;

        }
        }
        return sum;
    }
};
