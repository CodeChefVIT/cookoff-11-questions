# Dark Horse 

In Cleopatra's Egypt, around 32 B.C., Chef is having a conversation with a priest. He has laid out a row of sacred stones before him, and must escape the chamber by leaping across them. Each stone bears an inscription indicating how far Chef may leap forward from it. Starting at the first stone, Chef wants to know whether he can reach the final stone and escape. Help Chef perform this task.

Formally, Chef is given an array `arr` of `n` sacred stones, indexed `0` to `n-1`. Chef begins standing on stone `0`. From stone `i`, Chef may leap forward to land on any stone `j` such that `i < j ≤ i + arr[i]` (he cannot leap backward, and cannot leap past the last stone). Determine whether Chef can reach stone `n-1` starting from stone `0`.

## Input Format

- The first line contains a single integer `T`, the number of test cases.
- For each test case:
  - The first line contains a single integer `n`, the number of stones.
  - The second line contains `n` space-separated integers `arr[0], arr[1], ..., arr[n-1]`, where `arr[i]` is the maximum number of stones Chef may leap forward from stone `i`.

## Constraints

- `1 ≤ T ≤ 100`
- `1 ≤ n ≤ 10^5`
- `0 ≤ arr[i] ≤ 10^5`
- The sum of `n` over all test cases does not exceed `10^6`

## Output Format

For each test case, print `YES` if Chef can reach stone `n-1` starting from stone `0`, and `NO` otherwise.

## Examples

### Example 1

**Input**
```
3
5
2 3 1 1 4
5
3 2 1 0 4
1
0
```

**Output**
```
YES
NO
YES
```

## Explanation

### Example 1

**Test Case 1:** Chef can leap `0 -> 1 -> 4` (a leap of `1` from stone `0` to stone `1`, since `arr[0] = 2` allows it, followed by a leap of `3` from stone `1` to stone `4`, since `arr[1] = 3` allows it). Chef reaches the final stone, so the answer is `YES`.

**Test Case 2:** No matter how Chef leaps, he gets stuck at stone `3`, since `arr[3] = 0` means he cannot leap any further, and no earlier stone offers a large enough leap to skip over stone `3` and reach stone `4`. The answer is `NO`.

**Test Case 3:** There is only one stone (`n = 1`), and Chef is already standing on it, which is also the last stone. The answer is `YES`.