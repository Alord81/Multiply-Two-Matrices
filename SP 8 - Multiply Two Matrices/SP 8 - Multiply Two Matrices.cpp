#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int RandomeNumber(short From, short To)
{
    return rand() % (To - From + 1) + From;
}

void FullArrayWithOrderdNumber(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            
            arr[i][j] = RandomeNumber(1,10);
        }
    }
}

void PrintArrayInMatrix(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d\t", 2, arr[i][j]);
        }
        cout << endl;
    }
}

void MultiplyMatrix(short arr1[3][3], short arr2[3][3], short MatrixResult[3][3], short rows, short cols)
{
    int Counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Counter++;
            MatrixResult[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

int main()
{

    srand((unsigned)time(NULL));
    short arr1[3][3], arr2[3][3], arrResult[3][3];
    short cols = 3, rows = 3;

    FullArrayWithOrderdNumber(arr1, rows, cols);
    FullArrayWithOrderdNumber(arr2, rows, cols);

    cout << "Matrix1:\n";

    PrintArrayInMatrix(arr1, rows, cols);

    cout << "\nMatrix2:\n";

    PrintArrayInMatrix(arr2, rows, cols);

    cout << "\nResults:\n";
    MultiplyMatrix(arr1, arr2, arrResult,rows,cols);
    PrintArrayInMatrix(arrResult, rows, cols);

    return 0;
}