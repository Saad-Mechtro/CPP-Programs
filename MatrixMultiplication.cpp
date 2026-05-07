#include<iostream>
using namespace std;

// Function to input matrix values
void GetValue(int matrix[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

// Function to multiply matrices
void ComputeAxA(int A[3][3], int B[3][3], int Result[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            Result[i][j] = 0;

            for(int k = 0; k < 3; k++)
            {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print matrix
void PrintArray(int matrix[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int A[3][3], B[3][3], Result[3][3];

    cout << "Enter values for Matrix A:\n";
    GetValue(A);

    cout << "Enter values for Matrix B:\n";
    GetValue(B);

    ComputeAxA(A, B, Result);

    cout << "\nResultant Matrix:\n";
    PrintArray(Result);

    return 0;
}
