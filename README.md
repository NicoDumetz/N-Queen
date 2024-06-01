# N-Queen 👑

The N-Queen problem involves placing N chess queens on an N×N chessboard so that no two queens threaten each other. This README provides an overview of the count_valid_queens_placements function implemented in C to count the number of valid placements of N queens on an N×N chessboard.

## How to Run

To use the `count_valid_queens_placements` function:

1. Ensure that the `count_valid_queens_placements.c` file is present in your project directory.

2. Include the function prototype for `count_valid_queens_placements` in your main C file:

```c
int count_valid_queens_placements(int n);

int main(void) {
    int n = 8; // Example: N = 8
    int count = count_valid_queens_placements(n);
    printf("Number of valid queen placements for %d queens: %d\n", n, count);
    return 0;
}
```

3. Compile your C program, ensuring that count_valid_queens_placements.c is included in the compilation command.

4. Run your compiled program:

```shell
$ gcc -o queens queens.c count_valid_queens_placements.c
$ ./queens
Number of valid queen placements for 8 queens: 92
```

## Recursion
Recursion is a programming technique where a function calls itself to solve smaller instances of the same problem.

```c
void recursive_function(int n) {
    // Base case
    if (n <= 0) {
        return;
    }

    // Recursive case
    recursive_function(n - 1);
}
```
In the context of the N-Queen problem, recursion is used to explore all possible placements of queens on the chessboard.

## Grade

I received a score of 100% on this project.

## Authors
Thank you for checking out this project! If you have any questions or would like to collaborate, feel free to contact me.

[Nicolas Dumetz](mailto:nicolasdumetzpro@gmail.com)
