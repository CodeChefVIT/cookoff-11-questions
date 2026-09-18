# Join My Crew!

Chef's most recent escapade didn't just throw him through time this time, but into a different dimension, and he has now become the eleventh member of Monkey D. Luffy's Straw Hat Pirates.

Chef has found two treasure chests. The first belongs to Luffy, and contains `x` gold coins. The second belongs to Chef himself, and contains `y` gold coins.

For good measure, Chef found a Devil Fruit, and, not knowing what else to do with it, he ate it. This has given him an ability that can be cast on the two chests, merging them into one and producing a new total value of coins `z`, determined bit by bit as follows: the `i`-th bit of `z` is `1` if and only if the `i`-th bits of `x` and `y` are unequal; otherwise the `i`-th bit of `z` is `0`. (In other words, `z = x XOR y`.)

Before using the ability, Chef may move treasure from Luffy's chest to his own. In one operation, Chef takes exactly one gold coin from Luffy's chest and places it in his own. Chef cannot perform such an operation if Luffy's chest is empty.

Chef wants the resulting value `z` to be as large as possible. However, among all ways of achieving this maximum value, he wants to use the minimum possible number of operations.

For each pair of initial chest contents `x` and `y`, determine the maximum value Chef can produce, and the minimum number of operations required to obtain that value.

## Input Format

The first line contains a single integer `T`, the number of test cases.

Each of the next `T` lines contains two space-separated integers `x` and `y` — the initial contents of Luffy's chest and Chef's chest respectively.

## Constraints

- `1 ≤ T ≤ 10^5`
- `0 ≤ x, y ≤ 2^29`

## Output Format

For each test case, print two space-separated integers on a new line — the maximum value `z` Chef can produce, and the minimum number of operations required to achieve it.

## Examples

### Example 1

**Input**
```text
4
1 1
5 3
0 5
10 10
```

**Output**
```text
2 1
8 5
5 0
20 6
```

## Explanation

Consider the last test case, `x = 10, y = 10`.

Chef tries moving `k` coins from Luffy's chest to his own, for various values of `k`:

- `k = 0`: chests hold `10` and `10`, giving `z = 10 XOR 10 = 0`.
- `k = 6`: chests hold `4` and `16`, giving `z = 4 XOR 16 = 20`.
- `k = 10`: chests hold `0` and `20`, giving `z = 0 XOR 20 = 20`.

Both `k = 6` and `k = 10` achieve the maximum possible value of `20`, but `k = 6` uses fewer operations. So the answer is `20 6`.

In the third test case, Luffy's chest starts empty, so Chef can perform no operations at all — the answer is simply `x XOR y` at `0` operations.