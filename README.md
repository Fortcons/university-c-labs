# University C Programming Labs

A collection of C programming lab assignments from BIGC, organized by topic. The repository also includes three original mini-projects that complement the lab work.

---

## Tech Stack

| Item | Details |
|------|---------|
| Language | C (C99) |
| Compiler | GCC (tested with GCC 13+) |
| Platform | Linux / macOS / Windows (MinGW / WSL) |
| Build | Each file compiles as a standalone program |

### Compile any file

```bash
gcc -Wall -Wextra -std=c99 -o program path/to/file.c -lm
```

> Files that use `sqrt()` require the `-lm` flag (math library).

---

## Repository Structure

```
university-c-labs/
├── sorting/          # Sorting algorithms and array operations
├── math/             # Number theory and geometry
├── sequences/        # Sequences, recursion, and series
├── strings/          # String manipulation
├── matrices/         # 2-D array / matrix problems
├── control_flow/     # Conditionals and switch-based programs
└── projects/         # Original mini-projects
```

---

## Labs

### sorting/

| File | Description |
|------|-------------|
| `bubble_sort.c` | Sorts 3 integers in ascending order using the bubble sort algorithm. |
| `sort_array.c` | Reads 4 integers and sorts them in ascending order using bubble sort. |
| `set_union.c` | Builds the union of two integer arrays (no duplicates) and prints the result sorted in descending order. |

### math/

| File | Description |
|------|-------------|
| `gcd_lcm.c` | Computes the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two integers using the Euclidean algorithm. |
| `gcd_lcm_three.c` | Extends GCD/LCM computation to three `long long` integers. |
| `fraction_simplify.c` | Reads a fraction a/b and reduces it to lowest terms using GCD. |
| `prime_factorization.c` | Prints the complete prime factorization of a positive integer (e.g. `12=2*2*3`). |
| `triangle.c` | Validates three side lengths as a triangle and computes its area (Heron's formula) and perimeter. |
| `perfect_numbers.c` | Finds all perfect numbers in a user-supplied range [m, n]. |
| `narcissistic_numbers.c` | Prints all 4-digit Armstrong numbers where the sum of fourth powers of digits equals the number. |

### sequences/

| File | Description |
|------|-------------|
| `fibonacci_range.c` | Lists all Fibonacci numbers that fall within a given range [m, n]. |
| `cow_population.c` | Solves the cow-population puzzle using recursion: a cow produces its first calf in year 4, and the count follows `f(n) = f(n-1) + f(n-4)`. |
| `sum_natural.c` | Finds the smallest n such that `1 + 2 + ... + n` exceeds a given value m. |

### strings/

| File | Description |
|------|-------------|
| `reverse_string.c` | Reads a line and prints it reversed (in-place character swap). |
| `split_words.c` | Tokenizes a line of text by whitespace and prints each word on a separate line. |
| `caesar_cipher.c` | Applies a Caesar cipher: shifts every character in a string by n positions. |
| `char_in_string.c` | For each (character, string) pair, prints `1` if the character is found in the string and `0` otherwise. |
| `filter_sort_chars.c` | Removes from string A all characters present in string B (case-insensitive), then sorts and prints the remainder. |

### matrices/

| File | Description |
|------|-------------|
| `diagonal_sum.c` | Reads a 3×3 matrix and computes the sum of its main diagonal. |
| `saddle_point.c` | Searches a 3×4 matrix for a saddle point — an element that is the maximum in its row and the minimum in its column. |
| `spiral_matrix.c` | Generates and prints a `(2n-1)×(2n-1)` concentric-layer matrix where each cell contains its layer number. |

### control_flow/

| File | Description |
|------|-------------|
| `calculator.c` | Command-line integer calculator supporting `+`, `-`, `*`, `/` with division-by-zero protection. |
| `grade_system.c` | Converts a numeric score to a letter grade: A (≥90), B (70-89), C (60-69), D (<60). |
| `salary_bonus.c` | Calculates a sales representative's bonus using a multi-tier commission schedule. |
| `day_of_year.c` | Given a date (year/month/day), outputs which day of the year it is, with correct leap-year handling. |

---

## Mini-Projects

Three original programs written to complement the lab assignments:

### projects/number_guessing_game.c
A classic number-guessing game. The computer picks a random integer between 1 and 100; the player has 7 attempts to guess it. After each wrong guess the program responds "too high" or "too low".

```bash
gcc -Wall -std=c99 -o guess projects/number_guessing_game.c
./guess
```

### projects/temperature_converter.c
Converts a temperature value between Celsius, Fahrenheit, and Kelvin. The user enters a number and a unit letter (C / F / K); the program displays all three equivalent values.

```bash
gcc -Wall -std=c99 -o temp projects/temperature_converter.c
./temp
# Enter: 100 C
```

### projects/student_stats.c
Reads student names and scores, computes each student's letter grade, and prints a summary table with class average, highest/lowest scores, and the count of each grade band.

```bash
gcc -Wall -std=c99 -o stats projects/student_stats.c
./stats
# Enter: Alice 85
# Enter: Bob 72
# ...
```

---

## Author

**fortcon** — BIGC, Computer Science
