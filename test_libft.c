/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_libft.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 13:40:47 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/12 11:00:52 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <bsd/string.h>
#include <ctype.h>
#include "libft.h"

int	main(int argc, char *argv[argc])
{
	int		i;
	size_t	n;
	size_t	m;
	char	c;
	char	ptr1[500];
	char	ptr2[500];
	char	*ptr3;
	char	**ptrptr;

	if (argc != 2)
	if (!strcmp(argv[1], "ft_atoi"))
	{
		strncpy(ptr1, "\t\v\f\r \n-2147483649continueing", 50);
		printf("the number is: %i\n", atoi(ptr1));
		printf("the number is: %i\n", ft_atoi(ptr1));
		return (0);
	}
	if (!strcmp(argv[1], "ft_bzero"))
	{
		strncpy(ptr1, "testing monkeys, monkeys to test with.", 50);
		bzero(ptr1, 5);
		write(1, ptr1, 50);
		write(1, "\n", 1);
		strncpy(ptr1, "testing monkeys, monkeys to test with.", 50);
		ft_bzero(ptr1, 5);
		write(1, ptr1, 50);
		write(1, "\n", 1);
	}
	if (!strcmp(argv[1], "ft_calloc"))
	{
		m = 0;
		n = 0;
		ptr3 = (char *)calloc(m, n);
		strncpy(ptr3, "this is something", 50);
		printf("%s\n", ptr3);
		free(ptr3);
		return (0);
	}
	if (!strcmp(argv[1], "ft_isalnum"))
	{
		i = 250;
		while (i < 530)
		{
			printf("%i into isalnum: %i\n", i, isalnum(i));
			printf("%i into ft_isalnum: %i\n", i, ft_isalnum(i));
			i++;
		}
		return (0);
	}
	if (!strcmp(argv[1], "ft_isalpha"))
	{
		c = ' ';
		while (c <= 'z')
		{
			printf("%c into isalpha: %i\n", c, isalpha(c));
			printf("%c into ft_isalpha: %i\n", c, ft_isalpha(c));
			c++;
		}
		return (0);
	}
	if (!strcmp(argv[1], "ft_isascii"))
	{
		i = 0;
		while (i <= 130)
		{
			printf("%i into isascii: %i\n", i, isascii(i));
			printf("%i into ft_isascii: %i\n", i, ft_isascii(i));
			i++;
		}
		return (0);
	}
	if (!strcmp(argv[1], "ft_isdigit"))
	{
		c = ' ';
		while (c <= 'z')
		{
			printf("%c into isdigit: %i\n", c, isdigit(c));
			printf("%c into ft_isdigit: %i\n", c, ft_isdigit(c));
			c++;
		}
		return (0);
	}
	if (!strcmp(argv[1], "ft_isprint"))
	{
		i = 0;
		while (i <= 127)
		{
			printf("%i into isprint: %i\n", i, isprint(i));
			printf("%i into ft_isprint: %i\n", i, ft_isprint(i));
			i++;
		}
		return (0);
	}
	if (!strcmp(argv[1], "ft_itoa"))
	{
		i = -0;
		ptr3 = ft_itoa(i);
		printf("%s\n", ptr3);
		return (0);
	}
	if (!strcmp(argv[1], "ft_memccpy"))
	{
		n = 75;
		c = 'z';
		strncpy(ptr1, "alle eendjes zwemmen in het water", 100);
		write(1, memccpy(ptr2, ptr1, c, n), 30);
		write(1, "\n", 1);
		write(1, ptr2, 30);
		write(1, "\n", 1);
		strncpy(ptr1, "alle eendjes zwemmen in het water", 100);
		write(1, ft_memccpy(ptr2, ptr1, c, n), 30);
		write(1, "\n", 1);
		write(1, ptr2, 30);
		write(1, "\n", 1);
		return (0);
	}
	if (!strcmp(argv[1], "ft_memchr"))
	{
		n = 1000;
		c = 'q';
		strncpy(ptr1, "we gotta find it, because the q will continue", 100);
		write(1, ft_memchr(ptr1, c, n), 50);
		write(1, "\n", 1);
		strncpy(ptr1, "the q will continue this sentence, so find it.", 100);
		write(1, memchr(ptr1, c, n), 50);
		write(1, "\n", 1);
		return (0);
	}
	if (!strcmp(argv[1], "ft_memcmp"))
	{
		n = 24;
		strncpy(ptr1, "This one will be compared to the other.", 100);
		strncpy(ptr2, "This one will Bave the other compared to it.", 100);
		printf("%i\n", ft_memcmp(ptr1, ptr2, n));
		printf("%i\n", memcmp(ptr1, ptr2, n));
		return (0);
	}
	if (!strcmp(argv[1], "ft_memcpy"))
	{
		n = 24;
		strncpy(ptr1, "", 100);
		write(1, memcpy(ptr2, ptr1, n), 50);
		write(1, "\n", 1);
		strncpy(ptr1, "", 100);
		write(1, ft_memcpy(ptr2, ptr1, n), 50);
		write(1, "\n", 1);
		return (0);
	}
	if (!strcmp(argv[1], "ft_memset"))
	{
		n = 10;
		strncpy(ptr1, "ik zag twee beren, broodjes smeren.", 50);
		memset(ptr1, '*', n);
		printf("%s\n", ptr1);
		ft_memset(ptr1, '0', n);
		printf("%s\n", ptr1);
		return (0);
	}
	if (!strcmp(argv[1], "ft_memmove"))
	{
		n = 90;
		strncpy(ptr1, "this is something strange", 100);
		write(1, ft_memmove(&ptr1[0], &ptr1[5], n), 50);
		write(1, "\n", 1);
		strncpy(ptr1, "this is something strange", 100);
		write(1, memmove(&ptr1[0], &ptr1[5], n), 50);
		write(1, "\n", 1);
		return (0);
	}
	if (!strcmp(argv[1], "ft_split"))
	{
		i = 0;
		ptr3 = "lorem ipsum d olor sit amet, consectetur adipiscing elit. Sed non risus. Suspendiss e";
		if (!(ptrptr = ft_split(ptr3, ' ')))
		{
			write(1, "NULL\n", 5);
			return (0);
		}
		while (ptrptr[i] != NULL)
		{
			ft_putendl_fd(ptrptr[i], 1);
			i++;
		}
		return (0);
	}
	if (!strcmp(argv[1], "ft_strchr"))
	{
		c = 'v';
		strncpy(ptr1, "abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcba~!", 100);
		printf("%s\n", strchr(ptr1, c));
		printf("%s\n", ft_strchr(ptr1, c));
		return (0);
	}
	if (!strcmp(argv[1], "ft_strlcat"))
	{
		memset(ptr1, 0, 15);
		memset(ptr1, 'r', 6);
		ptr1[14] = 'a';
		ft_putnbr_fd(ft_strlen(ptr1), 1);
		write(1, "\n", 1);
		ft_putnbr_fd(strlcat(ptr1, "lorem ipsum dolor sit amet", 15), 1);
		write(1, "\n", 1);
		ft_putnbr_fd(ft_strlcat(ptr1, "lorem ipsum dolor sit amet", 15), 1);
		write(1, "\n", 1);
		write(1, ptr1, ft_strlen(ptr1));
		return (0);
	}
	if (!strcmp(argv[1], "ft_strlcpy"))
	{
		n = 50;
		printf("def: %s, %lu\n", ptr1, ft_strlcpy(ptr1, "I wonder if this works for it too", n));
		printf("ft: %s, %s\n", ptr1, strncpy(ptr1, "I wonder if this works for it too", n));
		return (0);
	}
	if (!strcmp(argv[1], "ft_strlen"))
	{
		strncpy(ptr1, "123456789", 50);
		printf("Length of %s, strlen: %lu\n", ptr1, strlen(ptr1));
		printf("Length of %s, ft_strlen: %lu\n", ptr1, ft_strlen(ptr1));
		return (0);
	}
	if (!strcmp(argv[1], "ft_strncmp"))
	{
		n = 6;
		strncpy(ptr1, "test\0", n);
		strncpy(ptr2, "test\200", n);
		write(1, "test\200\n", 6);
		printf("%i\n", strncmp(ptr1, ptr2, n));
		printf("%i\n", ft_strncmp(ptr1, ptr2, n));
		return (0);
	}
	if (!strcmp(argv[1], "ft_strrchr"))
	{
		c = 'z';
		strncpy(ptr1, "abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcba~!", 100);
		printf("%s\n", strrchr(ptr1, c));
		printf("%s\n", ft_strrchr(ptr1, c));
		return (0);
	}
	if (!strcmp(argv[1], "ft_strnstr"))
	{
		n = 50;
		strncpy(ptr1, "MZIRIBMZIRIBMZE123", n);
		strncpy(ptr2, "MZIRIBMZE", n);
		printf("%s\n", ft_strnstr(ptr1, ptr2, ft_strlen(ptr2)));
		return (0);
	}
	if (!strcmp(argv[1], "ft_strtrim"))
	{
		strncpy(ptr2, " \t\n", 3);
		ptr3 = "  \t    \n \n ";
		printf("%s", ft_strtrim(ptr3, ptr2));
		return (0);
	}
	if (!strcmp(argv[1], "ft_tolower"))
	{
		i = -270;
		while (i < 530)
		{
			printf("regular: %i, ft: %i\n", tolower(i), ft_tolower(i));
			i++;
		}
		return (0);
	}
	if (!strcmp(argv[1], "ft_toupper"))
	{
		i = -100;
		while (i < 530)
		{
			printf("regular: %i, ft: %i\n", toupper(i), ft_toupper(i));
			i++;
		}
		return (0);
	}
	printf("function %s not recognised.\n", argv[1]);
	return (0);
}
