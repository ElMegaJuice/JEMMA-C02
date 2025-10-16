int ipssi_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	while (*s1 != '\0' && *s2 !='\0')
	{
		while (i < n)
		{
			if (s1[i] < s2[i])
			{
				return -233;
			}
			else if (s1[i] > s2[i])
			{
				return 233;
			}
			else if (s1[i] == s2[i])
			{
				i++;
				return 0;
			}
		
		}
	}	
}
int main ()
{
	ipssi_strncmp("poutre","chose",3);
}
