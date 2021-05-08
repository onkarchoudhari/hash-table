#include <math.h>

#include "prime.h"

/* \brief   returns whether number is prime or not 
 * \param   x   number to be checked
 * \return  1   prime
 *          0   not prime 
 *          -1  undefined (i.e. x < 2)
 */
int is_prime(const int x) {
    if (x < 2) { return -1;}
    if (x < 4) { return 2;}
    if ((x % 2) == 0) {return 0;}

    for (int i = 3; i <= floor(sqrt((double)x)); i += 2) {
        if ((x % i) == 0) {
            return 0;
        }
    }
    return 1;
}


/* \brief   returns next prime after the number
 * \param   x   start number
 * \return  current or next prime number
 */
int next_prime(int x) {
    while (is_prime(x) != 1) {
        x++;
    }
    return x;
}
