# Price Tag

Chef has found himself in 5th century India, in the court of the local ruler, who is an extremely wealthy person. Chef has successfully impressed the ruler with the quality of his cooking, and is now due to receive a reward. He is taken to a chessboard of effectively infinite size, where the ruler places one gold coin on the first square (a1), two on the second (b1), four on c1, and so on. Assume that each square can fit the required number of coins. Given an integer `n`, can you determine whether that is the number of coins placed on some square on the board?

## Input Format

- The first line contains a single integer `T`, the number of test cases.
- For each test case:
  - A single line contains a single integer `n`.

## Constraints

- `1 ≤ T ≤ 10^5`
- `1 ≤ n ≤ 10^18`

## Output Format

For each test case, print `YES` if `n` is the number of coins placed on some square on the board, and `NO` otherwise.

## Examples

### Example 1

**Input**
```
5
1
8
10
1024
1000000000000000000
```

**Output**
```
YES
YES
NO
YES
NO
```

## Explanation

### Example 1

**Test Case 1:** The first square (`a1`) holds `1` coin. Since `n = 1` matches this, the answer is `YES`.

**Test Case 2:** The fourth square holds `1 -> 2 -> 4 -> 8` coins. Since `n = 8` matches the fourth square, the answer is `YES`.

**Test Case 3:** The squares hold `1, 2, 4, 8, 16, ...` coins — powers of `2`. Since `10` is not a power of `2`, the answer is `NO`.

**Test Case 4:** `1024 = 2^10`, which is the number of coins on some square further down the board. The answer is `YES`.

**Test Case 5:** `10^18` is not a power of `2` (the nearest powers of `2` are `2^59 = 576460752303423488` and `2^60 = 1152921504606846976`), so the answer is `NO`.