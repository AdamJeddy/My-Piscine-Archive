#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

int main(int argc, char **argv)
{
	(void)argc;
	char *s1 = argv[1];

	// ex00 - ft_strlen
 	printf("my strlen: %i\nstrlen: %llu\n", ft_strlen(s1), strlen(s1));

	 // ex01 - ft_putstr
	 printf("My putstr: ");
	 ft_putstr(s1);

	// ex02 - ft_putnbr
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(-2147483647);
	write(1, "\n", 1);


	// ex03 - ft_atoi
	printf("My atoi: %i\nAtoi: %i\n\n", ft_atoi(s1), atoi(s1));
	printf("My atoi: %i\nAtoi: %i\n\n", ft_atoi("123"), atoi("123"));
	printf("My atoi: %i\nAtoi: %i\n\n", ft_atoi("-123"), atoi("-123"));
	printf("My atoi: %i\nAtoi: %i\n\n", ft_atoi("--123"), atoi("--123"));
	printf("My atoi: %i\nAtoi: %i\n\n", ft_atoi("   123"), atoi("   123"));
	printf("My atoi: %i\nAtoi: %i\n\n", ft_atoi(" "), atoi(" "));

	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("    +----++-2147483648"), 		atoi("    +----++-2147483648"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("+------+0"), 					atoi("+------+0"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("\t\v----------++5123145"), 		atoi("\t\v----------++5123145"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("\n\f----------+-+5123145"), 		atoi("\n\f----------+-+5123145"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("\r \n\t\v\n\f---++-----++2123133345"), atoi("\r     \n\t\v\n\f---++-----++2123133345"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("  +----++-2147483asdas648"), 	atoi("  +----++-2147483asdas648"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("+------+10000001"), 				atoi("+------+10000001"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi(" +-----------+0000\t\v\f\n 00"), atoi(" +-----------+0000\t\v\f\n 00"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("\t\v----------++5123--145"), 	atoi("\t\v----------++5123--145"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("\n\f----------+-+5123+145"), 	atoi("\n\f----------+-+5123+145"));
	printf("My atoi: %i\nAtoi: %i\n", ft_atoi("\r     \n\t\v\n\f---++-----++212  3133345"), atoi("\r     \n\t\v\n\f---++-----++212  3133345"));


	// ex04 - ft_putnbr_base
	ft_putnbr_base(11, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-8, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(9, "01");
	write(1, "\n", 1);
	ft_putnbr_base(111, "0123456789");

	// ex05 - ft_atoi_base	
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("11110001001000000", "01"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	fflush(stdout);

	printf("%i\n\n", ft_atoi_base("11", "0123456789abcdef"));
	printf("%i\n\n", ft_atoi_base("-8", "poneyvif"));
	printf("%i\n\n", ft_atoi_base("9", "01"));
	printf("%i", ft_atoi_base("111", "0123456789"));

	printf("---Expected-output---\n");
	printf("-2147483648__2147483647__0__69__-42_0_0_0_12_0\n");
	printf("----Actual---output---\n");
	printf("%d__",ft_atoi_base("  +-+-+-cbeiehdgeh123","abcdefgihj"));
	printf("%d__",ft_atoi_base("   ----++--+7FFFFFFFa","0123456789ABCDEF"));
	printf("%d__",ft_atoi_base("++-n","nul"));
	printf("%d__",ft_atoi_base("baf","abcdefgh"));
	printf("%d_",ft_atoi_base("  -+-+-+-+-+--+ahahah","ha"));
	printf("%d_",ft_atoi_base(" +-+-++---+--+xd","asdfghj+qwert"));
	printf("%d_",ft_atoi_base(" -+asdfg","asdfg-hjkl"));
	printf("%d_",ft_atoi_base(" -+-+++-","asdfg hjkl"));
	printf("%d_",ft_atoi_base(" \v-+-+++-asd","asdfghjkl"));
	printf("%d\n",ft_atoi_base(" -+-+++-","asdfghjkdl"));

}
