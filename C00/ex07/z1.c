
id    ft_putchar(char c);

void    ft_putnbr(int nb)

{

	        int nb = long nb

			        if((10 > nb) && (nb >= 0))

					        {

							        ft_putchar(nb + ‘0’);

								        }

		        if((-10 < nb) && (nb < 0))

				        {

						        nb = -nb;

							        ft_putchar(‘-’);

								        ft_putchar(nb + ‘0’);

									        }

			                if(10 <= nb)

						                {

									                ft_putnbr(nb/10);

											                ft_putnbr(nb%10);

													                }

					                if(-10 >= nb)

								                {

											                nb = -nb;

													                ft_putchar(‘-’);

															                ft_putnbr(nb/10);

																	                ft_putnbr(nb%10);

																			                }

}
