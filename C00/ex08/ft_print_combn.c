#include<unistd.h>

void    ft_print_combn(int n);

void ft_print_numb2 (void)
{
    int count;

    count = '0';
    while (count <= '9')
    {
        write (1, &count, 1);
        if (count != '9')
        {
            write (1, ", ", 2);
        }
        count++;
    }
}
void    ft_print_combn(int n)
{
    int i;

    i = 0;
    while (i != n)
    {
        ft_print_numb2 (); 
        i++;
    }
}


int    main(void)
{
    ft_print_combn(2);
    write (1, "\n", 1);
    return(0);
}