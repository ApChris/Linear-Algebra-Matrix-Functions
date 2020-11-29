
#include "../include/functions.h"


int main(int argc, char const *argv[])
{

    long n;
    long * array;
    if(argc != 2)
    {
        cout << "Wrong Input, Try Again!!\n";
        exit(-1);
    }
    else
    {
        n = atol(argv[1]);
        array = new long[n];

        for (size_t i = 0; i < (size_t)n; i++)
        {
            cout << "Array[" << i << "] = ";
            cin >> *(array + i);
            cout << endl;
        }

    }
    PrintArray(array,n);
    if(CheckArray(array,n))
    {
        cout << "Result:correct" << endl;
    }
    else
    {
        cout << "Result:wrong" << endl;
    }
    return 0;
}
