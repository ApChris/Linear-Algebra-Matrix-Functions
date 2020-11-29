#include "../include/functions.h"
// A[i] = A[N-i]
bool CheckArray(long * array, long n)
{
    long flag = 0;
    for (size_t i = 0; i < (size_t)n/2; i++)
    {

        if(array[i] == array[n-i-1])
        {

            flag++;
        }
    }

    if(flag == n/2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void PrintArray(long * array, long n)
{
    cout << "--------- Input Matrix ------------\n";
    for (size_t i = 0; i < (size_t)n; i++)
    {
        cout << "Array[" << i << "] = " << *(array + i) << endl;
    }
    cout << "-----------------------------------\n";
}
