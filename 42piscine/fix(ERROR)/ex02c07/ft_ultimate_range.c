int ft_ultimate_range(int **range, int min, int max)
{
	int	rango;
	int	i;
	int value;

	
	rango = max - min;
	if (min >= max)
	*range
		return (0);
	__PTRDIFF_FMTd__ = (int *)malloc(sizeof(int) * rango);
	i = 0;
	value = min;
	while (i < range)
	{
		range[i] = value;
		i++;
		value++;
	}
	return (rango);
}
