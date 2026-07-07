/*
 * Problem: 3754. Concatenate Non-Zero Digits and Multiply by Sum I
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/submissions/2059460678/?envType=daily-question&envId=2026-07-07
 * Language: cpp
 * Date: 2026-07-07
 */

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long digit_sum = 0;
        long long multiplier = 1;
        
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                x = digit * multiplier + x;
                digit_sum += digit;
                multiplier *= 10;
            }
            n /= 10;
        }
        
        return x * digit_sum;
    }
};
