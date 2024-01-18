/*
2327. Number of People Aware of a Secret
Solved
Medium
Topics
Companies
Hint
On day 1, one person discovers a secret.

You are given an integer delay, which means that each person will share the secret with a new person every day, starting from delay days after discovering the secret. You are also given an integer forget, which means that each person will forget the secret forget days after discovering it. A person cannot share the secret on the same day they forgot it, or on any day afterwards.

Given an integer n, return the number of people who know the secret at the end of day n. Since the answer may be very large, return it modulo 109 + 7.


*/

class Solution {
public:
    long long mod=1e9+7;
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<std::vector<long long >> dp(n + 1, std::vector<long long>(forget + 1, -1));
        return solve(0, 0, n, delay, forget, dp)+1;
    }

    int solve(int i, int d, int n, int delay, int forget, std::vector<std::vector<long long>>& dp) {
        if (d >= n) {
            return 0;
        }

        if (dp[d][i] != -1) {
            return dp[d][i];
        }

        long long& result = dp[d][i];
        result = 0;

        if (i == forget) {
            result -= 1;
        } else if (i >= delay) {
            result=(result + 1)%mod;
            result=(result + solve(1, d + 1, n, delay, forget, dp))%mod;
            result =(result + solve(i + 1, d + 1, n, delay, forget, dp))%mod;
        } else {
            result =(result + solve(i + 1, d + 1, n, delay, forget, dp))%mod;
        }

        return result%mod;
    }
};
