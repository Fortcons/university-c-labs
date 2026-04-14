#include <stdio.h>

/*
 * Student Grade Statistics
 * ------------------------
 * Reads up to MAX_STUDENTS student records (name + score).
 * Computes and displays:
 *   - Each student's letter grade
 *   - Class average
 *   - Highest and lowest scores
 *   - Count per grade band (A / B / C / D)
 *
 * Input format (one per line, blank name or EOF to stop):
 *   Alice 85
 *   Bob 72
 *   ...
 */

#define MAX_STUDENTS 50
#define NAME_LEN     32

char letter_grade(int score) {
    if (score >= 90) return 'A';
    if (score >= 70) return 'B';
    if (score >= 60) return 'C';
    return 'D';
}

int main(void) {
    char names[MAX_STUDENTS][NAME_LEN];
    int  scores[MAX_STUDENTS];
    int  count = 0;

    printf("=== Student Grade Statistics ===\n");
    printf("Enter records as: Name Score  (empty line or EOF to finish)\n\n");

    while (count < MAX_STUDENTS) {
        printf("Student %d: ", count + 1);
        if (scanf("%31s %d", names[count], &scores[count]) != 2) break;
        count++;
    }

    if (count == 0) {
        printf("No students entered.\n");
        return 0;
    }

    /* compute statistics */
    int   sum  = 0, max_s = scores[0], min_s = scores[0];
    int   grade_count[4] = {0}; /* index 0=A, 1=B, 2=C, 3=D */
    int   i;

    for (i = 0; i < count; i++) {
        sum += scores[i];
        if (scores[i] > max_s) max_s = scores[i];
        if (scores[i] < min_s) min_s = scores[i];
        char g = letter_grade(scores[i]);
        if      (g == 'A') grade_count[0]++;
        else if (g == 'B') grade_count[1]++;
        else if (g == 'C') grade_count[2]++;
        else               grade_count[3]++;
    }

    printf("\n%-20s %6s %6s\n", "Name", "Score", "Grade");
    printf("-------------------------------\n");
    for (i = 0; i < count; i++) {
        printf("%-20s %6d %6c\n", names[i], scores[i], letter_grade(scores[i]));
    }

    printf("\n--- Summary ---\n");
    printf("Students  : %d\n", count);
    printf("Average   : %.2f\n", (double)sum / count);
    printf("Highest   : %d\n", max_s);
    printf("Lowest    : %d\n", min_s);
    printf("A / B / C / D : %d / %d / %d / %d\n",
           grade_count[0], grade_count[1], grade_count[2], grade_count[3]);

    return 0;
}
