# Quantum Access Codes

The year is 2202. Humanity has spread across hundreds of planets, connected by a vast interstellar communication network.

Chef has recently joined the security division of one of the largest interplanetary corporations. His first assignment involves a newly developed quantum authentication system.

Every access terminal is assigned a unique numerical code. For a particular security system, these codes form a permutation of the integers from `1` to `N`.

The authentication system generates a temporary security signature by selecting three entries and combining their codes using the XOR operation:

`arr[i] XOR arr[j] XOR arr[k]`

An entry may be selected more than once.

Chef has been asked to determine how many different authentication signatures can possibly be generated from the given set of access codes.

Formally, you are given an array `arr` that is a permutation of the integers `1, 2, ..., N`. Count the number of distinct values of `arr[i] XOR arr[j] XOR arr[k]` over all choices of indices `i, j, k` (`1 ≤ i, j, k ≤ N`, not necessarily distinct).

## Input Format

- The first line contains a single integer `N`, the number of access codes.
- The second line contains `N` space-separated integers `arr[1], arr[2], ..., arr[N]`, the access codes.

## Constraints

- `1 ≤ N ≤ 10^6`
- `arr` is a permutation of `1, 2, ..., N`

## Output Format

Print a single integer, the number of distinct authentication signatures.

## Examples

### Example 1

**Input**
```
2
2 1
```

**Output**
```
2
```

### Example 2

**Input**
```
5
3 1 5 2 4
```

**Output**
```
8
```

## Explanation

### Example 1

The access codes are `{1, 2}`. Every triple has the form `x XOR y XOR z` with `x, y, z ∈ {1, 2}`. Choosing `1,1,1` gives `1`, choosing `1,1,2` gives `2`, choosing `1,2,2` gives `1`, and choosing `2,2,2` gives `2`. No triple can produce `0` or `3`. The distinct signatures are `{1, 2}`, so the answer is `2`.

### Example 2

The access codes are `{1, 2, 3, 4, 5}`. Every value from `0` to `7` can be produced:

- `0 = 1 XOR 2 XOR 3`
- `1, 2, 3, 4, 5` are obtained by repeating a code, e.g. `x XOR x XOR x = x`
- `6 = 4 XOR 1 XOR 3`
- `7 = 4 XOR 1 XOR 2`

All results are below `8`, since every code fits in 3 bits. The 8 distinct signatures are `{0, 1, 2, 3, 4, 5, 6, 7}`, so the answer is `8`.