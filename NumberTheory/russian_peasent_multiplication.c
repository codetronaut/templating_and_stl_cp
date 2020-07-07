/*
Here are two C routines that implement the algorithm. The first simply keeps everything in "unsigned long long" precision. This routine demonstrates the function of the algorithm, but it doesn't actually do anything that can't be done using C's built-in multiplication.

The second routine provides for a product that has twice the precision of the multiplier and multiplicand. Since this is twice as big as the largest available data type, it must be produced (and returned) as two pieces — an "upper 64 bits" half and a "lower 64 bits" half. The multiplicand must also be extended to two pieces, because the doubling process will eventually make it larger than its initial "long long" precision. Doubling the multiplicand, and adding it to the product, are more complicated operations because carries between the lower and upper pieces must be handled explicitly.

*/
/*
| C implementation of russian-peasant mult().
| 2011-11-29 - add mult128()
| 2011-11-20 -bob,mon.
*/
#include<stdio.h>
#include<stdlib.h>  // strtoull()
#include<limits.h>  // ULONG_MAX, ULLONG_MAX

unsigned long long mult(unsigned long long x, unsigned long long y);

void mult128(
    unsigned long long *upper64, unsigned long long *lower64,
    unsigned long long x64, unsigned long long y64
);

int main(int argc, char **argv)
{
    unsigned long long a, b;
    unsigned long long v;

    unsigned long long upper, lower;

    if (argc != 3) {
        fprintf(stderr, "usage: %s <x>  <y>\n", argv[0]);
        return 1;
    }

    a = strtoull(argv[1], NULL, 0);
    b = strtoull(argv[2], NULL, 0);

    v = a * b;
    printf("  %Lu * %Lu -->\n%Lu\n#--------\n", a, b, v);

    v = mult(a, b);
    printf("  mult(%Lu, %Lu) -->\n%Lu\n#--------\n", a, b, v);

    mult128(&upper, &lower, a, b);
    printf("  mult128(%Lu, %Lu) -->\n%Lu:%Lu\n#--------\n", a, b, upper, lower);
    printf("  mult128(%Lx, %Lx) -->\n%016Lx:%016Lx\n#--------\n", a, b, upper, lower);

    printf("  ULONG_MAX:\n%lu\n", ULONG_MAX);
    printf("  ULLONG_MAX:\n%Lu\n", ULLONG_MAX);
    printf("  ULLONG_MAX:\n%Lx\n", ULLONG_MAX);

    return 0;
}

unsigned long long mult(unsigned long long x, unsigned long long y)
{
    unsigned long long m = 0;
    while (x > 0 && y > 0) {
        if (x & 0x01)
            m += y;
        x >>= 1;
        y <<= 1;
    }
    return m;
}

void mult128(unsigned long long *upper64, unsigned long long *lower64, unsigned long long x64, unsigned long long y64)
{
    unsigned long long y128 = 0;
    *upper64 = *lower64 = 0;

    while (x64 > 0) {
        if (x64 & 0x01) {
            *upper64 += y128;
            if (*lower64 > ULLONG_MAX-y64)  // additive carry...
                (*upper64)++;               // ...from lower to upper
            *lower64 += y64;
        }
        x64 >>= 1;
        y128 <<= 1;
        if (y64 & 0x8000000000000000)   // multiplicative carry...
            y128++;                     // ...from lower to upper
        y64 <<= 1;
    }
}
