/*
** ETNA PROJECT, 28/09/2018 by delapo_a
** my_nbrlen
** File description:
**      base 10
*/

int my_nbrlen( int n)
{
    int i;
    if (n < 0) {
        n = -n;
    }
    while (n > 9) {
        n /= 10;
        i++;
    }
    return i;
}