/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstmap.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 18:56:03 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/10 19:30:06 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	*lstmap_f(void *content)
{
	int i;

	i = 0;
	while (((char *)content)[i] != '\0')
	{
		((char*)content)[i] = 'Z';
		i++;
	}
	return (content);
}

static void	lstmap_del(void *lst)
{
	if (lst != NULL)
		free(((t_list *)lst)->content);
}

int main(void)
{
	t_list	*l;
	t_list	*res;

	l = ft_lstnew("Monkey ");
	l->next = ft_lstnew("D. ");
	l->next->next = ft_lstnew("Luffy");
	printf("l content: %s\n", l->content);
	printf("l->next content: %s\n", l->next->content);
	printf("l->next->next content: %s\n", l->next->next->content);
	printf("%s\n", l->content);
	ft_putstr_fd(l->content, 1);
	res = ft_lstmap(l, lstmap_f, lstmap_del);
	printf("%s\n", l->content);
	return (0);
}