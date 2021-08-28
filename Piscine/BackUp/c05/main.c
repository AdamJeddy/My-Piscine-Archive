#include <stdio.h>
#include <math.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main()
{
	//ft_iterative_factorial
/*
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(8));
*/
	
	//ft_recursive_factorial
/*
	printf("%d\n", ft_recursive_factorial(-10));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(8));
*/	
	
	//ft_iterative_power
/*
	printf("%d	%d\n", ft_iterative_power(0, 0), (int)pow(0, 0));
	printf("%d	%d\n", ft_iterative_power(2, 0), (int)pow(2, 0));
	printf("%d	%d\n", ft_iterative_power(0, 2), (int)pow(0, 2));
	printf("%d	%d\n", ft_iterative_power(0, -2), (int)pow(0, -2));
	printf("%d	%d\n", ft_iterative_power(-2, 0), (int)pow(-2, 0));
	printf("%d	%d\n", ft_iterative_power(-1, 3), (int)pow(-1, 3));
	printf("%d	%d\n", ft_iterative_power(-3, 2), (int)pow(-3, 2));
	printf("%d	%d\n", ft_iterative_power(4, -1), (int)pow(4, -1));
	printf("%d	%d\n", ft_iterative_power(2, 2), (int)pow(2, 2));
	printf("%d	%d\n", ft_iterative_power(4, 2), (int)pow(4, 2));
	printf("%d	%d\n", ft_iterative_power(5, 5), (int)pow(5, 5));


	//ft_recursive_power

	printf("\n%d	%d\n", ft_iterative_power(0, 0), (int)pow(0, 0));
	printf("%d	%d\n", ft_recursive_power(2, 0), (int)pow(2, 0));
	printf("%d	%d\n", ft_recursive_power(0, 2), (int)pow(0, 2));
	printf("%d	%d\n", ft_recursive_power(0, -2), (int)pow(0, -2));
	printf("%d	%d\n", ft_recursive_power(-2, 0), (int)pow(-2, 0));
	printf("%d	%d\n", ft_recursive_power(-1, 3), (int)pow(-1, 3));
	printf("%d	%d\n", ft_recursive_power(-3, 2), (int)pow(-3, 2));
	printf("%d	%d\n", ft_recursive_power(4, -1), (int)pow(4, -1));
	printf("%d	%d\n", ft_recursive_power(2, 2), (int)pow(2, 2));
	printf("%d	%d\n", ft_recursive_power(4, 2), (int)pow(4, 2));
	printf("%d	%d\n", ft_recursive_power(5, 5), (int)pow(5, 5));
*/

	//ft_fibonacci
/*
	printf("%d\n", ft_fibonacci(-2));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(20));
*/

	//ft_sqrt
/*
	printf("%d\n", ft_sqrt(-2));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(10));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(10000));
	printf("%d\n", ft_sqrt(2147395600));

	printf("\n%d\n", ft_sqrt(20241001));//4499
	printf("%d\n", ft_sqrt(518588386));//0
	printf("%d\n", ft_sqrt(1846678729));//42973
	printf("%d\n", ft_sqrt(1713427140));//0
	printf("%d\n", ft_sqrt(1116495396));//33414
*/
	//ft_is_prime
/*
	printf("%d\n", ft_is_prime(-2));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(2147483647));
*/

	//ft_find_next_prime
/*
	printf("-2 -> %d\n", ft_find_next_prime(-2));
	printf("0 -> %d\n", ft_find_next_prime(0));
	printf("1 -> %d\n", ft_find_next_prime(1));
	printf("3 -> %d\n", ft_find_next_prime(3));
	printf("4 -> %d\n", ft_find_next_prime(4));
	printf("10 %d\n", ft_find_next_prime(10));
	printf("11 %d\n", ft_find_next_prime(11));
	printf("12 %d\n", ft_find_next_prime(12));
	printf("%d\n", ft_find_next_prime(11245124));
	printf("%d\n", ft_find_next_prime(2147483629));
*/
	printf("%d\n", ft_find_next_prime(2147483640));

}
