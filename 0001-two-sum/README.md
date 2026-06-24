# 1. Two Sum

**Difficulty:** Easy
**Topics:** `Array` · `Hash Table`
**Link:** https://leetcode.com/problems/two-sum/

> Solved in **2 attempt(s)** (1 submission(s)). Runtime: 3 ms · Memory: 11 MB.

## Approach

This solution uses a hash map to efficiently find the complement of each number. It iterates through the array, and for each number, it checks if its complement (target - current_number) is already present in the hash map. If found, it returns the indices of the complement and the current number. If not, it adds the current number and its index to the map for future lookups.

## Complexity

- **Time:** O(n)
- **Space:** O(n)

## Mistakes I made

- Used an incorrect loop condition (i<=n.size()) which caused an out-of-bounds access (heap-buffer-overflow) when trying to access n[n.size()] instead of n[n.size()-1].

## Solution

[`solution.cpp`](./solution.cpp) (cpp)

<details>
<summary>Raw attempt log</summary>

- `1970-01-01T00:00:00.001Z` [run] **Runtime Error** — Runtime error: heap-buffer-overflow: loop used i<=n.size()

</details>
