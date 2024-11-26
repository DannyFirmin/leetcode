//
// Created by Danny Feng on 11/25/24.
//
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> st;
        vector<int> result(T.size(), 0);
        st.push(0);
        for (int i = 1; i < T.size(); i++) {
            if (T[i] < T[st.top()]) {
                st.push(i);
            } else if (T[i] == T[st.top()]) {
                st.push(i);
            } else {
                while (!st.empty() && T[i] > T[st.top()]) {
                    result[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
        return result;
    }
};