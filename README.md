# Leetcode
A repo containing daily leetcode challenge solutions

## 10 Golden rules which I observed to solve any problem
### Heuristic 1:
If we are dealing with **top/maximum/minimum/closest** 'K' elements among 'N' elements, we will be using a **Heap**

### Heuristic 2:
If the given input is a **sorted array** or a list, we will either be using **Binary Search** or the **Two pointers** strategy.

### Heuristic 3:
If we need to try all the **combinations**(or permutations) of the input, we can either use **Backtracking** or **Breadth First Search**.

### Heuristic 4:
Most of the questions related to **Trees** or **Graphs** can be solved either through **Breadth First Search** or **Depth First Search**.

### Heuristic 5:
Every **recursive** solution can be converted to an **iterative** solution using a **Stack**.

### Heuristic 6:
For the problem involving arrays, if there exists a solution in **O(n^2) time** and **O(1) space**, there must exist two other solutions: 1) Using a **Hashmap** or a **Set** for **O(n) time** and **O(n) Space**, 2) Using **sorting** for **O(nlogn) time** and **O(1) space**.

### Heuristic 7:
If a problem is asking for **optimization**(eg maximization or minimization), we will be using **Dynamic Programming**.

### Heuristic 8:
If we need to find some common **substring** among a set of strings, we will be using a **Hashmap** or a **Trie**.

### Heuristic 9:
If we need to **search/manipulate** a bunch of strings, **Trie** will be the best data structure.

### Heuristic 10:
If the problem is related to a **LinkedList** and we can't use extra space, then use the **Fast and Slow Pointer** approach.
