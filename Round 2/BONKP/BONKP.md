# Bon Appétit

Chef is back in the present, though only for the time being. He's now found himself at a traditional Indian wedding, and he is having a wonderful time. There are two main courses being served:

- A **mutton** dish, which gives Chef `a` units of fullness.
- A **prawn** dish, which gives Chef `b` units of fullness.

Chef can eat either dish any number of times, in any order.

However, Chef has a maximum fullness level of `t`. His fullness can never exceed `t`.

At any point during the meal, Chef may ask Chefina for an **antacid**. The antacid halves his current fullness, using floor division. In other words, if Chef currently has `f` units of fullness, taking an antacid changes his fullness to:

`floor(f / 2)`

Chef may take the antacid exactly once.

(In an ideal world, we'd have told Chef not to overeat in the first place, but given the horrors he's been through today, you've got to feel for the man!)

Whenever Chef eats a dish, his fullness must not exceed `t` after eating it. Taking an antacid can always be done regardless of his current fullness.

Chef starts the meal with **0 units of fullness**.

Determine the **maximum fullness** Chef can achieve without ever exceeding `t`.

## Input Format

The input consists of a single line containing three integers:

`a b t`

where:

- `a` is the fullness gained from eating the mutton dish.
- `b` is the fullness gained from eating the prawn dish.
- `t` is Chef's maximum allowed fullness.

## Constraints

- `1 ≤ a, b ≤ t`
- `1 ≤ t ≤ 10^6`

## Output Format

Print a single integer — the maximum fullness Chef can achieve without ever exceeding `t`.

## Examples

### Example 1

**Input**
```text
3 4 10
```

**Output**
```text
10
```

### Example 2

**Input**
```text
4 5 10
```

**Output**
```text
10
```

### Example 3

**Input**
```text
6 7 10
```

**Output**
```text
10
```

### Example 4

**Input**
```text
8 9 10
```

**Output**
```text
9
```

## Explanation

In the fourth example, Chef can eat the mutton dish once, reaching a fullness of `8`.

He cannot eat either dish again, because doing so would make his fullness exceed `10`.

He can instead take an antacid, reducing his fullness from `8` to `4`. From there, he can continue eating either dish while keeping his fullness within the allowed limit.

The goal is to find the highest fullness that can be reached through any sequence of eating dishes and taking antacids, while never exceeding `t`.