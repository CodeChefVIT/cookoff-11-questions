# The Inspector

Back in the present, Chef has found himself in a spot of trouble. His arch-nemesis, the Health Inspector, has arrived! There is an even number of ingredient types on the table for inspection. Each ingredient can have more than one unit. Chef will take all units (the whole pile) of either the left-most or the right-most ingredient off the table, and the Inspector does the same. Chef will pass the inspection if by the end, he has hidden strictly more units than the Inspector has managed to take. Chef will never take the same number of units as the Inspector, because the total number of units is guaranteed to be odd. Given an array `arr` where `arr[i]` is the number of units of the `i`-th index ingredient, and `arr`'s order is the order in which ingredients are presented on the table, can you determine whether Chef can pass by removing ingredients optimally, given that the Inspector too will play optimally to try and fail Chef?

## Input Format

- The first line contains a single integer `T`, the number of test cases.
- For each test case:
  - The first line contains a single integer `n`, the number of ingredient types.
  - The second line contains `n` space-separated integers `arr[0], arr[1], ..., arr[n-1]`, the number of units of each ingredient.

## Constraints

- `1 ≤ T ≤ 1000`
- `2 ≤ n ≤ 10^5`
- `n` is always even
- `1 ≤ arr[i] ≤ 10^6`
- The sum of `arr[i]` over all ingredients in a test case is always odd
- The sum of `n` over all test cases does not exceed `2000`

## Output Format

For each test case, print `YES` if Chef can pass the inspection by playing optimally, and `NO` otherwise.

## Examples

### Example 1

**Input**
```
3
2
3 4
4
5 3 7 2
6
1 9 2 8 3 6
```

**Output**
```
YES
YES
YES
```

### Example 2

**Input**
```
2
2
1000000 1
4
1 1 1 1000000
```

**Output**
```
YES
YES
```

## Explanation

### Example 1

**Test Case 1:** Chef takes `4` (right end), Inspector is forced to take `3`. Chef hides `4 > 3`, so Chef passes.

**Test Case 2:** No matter which end Chef picks first, Chef can always steer the game to end up with a strictly larger share of the total units than the Inspector, since he moves first and the total is odd.

**Test Case 3:** Same reasoning applies regardless of array length or arrangement — Chef, moving first on an array of even length, can always guarantee at least half the total units, and since the total is odd, "at least half" becomes "strictly more than half."