#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);

int main(int argc, char **argv)
{
	(void)argc;
	int input = atoi(argv[1]);
    //int result;
    
    // ex00 - ft_iterative_factorial
    printf("*** ex00 - ft_iterative_factorial ***\n");
    printf("Factorial of %d: %d\nOther tests:\n", input, ft_iterative_factorial(input));
    printf("%d! = %d\n", -1, ft_iterative_factorial(-10));
    printf("%d! = %d\n", 0, ft_iterative_factorial(0));
    printf("%d! = %d\n", 1, ft_iterative_factorial(1));
    printf("%d! = %d\n", 3, ft_iterative_factorial(3));
    printf("%d! = %d\n", 5, ft_iterative_factorial(5));
    printf("%d! = %d\n", 10, ft_iterative_factorial(10));

    // ex01 - ft_recursive_factorial
    printf("\n\n*** ex01 - ft_recursive_factorial ***\n");
    printf("Factorial of %d: %d\nOther tests:\n", input, ft_recursive_factorial(input));
    printf("%d! = %d\n", -1, ft_recursive_factorial(-10));
    printf("%d! = %d\n", 0, ft_recursive_factorial(0));
    printf("%d! = %d\n", 1, ft_recursive_factorial(1));
    printf("%d! = %d\n", 3, ft_recursive_factorial(3));
    printf("%d! = %d\n", 5, ft_recursive_factorial(5));
    printf("%d! = %d\n", 10, ft_recursive_factorial(10));

    // ex02 - ft_iterative_power
    printf("\n\n*** ex02 - ft_iterative_power ***\n");
    printf("Power of %d to %d: %d\nOther tests:\n", input, input, ft_iterative_power(input, input));
    printf("%d^%d = %d\n", -5, 2, ft_iterative_power(-5, 2));
    printf("%d^%d = %d\n", -1, -1, ft_iterative_power(-1, -1));
    printf("%d^%d = %d\n", 1, -1, ft_iterative_power(1, -1));
    printf("%d^%d = %d\n", -1, 1, ft_iterative_power(-1, 1));
    printf("%d^%d = %d\n", 0, 0, ft_iterative_power(0, 0));
    printf("%d^%d = %d\n", 1, 0, ft_iterative_power(1, 0));
    printf("%d^%d = %d\n", 0, 1, ft_iterative_power(0, 1));
    printf("%d^%d = %d\n", 1, 1, ft_iterative_power(1, 1));
    printf("%d^%d = %d\n", 3, 3, ft_iterative_power(3, 3));
    printf("%d^%d = %d\n", 5, 5, ft_iterative_power(5, 5));

    // ex03 - ft_recursive_power
    printf("\n\n*** ex03 - ft_recursive_power ***\n");
    printf("Power of %d to %d: %d\nOther tests:\n", input, input, ft_recursive_power(input, input));
    printf("%d^%d = %d\n", -5, 2, ft_recursive_power(-5, 2));
    printf("%d^%d = %d\n", -1, -1, ft_recursive_power(-1, -1));
    printf("%d^%d = %d\n", 1, -1, ft_recursive_power(1, -1));
    printf("%d^%d = %d\n", -1, 1, ft_recursive_power(-1, 1));
    printf("%d^%d = %d\n", 0, 0, ft_recursive_power(0, 0));
    printf("%d^%d = %d\n", 1, 0, ft_recursive_power(1, 0));
    printf("%d^%d = %d\n", 0, 1, ft_recursive_power(0, 1));
    printf("%d^%d = %d\n", 1, 1, ft_recursive_power(1, 1));
    printf("%d^%d = %d\n", 3, 3, ft_recursive_power(3, 3));
    printf("%d^%d = %d\n", 5, 5, ft_recursive_power(5, 5));

    // ex04 - ft_fibonacci
    printf("\n\n*** ex04 - ft_fibonacci ***\n");
    printf("Fibonacci of %d: %d\nOther tests:\n", input, ft_fibonacci(input));
    printf("%d = %d\n", -1, ft_fibonacci(-1));
    printf("First 10 Fibonacci numbers:\n");
    for (int i = 0; i < 9; i++)
        printf("%d, ", ft_fibonacci(i));
    printf("%d\n", ft_fibonacci(9));
    printf("%d = %d\n", 10, ft_fibonacci(10));
    
    //  ex05 - ft_sqrt
    printf("\n\n*** ex05 - ft_sqrt ***\n");
    printf("Square root of %d: %d\nOther tests:\n", input, ft_sqrt(input));
    printf("%d = %d\n", -1, ft_sqrt(-1));
    printf("%d = %d\n", 0, ft_sqrt(0));
    printf("%d = %d\n", 1, ft_sqrt(1));
    printf("%d = %d\n", 2, ft_sqrt(2));
    printf("%d = %d\n", 3, ft_sqrt(3));
    printf("%d = %d\n", 4, ft_sqrt(4));
    printf("%d = %d\n", 5, ft_sqrt(5));
    printf("%d = %d\n", 10, ft_sqrt(10));
    printf("%d = %d\n", 25, ft_sqrt(25));
    printf("%d = %d\n", 49, ft_sqrt(49));
    printf("%d = %d\n", 64, ft_sqrt(64));
    printf("%d = %d\n", 100, ft_sqrt(100));

    // ex06 - ft_is_prime
    printf("\n\n*** ex06 - ft_is_prime ***\n");
    printf("Is %d prime? %s\nOther tests:\n", input, ft_is_prime(input)? "Yes" : "No");
    printf("Is %d prime? %s\n", -1, ft_is_prime(-1)? "Yes" : "No");
    for (int i = 0; i < 12; i++)
    
        printf("Is %d prime? %s\n", i, ft_is_prime(i)? "Yes" : "No");
    
    // ex07 - ft_find_next_prime
    printf("\n\n*** ex07 - ft_find_next_prime ***\n");
    printf("Next prime after %d: %d\nOther tests:\n", input, ft_find_next_prime(input));
    printf("%d = %d\n", -1, ft_find_next_prime(-1));
    for (int i = 0; i < 12; i++)
        printf("Next prime after %d: %d\n", i, ft_find_next_prime(i));

    return (0);
}