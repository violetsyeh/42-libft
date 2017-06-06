/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: violetyeh <violetyeh@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 16:09:54 by violetyeh         #+#    #+#             */
/*   Updated: 2017/06/05 17:26:20 by violetyeh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char*)malloc((ft_strlen(s1) + 1) * (sizeof(char)));
	if (s2 == NULL)
		return(NULL);
	return (ft_strcpy(s2, s1)); 
}
