# Criminal

The Ancient Greeks loved their mathematics. When Chef lands in Ancient Greece, he can't help but share a new piece of mathematics with them, but he realises that if he shares something too groundbreaking he may disturb the timeline irreparably. So despite it technically being immoral and potentially illegal (as enforced by Marvel's TVA or Star Trek's Department of Temporal Investigations, whichever you prefer!) he introduces them to the factorial.

`n!` is defined as `n * (n - 1) * ... * 2 * 1` for integral `n`.

Archimedes in particular is fascinated by this, and immediately asks a follow-up problem — since evaluating large factorials is often extremely difficult, is there an easy way to determine the number of zeroes at the end of some `n!`? Help Chef determine this number of zeroes given a value of `n`.

Archimedes has plenty of values he wants to ask about, so you must answer this for multiple independent test cases.

## Input Format

- The first line contains a single integer `t`, the number of test cases.
- Each of the next `t` lines contains a single integer `n`.

## Constraints

- `1 ≤ t ≤ 10^5`
- `0 ≤ n ≤ 10^18`

## Output Format

For each test case, print a single integer on its own line — the number of trailing zeroes in `n!`.

## Examples

### Example 1

**Input**
```text
4
5
10
25
100
```

**Output**
```text
1
2
6
24
```

## Explanation

### Test case 1

`5! = 120`, which ends in `1` zero.

### Test case 2

`10! = 3628800`, which ends in `2` zeroes.

### Test case 3

`25! = 15511210043330985984000000`, which ends in `6` zeroes.

### Test case 4

`100!` ends in `24` zeroes.