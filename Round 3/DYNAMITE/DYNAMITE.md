# Dynamite

The year is 2301, and humanity's most advanced spacecraft are powered by miniature fusion cores. Chef has been assigned to maintain one of the newest experimental ships. Unfortunately, the ship's main reactor has malfunctioned, and its total energy output has become an unknown integer `n`.

The reactor can only be stabilized by dividing its energy into exactly three independent power cores. Each core must have an integer power rating of at least 2, and no two cores may have the same rating. The reactor is stable only when the product of the three ratings is exactly `n`.

Given the reactor's energy output `n`, determine whether Chef can configure three valid and distinct power cores. If possible, output `YES` along with the three power ratings. Otherwise, report that the reactor cannot be stabilized by outputting `NO`.

Formally, given an integer `n`, determine whether there exist three distinct integers $a, b, c \ge 2$ such that $a \cdot b \cdot c = n$. If multiple valid triples exist, you may print any of them.

## Input Format

- The first line contains a single integer `T`, the number of test cases.
- For each test case, the line contains a single integer `n`, the energy output of the reactor.

## Constraints

- `1 ≤ T ≤ 100`
- `2 ≤ n ≤ 10^9`

## Output Format

For each test case:
- Print `YES` on the first line if the reactor can be stabilized, followed by three space-separated integers `a`, `b`, and `c` on the second line representing the three core power ratings ($a, b, c \ge 2$, $a \ne b$, $b \ne c$, $a \ne c$, and $a \cdot b \cdot c = n$).
- If it is impossible to configure three such cores, print `NO`.

## Examples

### Example 1

**Input**
```
5
64
32
97
2
12345
```

**Output**
```
YES
2 4 8
NO
NO
NO
YES
3 5 823
```

## Explanation

### Example 1

**Test Case 1:** For $n = 64$, we can choose cores with ratings $a = 2$, $b = 4$, and $c = 8$. All ratings are $\ge 2$, distinct ($2 \ne 4 \ne 8$), and $2 \cdot 4 \cdot 8 = 64$. Thus, the answer is `YES`.

**Test Case 2:** For $n = 32$, the prime factorization is $2^5$. The only ways to express $32$ as a product of three integers $\ge 2$ require repeating a factor (e.g., $2 \cdot 2 \cdot 8$ or $2 \cdot 4 \cdot 4$), so three distinct ratings cannot be formed. The answer is `NO`.

**Test Case 3:** $n = 97$ is a prime number, so it cannot even be factored into two integers $\ge 2$. The answer is `NO`.

**Test Case 5:** For $n = 12345$, we can factor it into $3 \cdot 5 \cdot 823$. All three factors are distinct integers $\ge 2$, so the answer is `YES`.