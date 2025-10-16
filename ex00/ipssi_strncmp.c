int ipssi_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	i = 0;

	while (s1[i] == s2[i] && i <= n)
	{
		i++;
	}
	return (s1[i] - s2[i]);	
}
int main ()
{
	ipssi_strncmp("routre","phose",2);
}
