/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 11:00:28 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/04 15:06:37 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	long	ln;
	char	*arr;

	len = 1;
	ln = n;
	if (n < 0)
		len++;
	while (n /= 10)
		len++;
	if (!(arr = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	if (ln < 0)
	{
		arr[0] = '-';
		ln *= -1;
	}
	arr[len--] = '\0';
	while (ln / 10)
	{
		arr[len--] = (ln % 10) + '0';
		ln /= 10;
	}
	arr[len] = (ln % 10) + '0';
	return (arr);
}
