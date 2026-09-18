# Power

This time, after travelling into the future, Chef has somehow landed himself in the world of Dragon Ball.

In this world, warriors are assigned power levels. For the sake of argument, a power level can be any value from `2` to infinity.

Chef has been entered as one of Universe 7's members in the Tournament of Power, where there are `N` warriors (including Chef himself) with power levels ranging from `2` to `N + 1`. Each power level is unique to that specific warrior.

In an individual matchup, a warrior with power level `a` can defeat another with power level `b` in two scenarios:

1. `a > b`, and `b` does not divide `a`.
2. `a < b`, and `a` divides `b`.

Given the value of `N`, determine whether there exists a warrior who can defeat every other warrior in the tournament.

## Input Format

- The only line contains a single integer `N`, the number of warriors.

## Constraints

- `2 ≤ N ≤ 10^18`

## Output Format

Print `YES` if there exists a warrior who can defeat every other warrior, and `NO` otherwise.

## Examples

### Example 1

**Input**
```
4
```

**Output**
```
YES
```

### Example 2

**Input**
```
5
```

**Output**
```
NO
```

## Explanation

### Example 1

The warriors have power levels `{2, 3, 4, 5}`. The warrior with power level `5` is larger than every other warrior, and none of `2`, `3`, `4` divides `5`. By the first rule, he defeats all of them, so the answer is `YES`.

### Example 2

The warriors have power levels `{2, 3, 4, 5, 6}`. Every warrior loses to somebody:

- `2` loses to `3` (`3 > 2` and `2` does not divide `3`).
- `3` loses to `4` (`4 > 3` and `3` does not divide `4`).
- `4` loses to `5` (`5 > 4` and `4` does not divide `5`).
- `5` loses to `6` (`6 > 5` and `5` does not divide `6`).
- `6` loses to `2` (`2 < 6` and `2` divides `6`).

No warrior defeats everyone, so the answer is `NO`.