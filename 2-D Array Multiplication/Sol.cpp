#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], PR[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

  
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }


    cout << endl << "Enter elements of matrix 1" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cin >> a[i][j];
        }


    cout << endl << "Enter elements of matrix 2 " << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
           
            cin >> b[i][j];
        }


    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            PR[i][j]=0;
        }


    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                PR[i][j] += a[i][k] * b[k][j];
            }



    for(i = 0; i < r1; ++i)
    {
    for(j = 0; j < c2; ++j)
    {
        cout << " " << PR[i][j];
        if(j == c2-1)
            cout << endl;
    }
    }

    return 0;
}
