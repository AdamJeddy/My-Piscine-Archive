#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);

int main(int argc, char **argv)
{
	(void)argc;
	char *s1 = argv[1];
	char *s2 = argv[2];
	char *s3 = argv[3];

	// ex00 - ft_strcmp
 	printf("my strcmp: %d\nstrcmp: %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	
	// ex01 - ft_strncmp
///*	
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("", "", 0), strncmp("", "", 0));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("", "", 2), strncmp("", "", 2));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("", "", -1), strncmp("", "", -1));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("nice", "nice", 2), strncmp("nice", "nice", 2));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("nice", "nice", 4), strncmp("nice", "nice", 4));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("nice", "nice", 6), strncmp("nice", "nice", 6));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("asd", "", 2), strncmp("asd", "", 2));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("", "asd", 2), strncmp("", "asd", 2));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("asd", "", 1), strncmp("asd", "", 1));
	printf("my strcmp: %d\tstrcmp: %d\n", ft_strncmp("asd4", "asd7", 4), strncmp("asd4", "asd7", 4));
//*/
	
	// ex02 - ft_strcat
///* 	
	ft_strcat(s1, s2);
	printf("%s", s1);
//*/

	// ex03 - ft_strncat
///*	
	ft_strncat(s1, s2, atoi(argv[3]));
	printf("%s", s1);
//*/

	// ex04 - ft_strstr
 	printf("%s", ft_strstr(s1, s2));

}
