int		ft_iterative_factorial(int nb)
{
	int i;
	int fac;

	if (nb == 0)
	{
		return (1);
	}
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	i = 1;
	fac = 1;
	while (++i <= nb)
	{
		fac *= i;
	}
	return (fac);
}
