#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strdup(char *src);
int *ft_range(int min, int max);
int ft_ultimate_range(int **range, int min, int max);
char *ft_strjoin(int size, char **strs, char *sep);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int main(int c, char **v)
{
	(void)c;
	(void)v;
	if (c > 1) {
/*
		//strdup

		char	*str = ft_strdup(v[1]);
		printf("%s", str);
		free(str);
*/

		//range
/*
		int a = atoi(v[1]), b = atoi(v[2]);
		int size = b - a, i = 0;
		int *range = ft_range(a, b);
		printf("%d to %d\n", a, b - 1);
		while (size && a <= b)
		{
			printf("%d ", range[i++]);
			size--;
		}
		free(range);
*/
		//ultimate range

		int a = atoi(v[1]), b = atoi(v[2]);
		int size = b - a, i = 0;

		int *range;
		ft_ultimate_range(&range, a, b);
		printf("%d to %d\n", a, b - 1);
		while (size && a <= b)
		{
			printf("%d ", range[i++]);
			size--;
		}
		free(range);

/*
		//strjoin
		char *lang[] = {"Java", "Python", "C++", "HTML", "SQL"};
		char *h = ft_strjoin(5, lang, "()");
		ft_putstr(h);
		(void)h;
		free(h);
*/
	}
}
