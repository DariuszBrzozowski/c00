#include <unistd.h>

void ft_print_comb(void)
{
	char    h;
        char    d;
        char    u;

        h = '0';
        while (h <= '9')
        {
		d = h + 1;
                while (d <= '9')
                {
		       	u = d + 1;
                        while (u <= '9')
			{
                        	write(1, &h, 1);
                       		write(1, &d, 1);
                        	write(1, &u, 1);
                        	if (!((h == '7') && (d == '8') && (u == '9')))
                        	{		
                                	write(1, ", ", 2);
                        	}
                        	u++;
                        }
                        d++;

                }
                h++;
        }
}

int main(void)
{
	ft_print_comb();
	return (0);
}


