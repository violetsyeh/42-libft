/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyeh <vyeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 16:07:43 by vyeh              #+#    #+#             */
/*   Updated: 2017/06/21 17:46:15 by vyeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

  char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = 0;
	if (c == '\0')
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
