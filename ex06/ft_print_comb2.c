#include <unistd.h>

void	ft_print_comb2(void)
{

	char	c11;
	char	c12;
	char	c21;
	char	c22;

	c11 = '0';
	while (c11 <= '9')
	{
		c12 = '0';
		while (c12 <= '9')
		{
			c21 = '0';
			while (c21 <= '9')
			{
				c22 = '0';
				while(c22 <= '9') 
				{
					if ((c11 < c21) || (c11 == c21 && c12 < c22))
					{
						write(1, &c11, 1);
						write(1, &c12, 1);
						write(1, " ", 1);
						write(1, &c21, 1);
						write(1, &c22, 1);
						if (!(c11 == '9' && c12 == '8' && c21 == '9' && c22 == '9'))
						{	
							write(1, ", ", 2);
						}
					}
					c22++;
				}
				c21++;
			}
			c12++;
		}
		c11++;
	}
	
}

int main(void)
{
	ft_print_comb2();
	return (0);
}


