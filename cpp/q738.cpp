//
// Created by Danny Feng on 10/24/24.
//
class Solution {
        public:
        int monotoneIncreasingDigits(int N) {
            string strNum = to_string(N);
            int flag = strNum.size(); // flag for where to assign 9
            for (int i = strNum.size() - 1; i > 0; i--) {
                if (strNum[i - 1] > strNum[i] ) {
                    flag = i;
                    strNum[i - 1]--;
                }
            }
            for (int i = flag; i < strNum.size(); i++) {
                strNum[i] = '9';
            }
            return stoi(strNum);
        }
};
