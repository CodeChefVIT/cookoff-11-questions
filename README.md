<p align="center">
  <a href="https://www.codechefvit.com" target="_blank">
    <img src="https://i.ibb.co/4J9LXxS/cclogo.png" width="160" title="CodeChef-VIT" alt="CodeChef-VIT">
  </a>
</p>

<h1 align="center">CookOff 11 Questions</h1>

<p align="center">
  <b>Problem Statements, Solutions & Test Cases</b>
</p>

<br/>

> This repository contains the complete problem set and supporting materials from **CookOff 11**, held by CodeChef-VIT at GraVITas 2026.
>
> The repository has been made public after the conclusion of the event so that participants and the wider competitive programming community can revisit the problems, study the intended solutions, and practice with the provided test cases.

---

## 🏆 About CookOff

**CookOff** is a competitive programming event conducted by **CodeChef-VIT**, designed to test participants across a range of problem-solving techniques and difficulty levels.

The contest was structured into multiple rounds, progressively moving from introductory problem-solving to more challenging algorithmic problems.

This repository contains the materials from all three rounds:

* **Round 1** — An introductory block-based round consisting of 8 problems.
* **Round 2** — A competitive programming round consisting of 12 problems.
* **Round 3** — A final round consisting of 4 advanced problems.

---

## 📂 Repository Structure

The repository is organized by round and then by individual problem.

```text
.
├── README.md
│
├── Round 1
│   ├── Q1
│   ├── Q2
│   ├── Q3
│   ├── Q4
│   ├── Q5
│   ├── Q6
│   ├── Q7
│   └── Q8
│
├── Round 2
│   ├── BONKP
│   ├── CHAIN
│   ├── CREW
│   ├── CRIMBS
│   ├── DARKHORSE
│   ├── INSPCT
│   ├── POWER
│   ├── PRICE
│   ├── THEGREAT
│   ├── THVANC
│   ├── WAR
│   └── XORTRIP
│
└── Round 3
    ├── ALIEN
    ├── BASTL
    ├── DYNAMITE
    └── MIDNIGHT
```

Each problem directory contains the relevant statement, solution(s), and test cases.

### Round 1

Round 1 follows a slightly different structure from the later rounds because of its unique block-based format.

Each question directory generally contains:

| File                         | Description                                     |
| ---------------------------- | ----------------------------------------------- |
| `Question.txt`               | Problem statement                               |
| `Sol1.txt`, `SOL2.txt`, etc. | Available solution approaches                   |
| `Block col.txt`              | Additional material associated with the problem |

Some problems contain multiple solution files where multiple approaches or implementations were prepared.

### Round 2 & Round 3

Problems in these rounds follow a more conventional competitive-programming structure:

```text
PROBLEM/
├── PROBLEM.md
├── problem.cpp
├── test1.txt
├── test2.txt
├── test3.txt
├── test4.txt
└── test5.txt
```

where:

| File                      | Description                          |
| ------------------------- | ------------------------------------ |
| `PROBLEM.md`              | Problem statement and/or explanation |
| `problem.cpp`             | Reference C++ solution               |
| `test1.txt` – `test5.txt` | Sample/additional test cases         |

The exact filenames may vary slightly between problems.

---

## 🚀 Usage

Naturally, there is no software or dependency setup required to use this repository beyond a C++ compiler of your choice. 

### 1. Clone the repository

```bash
git clone <repository-url>
cd <repository-directory>
```

### 2. Choose a round

Navigate to the round you want to practice:

```bash
cd "Round 2"
```

Then choose a problem:

```bash
cd BONKP
```

### 3. Read the problem

Open the corresponding `.md` or `Question.txt` file and try solving the problem **before looking at the solution**.

For example:

```text
BONKP.md
```

contains the problem material for `BONKP`.

### 4. Compile the reference solution

The solutions are written in **C++**.

For example:

```bash
g++ -std=c++17 bonkp.cpp -o bonkp
```

Then run it with:

```bash
./bonkp
```

### 5. Test your solution

The provided test files can be used to verify your implementation.

For example:

```bash
./bonkp < test1.txt
```

You can similarly test against the remaining cases:

```bash
./bonkp < test2.txt
./bonkp < test3.txt
./bonkp < test4.txt
./bonkp < test5.txt
```

> **Note:** The exact input/output format and the availability of test files varies between rounds and problems. Refer to the individual problem statement before running a test case.

---

## 🧠 Recommended Practice Workflow

If you're using this repository to practice competitive programming, the recommended workflow is:

1. **Pick a problem without opening its solution.**
2. Read the complete problem statement and constraints.
3. Work out the algorithm and complexity.
4. Implement your solution.
5. Test it against the provided test cases.
6. Compare your approach with the reference solution.
7. If your solution differs, consider whether the difference affects correctness, complexity, or edge cases.

For a more realistic contest simulation, start a timer and attempt an entire round without looking at the solutions or test cases beforehand.

---

## 📚 Solutions

Reference solutions are included primarily for **post-contest learning and verification**.

They are not intended to replace attempting the problems yourself.

Some Round 1 problems contain multiple solution files. These may represent different approaches, implementations, or versions of the solution prepared during the contest development process.

For Round 2 and Round 3, each problem generally has a corresponding C++ reference implementation alongside its statement.

---

## 🧪 Test Cases

The repository includes test cases for the Round 2 and Round 3 problems.

These can be used to:

* Verify your implementation.
* Check edge cases.
* Experiment with different approaches.
* Compare your output against the reference solution.
* Practice solving problems locally before submitting elsewhere.

The included test cases are **not necessarily an exhaustive test suite**. Passing the provided cases does not by itself guarantee that an implementation handles every possible valid input.

---

## 👨‍💻 Question Setters

The CookOff problem set was designed and prepared by:

|                                                                                                        | Question Setter         |                                  GitHub                                  |
| :----------------------------------------------------------------------------------------------------: | :---------------------- | :----------------------------------------------------------------------: |
|        <img src="https://github.com/AS-Nath.png?size=100" width="80" alt="Aditya Shankar Nath">        | **Aditya Shankar Nath** |                  [@AS-Nath](https://github.com/AS-Nath)                  |
| <img src="https://github.com/usmanganiahmed71-creator.png?size=100" width="80" alt="Usman Gani Ahmed"> | **Usman Gani Ahmed**    | [@usmanganiahmed71-creator](https://github.com/usmanganiahmed71-creator) |
|          <img src="https://github.com/RRonium.png?size=100" width="80" alt="Sannidhya Biswas">         | **Sannidhya Biswas**    |                  [@RRonium](https://github.com/RRonium)                  |


## 👨‍💻 CodeChef-VIT

**CodeChef-VIT** is the official campus chapter of CodeChef at VIT Vellore, focused on competitive programming, software development, and fostering a strong programming community.

<p align="center">
  Made with ❤️ by <a href="https://www.codechefvit.com" target="_blank">CodeChef-VIT</a>
</p>
