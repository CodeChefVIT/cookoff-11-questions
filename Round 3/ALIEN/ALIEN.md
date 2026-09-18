# Alien Archipelago

The year is 2215. Humanity has discovered a previously unknown planet at the edge of the galaxy. Before sending colonists, the planet must be thoroughly surveyed. A reconnaissance satellite has divided a region of the planet into a rectangular grid where each cell is classified as either `1` (land) or `0` (water).

Two land cells belong to the same island if they are connected through adjacent land cells (sharing a common side—up, down, left, or right). Chef has been assigned to analyze the satellite data and determine how many separate islands exist in the surveyed region. Given the grid, help Chef determine the total number of islands.

Formally, you are given an `r × c` binary grid where `1` represents land and `0` represents water. An island is a maximal 4-directionally connected component of `1`s. Return the total number of islands in the grid.

## Input Format

- The first line contains a single integer `T`, the number of test cases.
- For each test case:
  - The first line contains two space-separated integers `r` and `c`, representing the number of rows and columns of the grid.
  - The next `r` lines each contain `c` space-separated integers (`0` or `1`), describing the grid row by row.

## Constraints

- `1 ≤ T ≤ 50`
- `1 ≤ r, c ≤ 500`
- `grid[i][j] ∈ {0, 1}`
- The sum of `r * c` over all test cases does not exceed `10^6`

## Output Format

For each test case, output a single integer on a new line representing the total number of islands.

## Examples

### Example 1

**Input**
```
2
4 5
1 1 0 0 0
1 1 0 0 0
0 0 1 0 0
0 0 0 1 1
3 3
1 0 0
0 1 0
0 0 1
```

**Output**
```
3
3
```

## Explanation

### Example 1

**Test Case 1:** The grid contains three separate connected components of land (`1`s):
1. The 2 × 2 block at the top-left corner (`(0,0)`, `(0,1)`, `(1,0)`, `(1,1)`).
2. The single land cell at `(2,2)`.
3. The horizontal pair of land cells at the bottom-right corner (`(3,3)`, `(3,4)`).

**Test Case 2:** Diagonally adjacent land cells are not considered connected under 4-directional adjacency. Therefore, the three `1`s at `(0,0)`, `(1,1)`, and `(2,2)` each form their own individual island, resulting in 3 islands.