#include "../include/functions.h"
// diagonal matrix is a matrix in which the entries outside the main diagonal are all zero
bool DiagonalMatrix(long ** array, long n)
{
    long flag = 0;
    long target = (n*n)-n;
    for (size_t i = 0; i < (size_t)n; i++)
    {
        for (size_t j = 0; j < (size_t)n; j++)
        {
            if( (i != j) && (*(*(array + i) + j) == 0))
            {
                flag++;
            }
        }

    }
    if(flag == target)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool SymmetricMatrix(long ** array, long n)
{
    long flag = 0;

    // create new array
    long ** arrayNew;

    arrayNew = new long*[n];
    for (size_t i = 0; i < (size_t)n; i++)
    {
        *(arrayNew + i) = new long[n];
    }


    for (size_t i = 0; i < (size_t)n; i++)
    {
        for (size_t j = 0; j < (size_t)n; j++)
        {
            (*(*(arrayNew + j) + i)) = (*(*(array + i) + j));
        }

    }

    for (size_t i = 0; i < (size_t)n; i++)
    {
        for (size_t j = 0; j < (size_t)n; j++)
        {
            if((*(*(arrayNew + i) + j) == (*(*(array + i) + j))))
            {
                flag++;
            }
        }

    }
    for (size_t i = 0; i < (size_t)n; i++)
    {
        delete [] *(arrayNew + i);
    }
    delete [] arrayNew;
    if(flag == n*n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool UnitMatrix(long ** array, long n)
{
    long flag = 0;
    long target = (n*n);
    for (size_t i = 0; i < (size_t)n; i++)
    {
        for (size_t j = 0; j < (size_t)n; j++)
        {
            if(i != j)
            {
                if((*(*(array + i) + j) == 0))
                flag++;
            }
            else
            {
                if((*(*(array + i) + j) == 1))
                flag++;
            }
        }

    }
    if(flag == target)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void PrintArray(long ** array, long n)
{
    cout << "--------- Input Matrix ------------\n";

    for (size_t i = 0; i < (size_t)n; i++)
    {
        cout << "|";
        for (size_t j = 0; j < (size_t)n; j++)
        {
            cout << *(*(array + i) + j);
            if(j + 1 != (size_t)n)
            {
                cout << " ";
            }
        }
        cout << "|\n";
    }
    cout << "-----------------------------------\n";
}
