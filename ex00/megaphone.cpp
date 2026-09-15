#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int i = 1;
	int y = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
	{
		y = 0;
		while (av[i][y])
		{
			std::cout << (char)std::toupper(av[i][y]); 
			y++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
