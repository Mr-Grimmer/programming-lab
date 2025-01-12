#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks[5];
    float average;
    int total;
};

void calculateMarks(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        students[i].total = 0;
        for (int j = 0; j < 5; j++) {
            students[i].total += students[i].marks[j];
        }
        students[i].average = students[i].total / 5.0;
    }
}

void sortStudents(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].total < students[j].total) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct Student students[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks for 5 subjects of student %d:\n", i + 1);
        scanf("%s %d", students[i].name, &students[i].roll);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    calculateMarks(students, n);
    sortStudents(students, n);

    printf("\nSorted List of Students by Total Marks:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - Total Marks: %d, Average Marks: %.2f\n", students[i].name, students[i].total, students[i].average);
    }

    return 0;
}
