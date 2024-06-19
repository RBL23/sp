# Matrix Operations in C

This project demonstrates basic matrix operations implemented in C, including matrix creation, transposition, addition, multiplication, and reshaping. 

## Overview

The `matrix_operations.c` program defines a `Matrix` structure and several functions to manipulate matrices. The main operations covered are:

1. **Matrix Creation**: Allocating memory for a matrix.
2. **Matrix Transposition**: Flipping a matrix over its diagonal.
3. **Matrix Addition**: Adding two matrices element-wise.
4. **Matrix Multiplication**: Multiplying two matrices.
5. **Matrix Reshaping**: Changing the shape of a matrix while preserving its elements.

## How to Compile and Run

To compile and run the program, use the following commands:

```sh
gcc -o matrix_operations matrix_operations.c
./matrix_operations
```

## Output

Matrix 1:
1.000000 2.000000 3.000000 
4.000000 5.000000 6.000000 
Matrix 2:
7.000000 8.000000 9.000000 
10.000000 11.000000 12.000000 
Transposed Matrix 1:
1.000000 4.000000 
2.000000 5.000000 
3.000000 6.000000 
Matrix 1 + Matrix 2:
8.000000 10.000000 12.000000 
14.000000 16.000000 18.000000 
Matrix 1 * Matrix 3:
22.000000 28.000000 
49.000000 64.000000 
Reshaped Matrix 1 to 3x2:
1.000000 2.000000 
3.000000 4.000000 
5.000000 6.000000 


## The program includes the following functions:

1. create_matrix(int rows, int cols): Allocates memory for a matrix with specified rows and columns.
2. free_matrix(Matrix *matrix): Frees the allocated memory for a matrix.
3. print_matrix(const Matrix *matrix): Prints the elements of a matrix.
4. transpose_matrix(const Matrix *matrix): Returns the transpose of a matrix.
5. add_matrices(const Matrix *matrix1, const Matrix *matrix2): Adds two matrices and returns the result.
6. multiply_matrices(const Matrix *matrix1, const Matrix *matrix2): Multiplies two matrices and returns the result.
7. reshape_matrix(const Matrix *matrix, int new_rows, int new_cols): Reshapes a matrix to the specified new dimensions.

## Example Usage
In the main function, we demonstrate the creation and manipulation of matrices:

1. Create and populate two matrices, matrix1 and matrix2.
2. Print the original matrices.
3. Transpose matrix1 and print the result.
4. Add matrix1 and matrix2, and print the result.
5. Create another matrix, matrix3, for multiplication.
6. Multiply matrix1 by matrix3 and print the result.
7. Reshape matrix1 and print the result.
Finally, all matrices are freed to release the allocated memory.
