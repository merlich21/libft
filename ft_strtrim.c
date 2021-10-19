/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:16:03 by merlich           #+#    #+#             */
/*   Updated: 2021/10/19 22:05:04 by merlich          ###   ########.fr       */
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

static void	ft_trim_begin(char const *s1, char const *set, size_t *min)
{
	size_t	i;	
	size_t	j;

	i = 0;
	j = 0;
	while ((i <= ft_strlen(s1)) && (j < ft_strlen(set)))
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (s1[i] == set[j])
			{
				*min = *min + 1;
				break ;
			}
			j++;
		}
		i++;
	}
	return ;
}

static void	ft_trim_end(char const *s1, char const *set, size_t *max)
{
	size_t	i;	
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while ((i) && (j < ft_strlen(set)))
	{
		j = 0;
		while (j < ft_strlen(set))
		{
			if (s1[i] == set[j])
			{
				*max = *max - 1;
				break ;
			}
			j++;
		}
		i--;
	}
	return ;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	min;
	size_t	max;
	size_t	n;
	char	*trim_str;

	min = 0;
	if (NULL == s1 || NULL == set)
		return (NULL);
	max = ft_strlen(s1) - 1;
	n = 0;
	trim_str = malloc(ft_strlen(s1) + 1);
	if (NULL == trim_str)
		return (NULL);
	if (*s1 == '\0')
		*trim_str = '\0';
	else
	{
		ft_trim_begin(s1, set, &min);
		ft_trim_end(s1, set, &max);
		while (min <= max)
		{
			trim_str[n] = s1[min];
			n++;
			min++;
		}
		trim_str[n] = '\0';
	}
	return (trim_str);
}
