#include <unistd.h>

void	ft_putnbr(int nb){
	int	digit;
	char	dig_char;
	int	magn_nb;
	
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}

	if (nb >= 0 && nb <= 9)
	{
		dig_char = '0' + nb;
		write(1, &dig_char, 1);
	}
	else
	{
		magn_nb = 1;
		while (nb > magn_nb * 10)
		{
			magn_nb = magn_nb * 10;
		}
		while (magn_nb > 0)
		{
			digit = nb / magn_nb;
			dig_char = '0' + digit;
			write(1, &dig_char, 1);
			nb = nb - digit * magn_nb;
			magn_nb = magn_nb/10;
			while (magn_nb > nb){
				dig_char = '0' + 0;
			       	write(1, &dig_char, 1);
				magn_nb = magn_nb/10;
			}

		}
	}
}

int main(void){
	ft_putnbr(-70004);
	return (0);
}
