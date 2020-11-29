
#include "../include/functions.h"


int main(int argc, char const *argv[])
{

    long n;
    long ** array;
    if(argc != 2)
    {
        cout << "Wrong Input, Try Again!!\n";
        exit(-1);
    }
    else
    {
        n = atol(argv[1]);
        array = new long*[n];
        cout << "Fill the Matrix\n";
        for (size_t i = 0; i < (size_t)n; i++)
        {
            *(array + i) = new long[n];
        }
        for (size_t i = 0; i < (size_t)n; i++)
        {
            for (size_t j = 0; j < (size_t)n; j++)
            {
                cout << "[" << i << "]" << "[" << j << "] =";
                cin >> *(*(array + i) + j);
            }

        }

    }
    PrintArray(array,n);

    if(DiagonalMatrix(array,n))
    {
        cout << "Matrix is diagonal\n";
    }
    else
    {
        cout << "Matrix is not diagonal\n";
    }

    if(SymmetricMatrix(array,n))
    {
        cout << "Matrix is Symmetric\n";
        cout << "Matrix is Inverted\n";
    }
    else
    {
        cout << "Matrix is not Symmetric\n";
        cout << "Matrix is not Inverted\n";
    }
    if(UnitMatrix(array,n))
    {
        cout << "Matrix is Unit\n";
    }
    else
    {
        cout << "Matrix is not Unit\n";
    }
    for (size_t i = 0; i < (size_t)n; i++)
    {
        delete [] *(array + i);
    }
    delete [] array;

    return 0;
}
