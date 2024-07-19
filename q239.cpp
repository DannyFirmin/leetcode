//
// Created by Danny Feng on 7/18/24.
//
class Solution {
private:
    class MyQueue {
    public:
        deque<int> que;  //Monotonic Deque (big to small)
        // check if value to pop is equal to queue front, if yes, pop
        // also check for empty before pop
        void pop(int value) {
            if (!que.empty() && value == que.front()) {
                que.pop_front();
            }
        }
        // if the value to push is bigger than queue back, pop all values after it
        // in order to keep Monotonic deque value from big to small
        void push(int value) {
            while (!que.empty() && value > que.back()) {
                que.pop_back();
            }
            que.push_back(value);

        }
        // max value in the current queue
        int front() {
            return que.front();
        }
    };
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MyQueue que;
        vector<int> result;
        for (int i = 0; i < k; i++) { // add first k element in to the queue
            que.push(nums[i]);
        }
        result.push_back(que.front());
        for (int i = k; i < nums.size(); i++) {
            que.pop(nums[i - k]); // remove front most element in the window
            que.push(nums[i]); // Last added element before next window
            result.push_back(que.front()); // record max
        }
        return result;
    }
};