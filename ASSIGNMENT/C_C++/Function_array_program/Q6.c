//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>

void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int rows, cols;

    // Input dimensions of matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input elements of matrix 1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of matrix 2
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform operations
    addMatrices(rows, cols, matrix1, matrix2, result);
    printf("\nMatrix Addition:\n");
    displayMatrix(rows, cols, result);

    subtractMatrices(rows, cols, matrix1, matrix2, result);
    printf("\nMatrix Subtraction:\n");
    displayMatrix(rows, cols, result);

    if (cols == rows) {
        multiplyMatrices(rows, cols, matrix1, rows, cols, matrix2, result);
        printf("\nMatrix Multiplication:\n");
        displayMatrix(rows, cols, result);
    } else {
        printf("\nMatrix multiplication is not possible because the number of columns in the first matrix is not equal to the number of rows in the second matrix.\n");
    }

    return 0;
}
