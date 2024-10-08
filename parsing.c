#include "philosopher.h"

int	ft_isdigit_str(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_error_digit(void)
{
	printf("Error: Digit Error");
	return (1);
}

int	ft_number_negative(void)
{
	printf("Error: number must be positive.");
	return (1);
}

int	ft_parsing(int argc, char **argv)
{
	if (argc != 5 && argc != 6)
	{
		printf("Error: wrong arguments number.");
		return (1);
	}
	else if (!ft_isdigit_str(argv[1]) || !ft_isdigit_str(argv[2])
		|| !ft_isdigit_str(argv[3]) || !ft_isdigit_str(argv[4]))
		return (ft_error_digit());
	else if (argc == 6 && !ft_isdigit_str(argv[5]))
		return (ft_error_digit());
	else if (ft_atoi(argv[1]) < 1)
	{
		printf("Error: too many philosopher.");
		return (1);
	}
	else if (ft_atoi(argv[2]) <= 0 || ft_atoi(argv[3]) <= 0
		|| ft_atoi(argv[4]) <= 0)
		return (ft_number_negative());
	else if (argc == 6 && ft_atoi(argv[5]) <= 0)
		return (ft_number_negative());
	else
		return (0);
}
