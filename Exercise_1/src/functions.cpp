#include "../include/functions.h"
// 1 + r + r2 + ... + rn
long SequenceSum(long * rptr, long * nptr)
{
    long sum = 1;
    for (size_t i = 1; i <= (size_t)*nptr; i++)
    {
        sum += i*(*rptr);
    }
    return sum;
}
