# 1052. Grumpy Bookstore Owner

**Difficulty:** Medium
**Topics:** `Array` · `Sliding Window`
**Link:** https://leetcode.com/problems/grumpy-bookstore-owner/

> Solved in **1 attempt(s)** (1 submission(s)). Runtime: 0 ms · Memory: 35.9 MB.

## Approach

The algorithm first calculates a base sum of customers who are satisfied regardless of the special ability, i.e., when the owner is not grumpy (`g[i] == 0`). Then, it uses a sliding window of size `k` to find the maximum number of *additional* customers that can be satisfied by using the special ability. This involves summing `c[i]` for `g[i] == 1` within each `k`-minute window. The final answer is the sum of the base satisfied customers and the maximum additional customers found by the sliding window.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Mistakes I made

_None — solved cleanly._

## Solution

[`solution.cpp`](./solution.cpp) (cpp)
