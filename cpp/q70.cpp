//
// Created by Danny Feng on 3/1/24.
//
#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n) {
    if (n == 1) return 1;

    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

//int climbStairs(int n) {
//    int p = 0, q = 0, r = 1;
//    for (int i = 1; i <= n; ++i) {
//        p = q;
//        q = r;
//        r = p + q;
//    }
//    return r;
//}

// Main function for running test cases
int main() {
    // Test cases
    int n1 = 2;
    cout << "For n = " << n1 << ", ways to climb: " << climbStairs(n1) << endl;

    int n2 = 3;
    cout << "For n = " << n2 << ", ways to climb: " << climbStairs(n2) << endl;

    int n3 = 5;
    cout << "For n = " << n3 << ", ways to climb: " << climbStairs(n3) << endl;

    int n4 = 10;
    cout << "For n = " << n4 << ", ways to climb: " << climbStairs(n4) << endl;

    return 0;
}
