#include <stdio.h>

char *ft_strdup(char *src);

int	main()
{
	char src[] = "HOOLA COMO ESTAS";
	printf("%s", ft_strdup(src));
}