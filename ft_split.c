/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:05:58 by merlich           #+#    #+#             */
/*   Updated: 2021/10/19 19:00:05 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	ft_char_counter(char const *s, char c)
{	
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (s[i + 1] != c))
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

static void	ft_search(char const *s, char c, size_t *start, size_t *index)
{
	//start = 0;
	while ((*start < ft_strlen(s)) && (s[*start] != c))
	{
		*start = *start + 1;
	}
	*index = *start;
	while ((*index < ft_strlen(s)) && (s[*index + 1] == c))
	{
		*index = *index + 1;
	}
	return ;
}

static char	*ft_left(char const *s, size_t start)
{
	size_t	k;
	char	*left;

	k = 0;
	left = (char *)malloc(ft_strlen(s) - start);
	if (NULL == left)
	{
		return (NULL);
	}
	while (k < start)
	{
		left[k] = s[k];
		k++;
	}
	left[k] = '\0';
	return (left);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	index;
	size_t	count;
	char	**tab;
	char	*tmp;

	i = 0;
	j = 0;
	start = 0;
	index = 0;
	if (NULL == s)
		return (NULL);
	tmp = (char *) s;	
	count = ft_char_counter(s, c);
	tab = (char **)malloc((count + 1) * sizeof(char *) + sizeof(NULL));
	if (NULL == tab)
		return (NULL);
	else
	{	
		while ((i <= count) && (index < ft_strlen(tmp)))
		{
			while ((tmp == s + j) && (tmp[0] == c))
			{
				tmp = tmp + 1;
				if (j == 0)
					count = count - 1;
				j++;
				if (j == ft_strlen(s))
					return (NULL);
			}
			ft_search(tmp, c, &start, &index);
			tab[i] = ft_left(tmp, start);
			index++;
			//start = index;
		//	if 
			//{
			tmp = tmp + index;
			start = 0;
			index = 0;
			//	i++;
			//	break ;
		//	}
			 i++;
		}
		tab[i] = NULL;
		return (tab);
	}
}
