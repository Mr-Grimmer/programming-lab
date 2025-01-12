#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
    char dob[15];
};

void addRecord() {
    FILE *file = fopen("students.dat", "ab");
    struct Student s;
    printf("Enter name, roll, marks, DOB: ");
    scanf("%s %d %d %s", s.name, &s.roll, &s.marks, s.dob);
    fwrite(&s, sizeof(s), 1, file);
    fclose(file);
}

void deleteRecord(int roll) {
    FILE *file = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    struct Student s;
    while (fread(&s, sizeof(s), 1, file)) {
        if (s.roll != roll) {
            fwrite(&s, sizeof(s), 1, temp);
        }
    }

    fclose(file);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");
}

void addGraceMarks() {
    FILE *file = fopen("students.dat", "rb+");
    struct Student s;

    while (fread(&s, sizeof(s), 1, file)) {
        if (s.marks > 40 && s.marks < 50) {
            s.marks += 10;
            fseek(file, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, file);
        }
    }

    fclose(file);
}

int main() {
    addRecord();
    deleteRecord(2);
    addGraceMarks();
    return 0;
}
