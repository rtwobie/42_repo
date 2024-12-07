/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:39:37 by rha-le            #+#    #+#             */
/*   Updated: 2024/11/06 14:00:36 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	isbigger(char *arg1, char *arg2)
{
	while (*arg1 || *arg2)
	{
		if (*arg1 != *arg2)
			return (*arg1 - *arg2);
		arg1++;
		arg2++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	sort_params(int len, char *args[])
{
	int	i;
	int	j;
	int	swapped;

	i = 1;
	while (i < len)
	{
		j = 1;
		swapped = 0;
		while (j < len - i)
		{
			if (isbigger(args[j], args[j + 1]) > 0)
			{
				ft_swap(&args[j], &args[j + 1]);
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break ;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
