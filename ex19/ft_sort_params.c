/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:36:05 by aramarak          #+#    #+#             */
/*   Updated: 2025/01/19 17:00:21 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);
/*#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}*/

void	ft_display(int len, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < len)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(int len, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < len - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 1;
		}
		else
		{
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	ft_sort(argc, argv);
	ft_display(argc, argv);
	return (0);
}
