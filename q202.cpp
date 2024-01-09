//
// Created by Danny Feng on 1/8/24.
//
#include <iostream>
#include <unordered_set>

class Solution {
public:
    bool isHappy(int n) {
        if (n == 1)
        {
            return true;
        }
        std::vector<int> numbers = intToVector(n);

        while (numbers.size() >= 1)
        {
            int newIntNumber = getSum(numbers);
            if (newIntNumber == 1)
            {
                return true;
            }
            numbers = intToVector(newIntNumber);
        }
        return false;
    }

private:
    std::vector<int> intToVector(int n) {
        std::vector<int> result;
        // Loop the number digit by digit
        while (n > 0)
        {
            int digit = n % 10;
            // Move to the next digit
            n /= 10;
            result.push_back(digit);
        }
        return result;
    }

    int getSum(const std::vector<int>& numbers) {
        int sum = 0;
        for (const auto &num : numbers)
        {
            sum += std::pow(num, 2);
        }
        return sum;
    }
};

int main() {
    Solution solution;

    // Example 1
//    int n1 = 19;
//    std::cout << "Example 1: " << (solution.isHappy(n1) ? "true" : "false") << std::endl;

    // Example 2
    int n2 = 2;
    std::cout << "Example 2: " << (solution.isHappy(n2) ? "true" : "false") << std::endl;

    return 0;
}