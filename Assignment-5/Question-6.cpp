#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("matrix.txt", "r");
    FILE *outFile = fopen("row_sum.txt", "w");
    if (file == NULL || outFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int row = 0, col, sum;
    int matrix[100][100];

    while (!feof(file)) {
        sum = 0;
        col = 0;
        while (fscanf(file, "%d", &matrix[row][col]) != EOF) {
            sum += matrix[row][col];
            col++;
            if (fgetc(file) == '\n')
                break;
        }
        fprintf(outFile, "Row %d Sum: %d\n", row + 1, sum);
        row++;
    }

    fclose(file);
    fclose(outFile);
    return 0;
}
