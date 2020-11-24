#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct matrix matrix_t;

struct matrix {
    int rows;
    int columns;
    int *value;
};

matrix_t *create_matrix(int rows, int columns) {

    matrix_t *matrix = malloc(sizeof(matrix_t));

    matrix->rows = rows;
    matrix->columns = columns;

    matrix->value = malloc(sizeof(rows * columns));

    return matrix;
}

int read_matrix(matrix_t *matrix, int n, int m, bool testmode) {

    printf("\n");

    for (int rows = 0; rows < n; rows++) {

        printf("[ ");

        for (int columns = 0; columns < m; columns++) {

            if(testmode) {
                int counter = (matrix->columns * rows) + columns;
                matrix->value[counter] = counter;
                printf("%d ", matrix->value[counter]);
            } else {
                int random = rand() % 10;
                matrix->value[random] = random;
                printf("%d ", matrix->value[random]);
            }
        }

        printf("]\n");
    }
}

int main(void) {

    // Matrix size.
    int n = 50;
    int m = 50;

    // Create a matrix.
    matrix_t *my_matrix = create_matrix(n, m);

    // Read the matrix (testmode = false).
    read_matrix(my_matrix, n, m, false);

    return 0;
}