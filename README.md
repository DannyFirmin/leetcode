# LeetCode Practice

I'm solving LeetCode questions every day for fun 😊

## Log
| Day (MM/DD/YY) | LeetCode Problem No. | Title                                              | Category            | Difficulty | Language | Time complexity                                                          | Space complexity | Notes                                                                    | Time spent (min) | My solution result  | File                         |
|----------------|----------------------|----------------------------------------------------|---------------------|------------|----------|--------------------------------------------------------------------------|------------------|--------------------------------------------------------------------------|------------------|---------------------|------------------------------|
| 09/11/23       | 88                   | Merge Sorted Array                                 | Array / String      | Easy       | C++      | O(m+n)                                                                   | O(m+n+max(m,n))  | Using two pointers. Careful with index out of bound                      | 60               | Accepted            | [q88.cpp](q88.cpp)           |
| 09/12/23       | 125                  | Valid Palindrome                                   | Two Pointers        | Easy       | C++      | O(n)                                                                     | O(n)             | Still two pointers. Need to know some language build-in string functions | 20               | Accepted            | [q125.cpp](q125.cpp)         |
| 09/13/23       | 209                  | Minimum Size Subarray Sum                          | Sliding Window      | Medium     | C++      | O(n + (n-1) + (n-2) + ... + (n-n) ) which is (n^2 + n) / 2. Thus, O(n^2) | O(n)             | Seems LeetCode is not happy with my  =O(n^2) solution                    | 50               | Time Limit Exceeded | [q209.cpp](q209.cpp)         |
| 09/23/23       | 209                  | Minimum Size Subarray Sum                          | Sliding Window      | Medium     | C++      | O(n)                                                                     | O(1)             | LeetCode solution                                                        | 30               | NA                  | [q209-2.cpp](q209-2.cpp)     |
| 09/25/23       | 36                   | Valid Sudoku                                       | Matrix              | Medium     | C++      | O(n)                                                                     | O(n)             | Ideas from LeetCode solution                                             | 30               | Accepted            | [q36.cpp](q36.cpp)           |
| 09/28/23       | 383                  | Ransom Note                                        | Hashmap             | Easy       | C++      | O(m+n)                                                                   | O(1)             | Easy if you can think of using hashmap                                   | 20               | Accepted            | [q383.cpp](q383.cpp)         |
| 10/11/23       | 228                  | Summary Ranges                                     | Intervals           | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          | 30               | Accepted            | [q228.cpp](q228.cpp)         |
| 01/08/24       | 202                  | Happy Number                                       | Hashmap             | Easy       | C++      | O(logn)                                                                  | O(n)             | Should come up with hashset to check for cycle                           | 60               | Wrong Answer        | [q202.cpp](q202.cpp)         |
| 01/09/24       | 20                   | Valid Parentheses                                  | Stack               | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          | 30               | Accepted            | [q20.cpp](q20.cpp)           |
| 01/09/24       | 141                  | Linked List Cycle                                  | Linked List         | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          | 15               | Accepted            | [q141.cpp](q141.cpp)         |
| 01/10/24       | 104                  | Maximum Depth of Binary Tree                       | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(logn)          |                                                                          | 15               | Accepted            | [q104.cpp](q104.cpp)         |
| 01/10/24       | 100                  | Same Tree                                          | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          | 15               | Accepted            | [q100.cpp](q100.cpp)         |
| 01/11/24       | 226                  | Invert Binary Tree                                 | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          | 15               | Accepted            | [q226.cpp](q226.cpp)         |
| 01/25/24       | 21                   | Merge Two Sorted Lists                             | Linked List         | Easy       | C++      | O(m+n)                                                                   | O(1)             |                                                                          | 30               |                     | [q21.cpp](q21.cpp)           |
| 01/27/24       | 199                  | Binary Tree Right Side View                        | Binary Tree BFS     | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q199.cpp](q199.cpp)         |
| 01/28/24       | 94                   | Binary Tree Inorder Traversal                      |                     | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q94.cpp](q94.cpp)           |
| 01/28/24       | 530/783              | Minimum Distance Between BST Nodes                 | Binary Search Tree  | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q530,783.cpp](q530,783.cpp) |
| 02/20/24       | 200                  | Number of Islands                                  | Graph General       | Medium     | C++      | O(m*n)                                                                   | O(m*n)           |                                                                          |                  |                     | [q200.cpp](q200.cpp)         |
| 02/21/24       | 909                  | Snakes and Ladders                                 | Graph BFS           | Medium     | C++      | O(n^2)                                                                   | O(n^2)           |                                                                          |                  |                     | [q909.cpp](q909.cpp)         |
| 02/22/24       | 208                  | Implement Trie (Prefix Tree)                       | Trie                | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q208.cpp](q208.cpp)         |
| 02/23/24       | 17                   | Letter Combinations of a Phone Number              | Backtracking        | Medium     | C++      | O(3^m×4^n)                                                               | O(m+n)           |                                                                          |                  |                     | [q17.cpp](q17.cpp)           |
| 02/24/24       | 108                  | Convert Sorted Array to Binary Search Tree         | Divide & Conquer    | Easy       | C++      | O(n)                                                                     | O(logn)          |                                                                          |                  |                     | [q108.cpp](q108.cpp)         |
| 02/25/24       | 53                   | Maximum Subarray                                   | Kadane's Algorithm  | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q53.cpp](q53.cpp)           |
| 02/26/24       | 35                   | Search Insert Position                             | Binary Search       | Easy       | C++      | O(n)                                                                     | O(1)             | Should use binary search to make it O(logn)                              | 5                | Accepted            | [q35.cpp](q35.cpp)           |
| 02/27/24       | 215                  | Kth Largest Element in an Array                    | Heap                | Medium     | C++      | O(nlogk)                                                                 | O(k)             |                                                                          |                  |                     | [q215.cpp](q215.cpp)         |
| 02/28/24       | 67                   | Add Binary                                         | Bit Manipulation    | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q67.cpp](q67.cpp)           |
| 02/29/24       | 9                    | Palindrome Number                                  | Math                | Easy       | C++      | O(logn)                                                                  | O(1)             |                                                                          |                  |                     | [q9.cpp](q9.cpp)             |
| 03/01/24       | 9                    | Climbing Stairs                                    | DP                  | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q70.cpp](q70.cpp)           |
| 03/02/24       | 120                  | Triangle                                           | Multidimensional DP | Medium     | C++      | O(n^2)                                                                   | O(1)             |                                                                          |                  |                     | [q120.cpp](q120.cpp)         |
| 05/13/24       | 704                  | Binary Search                                      | Array               | Easy       | C++      | O(logn)                                                                  | O(1)             |                                                                          |                  |                     | [q704.cpp](q704.cpp)         |
| 05/14/24       | 27                   | Remove Element                                     | Array               | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q27.cpp](q27.cpp)           |
| 05/15/24       | 977                  | Squares of a Sorted Array                          | Array               | Easy       | C++      | O(nlogn)                                                                 | O(logn)          |                                                                          | 5                | Accepted            | [q977.cpp](q977.cpp)         |
| 05/17/24       | 59                   | Spiral Matrix II                                   | Array               | Medium     | C++      | O(n^2)                                                                   | O(1)             |                                                                          |                  |                     | [q59.cpp](q59.cpp)           |
| 05/18/24       | 203                  | Remove Linked List Elements                        | Linked List         | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          | 20               | Accepted            | [q203.cpp](q203.cpp)         |
| 05/19/24       | 707                  | Design Linked List                                 | Linked List         | Medium     | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q707.cpp](q707.cpp)         |
| 05/21/24       | 206                  | Reverse Linked List                                | Linked List         | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          | 25               | Accepted            | [q206.cpp](q206.cpp)         |
| 05/23/24       | 24                   | Swap Nodes in Pairs                                | Linked List         | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q24.cpp](q24.cpp)           |
| 05/24/24       | 19                   | Remove Nth Node From End of List                   | Linked List         | Medium     | C++      | O(n)                                                                     | O(1)             |                                                                          | 20               | Accepted            | [q19.cpp](q19.cpp)           |
| 05/27/24       | 160                  | Intersection of Two Linked Lists                   | Linked List         | Medium     | C++      | O(n+m)                                                                   | O(1)             |                                                                          |                  |                     | [q160.cpp](q160.cpp)         |
| 05/28/24       | 142                  | Linked List Cycle II                               | Linked List         | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q142.cpp](q142.cpp)         |
| 05/29/24       | 242                  | Valid Anagram                                      | Hash                | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q242.cpp](q242.cpp)         |
| 05/30/24       | 349                  | Intersection of Two Arrays                         | Hash                | Easy       | C++      | O(n+m)                                                                   | O(n)             |                                                                          |                  |                     | [q349.cpp](q349.cpp)         |
| 05/30/24       | 1                    | Two Sum                                            | Hash                | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q1.cpp](q1.cpp)             |
| 05/31/24       | 454                  | 4Sum II                                            | Hash                | Medium     | C++      | O(n^2)                                                                   | O(n^2)           |                                                                          |                  |                     | [q454.cpp](q454.cpp)         |
| 06/02/24       | 15                   | 4Sum                                               | Hash                | Medium     | C++      | O(n^2)                                                                   | O(1)             |                                                                          |                  |                     | [q15.cpp](q15.cpp)           |
| 06/03/24       | 18                   | 3Sum                                               | Hash                | Medium     | C++      | O(n^3)                                                                   | O(1)             |                                                                          |                  |                     | [q18.cpp](q18.cpp)           |
| 06/04/24       | 344                  | Reverse String                                     | String              | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          | 5                | Accepted            | [q344.cpp](q344.cpp)         |
| 06/05/24       | 541                  | Reverse String II                                  | String              | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q541.cpp](q541.cpp)         |
| 06/06/24       | 151                  | Reverse Words in a String                          | String              | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q151.cpp](q151.cpp)         |
| 07/12/24       | 28                   | Find the Index of the First Occurrence in a String | String              | Easy       | C++      | O(n+m)                                                                   | O(m)             |                                                                          |                  |                     | [q28.cpp](q28.cpp)           |
| 07/12/24       | 459                  | Repeated Substring Pattern                         | String              | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q459.cpp](q459.cpp)         |
| 07/14/24       | 232                  | Implement Queue using Stacks                       | Stack and Queue     | Easy       | C++      | O(n) for pop, peek, O(1) for push, empty                                 | O(n)             |                                                                          |                  |                     | [q232.cpp](q232.cpp)         |
| 07/15/24       | 225                  | Implement Stack using Queues                       | Stack and Queue     | Easy       | C++      | O(n) for pop, peek, O(1) for others                                      | O(n)             |                                                                          |                  |                     | [q225.cpp](q225.cpp)         |
| 07/16/24       | 1047                 | Remove All Adjacent Duplicates In String           | Stack and Queue     | Easy       | C++      | O(n)                                                                     | O(1)             |                                                                          |                  |                     | [q1047.cpp](q1047.cpp)       |
| 07/17/24       | 150                  | Evaluate Reverse Polish Notation                   | Stack and Queue     | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q150.cpp](q150.cpp)         |
| 07/18/24       | 239                  | Sliding Window Maximum                             | Stack and Queue     | Hard       | C++      | O(n)                                                                     | O(k)             |                                                                          |                  |                     | [q239.cpp](q239.cpp)         |
| 07/19/24       | 347                  | Top K Frequent Elements                            | Stack and Queue     | Medium     | C++      | O(nlogk)                                                                 | O(n)             |                                                                          |                  |                     | [q347.cpp](q347.cpp)         |
| 07/20/24       | 144                  | Binary Tree Preorder Traversal                     | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q144.cpp](q144.cpp)         |
| 07/21/24       | 145                  | Binary Tree Postorder Traversal                    | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q145.cpp](q145.cpp)         |
| 07/24/24       | 102                  | Binary Tree Level Order Traversal                  | Binary Tree General | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q102.cpp](q102.cpp)         |
| 07/25/24       | 107                  | Binary Tree Level Order Traversal II               | Binary Tree General | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q107.cpp](q107.cpp)         |
| 07/27/24       | 637                  | Average of Levels in Binary Tree                   | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q637.cpp](q637.cpp)         |
| 07/28/24       | 429                  | N-ary Tree Level Order Traversal                   | Binary Tree General | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q429.cpp](q429.cpp)         |
| 07/29/24       | 515                  | Find Largest Value in Each Tree Row                | Binary Tree General | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q515.cpp](q515.cpp)         |
| 07/30/24       | 116/117              | Populating Next Right Pointers in Each Node        | Binary Tree General | Medium     | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q116,117.cpp](q116,117.cpp) |
| 07/31/24       | 111                  | Minimum Depth of Binary Tree                       | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q111.cpp](q111.cpp)         |
| 08/05/24       | 101                  | Symmetric Tree                                     | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [q101.cpp](q101.cpp)         |
| 08/10/24       | 559                  | Maximum Depth of N-ary Tree                        | Binary Tree General | Easy       | C++      | O(n)                                                                     | O(n)             |                                                                          |                  |                     | [559.cpp](559.cpp)         |
| 08/12/24       | 111                  | Count Complete Tree Nodes                          | Binary Tree General | Easy       | C++      | O(logn x logn)                                                           | O(logn)          |                                                                          |                  |                     | [222.cpp](222.cpp)         |