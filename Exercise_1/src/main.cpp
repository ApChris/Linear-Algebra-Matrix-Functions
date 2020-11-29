#include <iostream>
#include <cstddef>
#include "../include/functions.h"
using namespace std;

int main(int argc, char const *argv[])
{
    long r;
    long n;
    long * rptr = &r;
    long * nptr = &n;

    if(argc != 3)
    {
        cout << "Wrong Input, Try Again!!\n";
        exit(-1);
    }
    else
    {
        *rptr = atol(argv[1]);
        *nptr = atol(argv[2]);

        cout << "r = " << *rptr << endl << "n = " << *nptr << endl;
        cout << "rn = " << SequenceSum(rptr,nptr) << endl;
    }
    return 0;
}
