# Chain My Heart

Chef has somehow landed up on the lands of Sir Henry Percy, the first Earl of Northumberland. History remembers Sir Henry as quite a cruel man, and rightly so, for Chef is promptly caught and thrown in the nearest dungeon to await execution. The guards restrain him with a long chain. As Chef inspects the links of the chain, he realises that each link is numbered as per the order produced by Earl's blacksmith. Further investigation reveals that if he can spot the longest consecutive sequence of production numbers in the chain, applying pressure on all of them at once will break the chain apart, allowing him to escape. Assume that Chef is physically capable of breaking the chain as such, and that the production numbers are given in an array `arr[i]`. Identify the length of this longest consecutive sequence.

Chef has to survey several chains, so you must answer this for multiple independent test cases.

## Input Format

- The first line contains a single integer `t`, the number of test cases.
- Each test case consists of two lines:
  - The first line contains a single integer `n`, the number of links in the chain.
  - The second line contains `n` space-separated integers `arr[1], arr[2], ..., arr[n]`, the production numbers of the links.

## Constraints

- `1 ≤ t ≤ 10^4`
- `1 ≤ n ≤ 10^5`
- The sum of `n` over all test cases does not exceed `10^5`.
- `1 ≤ arr[i] ≤ 10^9`
- Production numbers may repeat.

## Output Format

For each test case, print a single integer on its own line — the length of the longest sequence of *consecutive* production numbers present in the chain (order of appearance in the array does not matter).

## Examples

### Example 1

**Input**
```text
4
6
100 4 200 1 3 2
10
9 1 4 7 3 2 6 8 5 10
7
1 2 2 3 4 4 5
5
10 30 50 70 90
```

**Output**
```text
4
10
5
1
```

## Explanation

### Test case 1

The production numbers `1, 2, 3, 4` all appear in the chain, forming a consecutive run of length `4`. The values `100` and `200` are isolated, so the answer is `4`.

### Test case 2

The array is a permutation of `1` to `10`, so every number from `1` to `10` is present and the whole chain is one consecutive run of length `10`.

### Test case 3

Repeated numbers are counted only once. The distinct production numbers are `{1, 2, 3, 4, 5}`, which form a consecutive run of length `5`.

### Test case 4

No two links differ in production number by exactly `1` — every pair differs by at least `20`. So no chain of consecutive numbers longer than a single link exists.

The longest consecutive run Chef can find has length `1`, so pressing on any single link is the best he can do — though it won't actually break anything.