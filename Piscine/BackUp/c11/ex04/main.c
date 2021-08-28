#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		comp(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int (*com)(int, int);

	com = &comp;
	int arr[55555] = {2, 2, 3, 3, 3};
	printf("%d", ft_is_sort(arr, 5, com));
}
