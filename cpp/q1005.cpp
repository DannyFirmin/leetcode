//
// Created by Danny Feng on 10/12/24.
//
class Solution {
    static bool cmp(int a, int b) {
        return abs(a) > abs(b);
    }
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(), A.end(), cmp);
        for (int i = 0; i < A.size(); i++) {
            if (A[i] < 0 && K > 0) {
                A[i] *= -1;
                K--;
            }
        }
        if (K % 2 == 1) A[A.size() - 1] *= -1;
        int result = 0;
        for (int a : A) result += a;
        return result;
    }
};