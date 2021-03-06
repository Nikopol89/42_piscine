/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:37:02 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/10 12:41:10 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (3);
}

int		ft_strlen(char *str)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = (ft_strlen(str) - 1);
	while (i >= 0)
	{
		if (ft_alphanum(str[i]) == 2 && ft_alphanum(str[i - 1]) == 3)
		{
			str[i] = str[i] - 32;
		}
		else if (ft_alphanum(str[i]) == 1 && ft_alphanum(str[i - 1]) != 3)
		{
			str[i] = str[i] + 32;
		}
		i--;
	}
	return (str);
}
