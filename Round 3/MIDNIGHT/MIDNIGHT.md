# Midnight Sun

The year is 2247. Humanity has begun exploring the far reaches of space, but some regions remain dangerously unpredictable. One such region is known as the Midnight Sun thanks to its incredible brightness.

Scientists know that the Midnight Sun occupies an area of exactly `S` square units. They also know that its boundaries form a rectangle with positive integer side lengths, with its bottom-left corner fixed at the origin `(0, 0)`. However, the exact dimensions of the Midnight Sun have been lost.

Chef is part of an interstellar surveying team tasked with studying the region. The team has a number of rectangular scanning zones, each covering cells `(i, j)` where `1 ≤ i ≤ x` and `1 ≤ j ≤ y` (with bottom-left corner at `(0, 0)`). For a scanning zone of dimensions `x × y`, Chef wants to know how many of its grid cells could possibly lie inside the Midnight Sun, considering every possible valid rectangular shape of area `S`. You are given `q` such scanning queries. Help Chef analyze the Midnight Sun and answer all queries.

Formally, a cell `(i, j)` (where `1 ≤ i ≤ x` and `1 ≤ j ≤ y`) lies inside a candidate Midnight Sun rectangle of dimensions `W × H` if `W · H = S` (with `W, H ∈ ℤ⁺`), `i ≤ W`, and `j ≤ H`. A cell is counted if there exists **at least one** valid pair `(W, H)` such that `W · H = S`, `i ≤ W`, and `j ≤ H`. For each query `(x, y)`, compute the number of cells in the `x × y` grid that satisfy this condition.

## Input Format

- The first line contains a single integer `T`, the number of test cases.
- For each test case:
  - The first line contains two space-separated integers `S` and `q`, representing the area of the Midnight Sun and the number of scanning queries.
  - The next `q` lines each contain two space-separated integers `x` and `y`, representing the dimensions of a scanning zone.

## Constraints

- `1 ≤ T ≤ 50`
- `1 ≤ S ≤ 10^5`
- `1 ≤ q ≤ 10^5`
- `1 ≤ x, y ≤ 10^5`
- The sum of `S` over all test cases does not exceed `2 * 10^5`.
- The sum of `q` over all test cases does not exceed `2 * 10^5`.

## Output Format

For each test case, print `q` lines. The `k`-th line should contain a single integer representing the number of valid cells for the `k`-th query.

## Examples

### Example 1

**Input**
```
2
6 2
3 3
5 2
5 1
3 3
```

**Output**
```
8
8
5
```

## Explanation

### Example 1

**Test Case 1 (`S = 6`):** The valid integer dimensions `(W, H)` with `W × H = 6` are `(1, 6)`, `(2, 3)`, `(3, 2)`, and `(6, 1)`.
- **Query 1 (`3 × 3` zone):** The cells `(i, j)` in this zone covered by at least one candidate shape are:
  - Row 1 (`i = 1`): `(1, 1)`, `(1, 2)`, `(1, 3)` (3 cells)
  - Row 2 (`i = 2`): `(2, 1)`, `(2, 2)`, `(2, 3)` (3 cells, covered by `2 × 3`)
  - Row 3 (`i = 3`): `(3, 1)`, `(3, 2)` (2 cells, covered by `3 × 2`)
  Total = `3 + 3 + 2 = 8` cells.

- **Query 2 (`5 × 2` zone):** The cells `(i, j)` in this zone covered by at least one candidate shape are:
  - Row 1 (`i = 1`): `(1, 1)`, `(1, 2)`
  - Row 2 (`i = 2`): `(2, 1)`, `(2, 2)`
  - Row 3 (`i = 3`): `(3, 1)`, `(3, 2)`
  - Row 4 (`i = 4`): `(4, 1)` (covered by `6 × 1`)
  - Row 5 (`i = 5`): `(5, 1)` (covered by `6 × 1`)
  Total = `2 + 2 + 2 + 1 + 1 = 8` cells.

**Test Case 2 (`S = 5`):** The valid candidate dimensions are `(1, 5)` and `(5, 1)`.
- **Query 1 (`3 × 3` zone):** The covered cells are `(1, 1)`, `(1, 2)`, `(1, 3)` (from `1 × 5`) and `(2, 1)`, `(3, 1)` (from `5 × 1`). Total = `5` cells.