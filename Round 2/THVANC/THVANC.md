# A Thousand Miles

Chef is accompanying Napoleon during the War of the Third Coalition. Being a tactical genius, Napoleon has a clever system for his communications network. From Paris and moving East in the direction of Vienna, each communications post in the network has exactly one predecessor and up to two successors. Each post has a digit from 0 to 9 assigned to it. This way, any time a message traverses from Paris to a terminal station, appending the digits of each station as one goes (e.g. `1` to `5` to `9` produces `159`) gives that particular path a certain ID. Chef would like to know what the sum of all these (not necessarily unique!) IDs is.

Formally, Chef is given a binary tree of `n` communications posts, rooted at the post in Paris. Each post holds a single digit (`0` to `9`). For every root-to-leaf path in the tree, concatenating the digits along the path (from root to leaf, in order) forms a decimal number, that path's ID. Determine the sum of the IDs of all root-to-leaf paths in the tree.

## Input Format

- The first line contains a single integer `n`, the number of communications posts.
- Each of the next `n` lines contains three space-separated integers `digit`, `left`, `right`, describing post `i` (0-indexed, `i` from `0` to `n-1`, in the order the lines appear):
  - `digit` is the digit assigned to post `i`.
  - `left` is the index of post `i`'s left successor, or `-1` if it has none.
  - `right` is the index of post `i`'s right successor, or `-1` if it has none.
- Post `0` is always the root (Paris).

## Constraints

- `1 ≤ n ≤ 10^4`
- `0 ≤ digit ≤ 9`
- `-1 ≤ left, right < n`
- The structure described is guaranteed to be a valid binary tree rooted at post `0` (no cycles, every non-root post has exactly one predecessor)
- The sum of all root-to-leaf IDs fits within a signed 64-bit integer

## Output Format

Print a single integer, the sum of the IDs of all root-to-leaf paths in the tree.

## Examples

### Example 1

**Input**
```
3
1 1 2
2 -1 -1
3 -1 -1
```

**Output**
```
25
```

### Example 2

**Input**
```
5
4 1 2
9 3 4
0 -1 -1
5 -1 -1
1 -1 -1
```

**Output**
```
1026
```

## Explanation

### Example 1

The tree is rooted at post `0` (digit `1`), with left successor post `1` (digit `2`) and right successor post `2` (digit `3`). There are two root-to-leaf paths: `0 -> 1`, forming the ID `12`, and `0 -> 2`, forming the ID `13`. The sum is `12 + 13 = 25`.

### Example 2

The tree is rooted at post `0` (digit `4`), with left successor post `1` (digit `9`) and right successor post `2` (digit `0`, a leaf). Post `1` has left successor post `3` (digit `5`, a leaf) and right successor post `4` (digit `1`, a leaf). There are three root-to-leaf paths: `0 -> 2`, forming `40`; `0 -> 1 -> 3`, forming `495`; and `0 -> 1 -> 4`, forming `491`. The sum is `40 + 495 + 491 = 1026`.