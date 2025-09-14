/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 01:04:47 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 01:04:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(char *str)
{
    char    *cpy;
    int size;
    int i;

    size = ft_strlen(str);
    cpy = malloc(size*sizeof(char) + 1);
    i = 0;
    if (cpy == NULL)
        return (NULL);

    while (str[i])
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}