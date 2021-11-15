
#include "libft.h"

int	main(void)
{
	char *p = "\0aa\0bbb";
	char **ptr = ft_split(p, '\0');
	while (*ptr)
	{
		printf("%s\n", *ptr++);
	}
	return (0);
}
