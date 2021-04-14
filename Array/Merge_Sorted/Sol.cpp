#include <iostream>

using namespace std;

int main()
{
    int A[5] = {2, 6, 8, 9, 11};
    
    int B[5] = {3, 4, 5, 7, 9};
    
    
    int C[10];
    
    int i = 0, j = 0, k = 0;
    
    while (i < 5 && j < 5)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
        }
        else 
        {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    if (i < 5)
    {
        for (;i<5;i++)
        {
            C[k++] = A[i];
        }
    }
    else
    {
        for(;j<5;j++)
        {
            C[k++] = B[j];
        }
    }
    

    for (int q = 0; q < 10; q++)
    {
        cout << C[q] << " ";
    }
    return 0;
}
