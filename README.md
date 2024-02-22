# LeetCode Practice

I will be solving one LeetCode questions every day for fun 😊

## Log
| Day (MM/DD/YY) | LeetCode Problem No. | Title                              | Category            | Difficulty | Language | Time complexity                                                          | Space complexity | Notes                                                                    | Time spent (min) | My solution result  | File                         |
|----------------|----------------------|------------------------------------|---------------------|------------|----------|--------------------------------------------------------------------------|------------------|--------------------------------------------------------------------------|------------------|---------------------|------------------------------|
| 09/11/23       | 88                   | Merge Sorted Array                 | Array / String      | Easy       | C++      | O(m+n)                                                                   | O(m+n+max(m,n))  | Using two pointers. Careful with index out of bound                      | 60               | Accepted            | [q88.cpp](q88.cpp)           |
| 09/12/23       | 125                  | Valid Palindrome                   | Two Pointers        | Easy       | C++      | O(n)                                                                     | O(n)             | Still two pointers. Need to know some language build-in string functions | 20               | Accepted            | [q125.cpp](q125.cpp)         |
| 09/13/23       | 209                  | Minimum Size Subarray Sum          | Sliding Window      | Medium     | C++      | O(n + (n-1) + (n-2) + ... + (n-n) ) which is (n^2 + n) / 2. Thus, O(n^2) | O(n)             | Seems LeetCode is not happy with my  =O(n^2) solution                    | 50               | Time Limit Exceeded | [q209.cpp](q209.cpp)         |
| 09/23/23       | 209                  | Minimum Size Subarray Sum          | Sliding Window      | Medium     | C++      | O(n)                                                                     | O(1)             | LeetCode solution                                                        | 30               | NA                  | [q209-2.cpp](q209-2.cpp)     |
| 09/25/23       | 36                   | Valid Sudoku                       | Matrix              | Medium     | C++      | O(n)                                                                     | O(n)             | Ideas from LeetCode solution                                             | 30               | Accepted            | [q36.cpp](q36.cpp)           |
| 09/28/23       | 383                  | Ransom Note                        | Hashmap             | Easy       | C++      | O(m+n)                                                                   | O(1)             | Easy if you can think of using hashmap                                   | 20               | Accepted            | [q383.cpp](q383.cpp)         |
| 10/11/23       | 228                  | Summary Ranges                     | Intervals           | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          | 30               | Accepted            | [q228.cpp](q228.cpp)         |
| 01/08/24       | 202                  | Happy Number                       | Hashmap             | Easy       | C++      | O(logn)                                                                  | O(n)             | Should come up with hashset to check for cycle                           | 60               | Wrong Answer        | [q202.cpp](q202.cpp)         |
| 01/09/24       | 20                   | Valid Parentheses                  | Stack               | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          | 30               | Accepted            | [q20.cpp](q20.cpp)           |
| 01/09/24       | 141                  | Linked List Cycle                  | Linked List         | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          | 15               | Accepted            | [q141.cpp](q141.cpp)         |
| 01/10/24       | 104                  | Maximum Depth of Binary Tree       | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(logn)          |                                                                          | 15               | Accepted            | [q104.cpp](q104.cpp)         |
| 01/10/24       | 100                  | Same Tree                          | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          | 15               | Accepted            | [q100.cpp](q100.cpp)         |
| 01/11/24       | 226                  | Invert Binary Tree                 | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          | 15               | Accepted            | [q226.cpp](q226.cpp)         |
| 01/25/24       | 21                   | Merge Two Sorted Lists             | Linked List         | Easy       | C++      | O(m+n)                                                                   | O(1)             |                                                                          | 30               |                     | [q21.cpp](q21.cpp)           |
| 01/27/24       | 199                  | Binary Tree Right Side View        | Binary Tree BFS     | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q199.cpp](q199.cpp)         |
| 01/28/24       | 94                   | Binary Tree Inorder Traversal      |                     | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q94.cpp](q94.cpp)           |
| 01/28/24       | 530/783              | Minimum Distance Between BST Nodes | Binary Search Tree  | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q530,783.cpp](q530,783.cpp) |
| 02/20/24       | 200                  | Number of Islands                  | Graph General       | Medium     | C++      | O(m*n)                                                                   | O(m*n)           |                                                                          |                  |                     | [q200.cpp](q200.cpp)         |
| 02/21/24       | 909                  | Snakes and Ladders                 | Graph BFS           | Medium     | C++      | O(n^2)                                                                   | O(n^2)           |                                                                          |                  |                     | [q909.cpp](q909.cpp)         |