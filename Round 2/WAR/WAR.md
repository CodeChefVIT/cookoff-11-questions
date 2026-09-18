# Warriors

Chef finds himself in England in 871 AD, with the Viking occupation in full swing. Alfred the Great of Wessex is the only remaining Saxon ruler, and while he will one day defeat the Vikings to ensure Saxon survival, that is a story for another day.  

Contrary to popular opinion, the Vikings used shields and other defensive equipment in war quite frequently. Ivar the Boneless was one of the most feared Vikings of his time, and due to a massive increase in shield breakages during raids, he has decided to lay down strict rules for the construction of shields going forward:  
- A shield begins with **1** wooden plate at the center. 
- Each layer surrounding the shield expands exponentially by a constant integer factor $k \ge 2$. That is, layer 1 has $k$ plates, layer 2 has $k^2$ plates, layer 3 has $k^3$ plates, and so on.
- A minimum of **2** layers beyond the central plate must exist (i.e., at least layers 1 and 2).  

This process can continue outwards for $m$ layers ($m \ge 2$), making the total number of plates on the shield equal to $1 + k + k^2 + \dots + k^m$.

Any craftsman who creates a shield with a total number of wooden plates not equal to $n$ according to these rules will be punished. Chef has been appointed Ivar's Chief Craftsman. Given a value of $n$, determine whether there exists an integer $k \ge 2$ and an integer $m \ge 2$ such that Chef can craft a valid shield with exactly $n$ wooden plates.

Formally, given an integer $n$, determine if $n$ can be represented as the sum of a geometric series $1 + k + k^2 + \dots + k^m$ for some integers $k \ge 2$ and $m \ge 2$.

## Input Format

- The first line contains a single integer `T`, the number of test cases.
- For each test case, the input contains a single integer `n`, the total number of wooden plates.

## Constraints

- `1 ≤ T ≤ 100`
- `1 ≤ n ≤ 10^6`

## Output Format

For each testcase, print `YES` on a new line if Chef can craft a shield with exactly `n` wooden plates under the rules, and `NO` otherwise.

## Examples

### Example 1

**Input**
```
4
13
6
15
100
```

**Output**
```
YES
NO
YES
NO
```

## Explanation

### Example 1

- **Test Case 1 (`n = 13`):** Choosing $k = 3$ with $m = 2$ layers gives a total of $1 + 3 + 3^2 = 1 + 3 + 9 = 13$ plates. The answer is `YES`.
- **Test Case 2 (`n = 6`):** The smallest possible valid shield uses $k = 2$ and $m = 2$ layers, requiring $1 + 2 + 2^2 = 7$ plates. Since $n = 6 < 7$, no valid $k \ge 2$ and $m \ge 2$ exist. The answer is `NO`.
- **Test Case 3 (`n = 15`):** Choosing $k = 2$ with $m = 3$ layers gives a total of $1 + 2 + 2^2 + 2^3 = 1 + 2 + 4 + 8 = 15$ plates. The answer is `YES`.
- **Test Case 4 (`n = 100`):** There exist no integer values $k \ge 2$ and $m \ge 2$ such that $1 + k + \dots + k^m = 100$. The answer is `NO`.