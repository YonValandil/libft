int	ft_isdigit(int c)
{
	int r;

	r = 0;
	if (c >= 48 && c <= 57)
		r = 1;
	return(r);
}
