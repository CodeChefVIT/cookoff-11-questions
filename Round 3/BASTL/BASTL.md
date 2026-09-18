# But if you close your eyes...

Chef has found himself in 1789. What's the most exciting thing happening in 1789? The French Revolution, of course! So of course, Chef made his way over to Paris so he can join in the Storming of the Bastille. In normal times in Paris, each road has a toll that Chef would normally pay when he travels along it. However, the revolution has brought with it two rather unusual decrees:

The First Decree: The toll on one road of Chef's journey may be completely abolished.
The Second Decree: The toll on one road of Chef's journey must be paid twice.

Somehow, Chef has convinced the National Assembly to let him choose which road is affected by each decree. The two decrees must be used on the journey, and they may even be applied to the same road. The cost of a journey is the sum of the tolls paid on all roads after applying these two decrees. Chef wants to determine the minimum possible cost of travelling from Paris (city `1`) to every other city.

Formally, Chef is given a connected undirected graph with `n` cities (vertices) and `m` roads (edges). Each road connects two cities and has a toll weight of `w`. Chef starts at city `1`. For any path from city `1` to a destination city `v`, the final cost is the sum of the tolls on that path, minus the toll of one edge chosen by Chef (First Decree), plus the toll of one edge chosen by Chef (Second Decree). The two chosen edges can be the same (in which case the net cost of the path is simply the sum of its tolls). Help Chef find the minimum possible cost to reach cities `2` through `n`.

## Input Format

* The first line contains a single integer `T`, the number of test cases.
* For each test case:
* The first line contains two space-separated integers `n` and `m`, the number of cities and the number of roads.
* The next `m` lines each contain three space-separated integers `u`, `v`, and `w`, denoting a two-way road between city `u` and city `v` with a toll of `w`.

## Constraints

* `1 ≤ T ≤ 10`
* `2 ≤ n ≤ 10^5`
* `1 ≤ m ≤ 2 * 10^5`
* `1 ≤ u, v ≤ n`
* `u ≠ v`
* `1 ≤ w ≤ 10^9`
* The graph is guaranteed to be connected and contains no multiple edges.
* The sum of `n` over all test cases does not exceed `2 * 10^5`.
* The sum of `m` over all test cases does not exceed `2 * 10^5`.

## Output Format

For each test case, output a single line containing `n - 1` space-separated integers. The `i`-th integer should be the minimum possible cost to travel from city `1` to city `i + 1`.

## Examples

### Example 1

**Input**

```
2
5 4
5 3 4
2 1 1
3 2 2
2 4 2
6 8
3 1 1
3 6 2
5 4 2
4 2 2
6 1 1
5 2 1
3 2 3
1 5 4

```

**Output**

```
1 2 2 4 
2 1 4 3 1 

```
