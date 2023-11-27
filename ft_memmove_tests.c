#include "../libft.h"
#include <stdio.h>


int main(int ac, char **av)
{
	char *src = ft_strdup(av[1]);

	char *dest = src + 2;
	ft_memmove(dest, src, strlen(src));
	printf("src %p %s\ndest %p %s\n%ld\n", src, src, dest, dest, dest - src);
}
