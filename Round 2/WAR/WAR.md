# Warriors

Chef finds himself now in England in 871AD, with the Viking occupation in full swing. Alfred the Great of Wessex is the only remaining Saxon ruler, and while he one day will defeat the Vikings to ensure Saxon survival, that is a story for another day.  

Contrary to popular opinion, the Vikings used shields and other defensive equipment in war quite frequently. Ivar the Boneless was one of the most feared Vikings of the name (you may be familiar if you have played Assassin's Creed!), and due to a massive increase in shield breakages during raids, he has decided to lay down some rules for the construction of shields going forward :  
- A shield begins with a wooden plate in the centre. 
- Each wooden plate is surrounded by exactly `k` other wooden plates in the next layer. 
- A minimum of `2` layers beyond the central plate must exist.  

This process can continue indefinitely, forming a pattern that grows outwards. Any man who crafts a shield with a total number of wooden plates not equal to n will be made into a Blood Eagle (if you are not familiar, do not look this up!). Chef has been made Ivar's Chief Craftsman. Given a value of `n`, the number of plates, determine whether a value of `k` exists such that Chef can craft such a shield.  

## Input Format

The input consists of a single line containing one integer, `n`.

## Constraints

- `1 ≤ n ≤ 10^6`

## Output Format

Print `YES` if Chef can craft a shield with exactly `n` wooden plates (using at least `2` layers beyond the centre), and `NO` otherwise.

## Examples

### Example 1

**Input**

13

**Output**

YES

### Example 2

**Input**

6

**Output**

NO

### Example 3

**Input**

15

**Output**

YES

### Example 4

**Input**

100

**Output**

NO