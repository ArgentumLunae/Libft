/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 15:34:34 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/10/29 16:10:43 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int offset;
	int result;
	int negative;

	offset = 0;
	result = 0;
	negative = 1;
	while ((nptr[offset] >= 9 && nptr[offset] <= 13) || nptr[offset] == 32)
		offset++;
	if (nptr[offset] == '+')
		offset++;
	else if (nptr[offset] == '-')
	{
		negative *= -1;
		offset++;
	}
	while (ft_isdigit(nptr[offset]))
	{
		result *= 10;
		result += (nptr[offset] - '0');
		offset++;
	}
	return (result * negative);
}
