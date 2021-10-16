/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:05:58 by merlich           #+#    #+#             */
/*   Updated: 2021/10/08 18:28:34 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// static size_t	ft_strlen(char const	*s);
static size_t	ft_search(char const *s, char c);
static char		*ft_left(char const *s, size_t index);
static char		*ft_right(char const *s, size_t index);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	ind;
	char	**tab;

	i = 0;
	j = 0;
	ind = 0;
	tab = (char **)malloc(sizeof(s) + sizeof(NULL));
	if (NULL == tab)
		return (NULL);
	else
	{
		ind = ft_search(s, c);
		tab[0] = ft_left(s, ind);
		tab[1] = ft_right(s, ind);
		tab[2] = NULL;
		return (tab);
	}
	//free(tab);
}

// static size_t	ft_strlen(char const	*s)
// {
// 	size_t	i;

// 	i = 0;
// 	while(s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

static size_t	ft_search(char const *s, char c)
{
	size_t	j;

	j = 0;
	while (s[j] != c)
	{
		j++;
	}
	return (j);
}

static char	*ft_left(char const	*s, size_t	index)
{
	size_t	k;
	char	*left;

	k = 0;
	left = malloc(sizeof(s));
	while (k < index)
	{
		left[k] = s[k];
		k++;
	}
	left[k] = '\0';
	return (left);
}

static char	*ft_right(char const	*s, size_t	index)
{
	size_t	n;
	char	*right;

	n = 0;
	right = malloc(sizeof(s));
	while (s[index + 1] != '\0')
	{
		right[n] = s[index + 1];
		n++;
		index++;
	}
	right[n] = '\0';
	return (right);
}

int	main(void)
{
	char const	s[] = "";
	char		c;
	char		**tab;

	c = ':';
	tab = ft_split(s, c);
	printf("%s\n%s\n%s\n", tab[0], tab[1], tab[2]);
	free(tab[0]);
	free(tab[1]);
	free(tab[2]);
	free(tab);
	printf("%s\n%s\n%s\n", tab[0], tab[1], tab[2]);
	return (0);
}
