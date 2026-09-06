#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] ={{10, 20, 0},{30, 40, 50},{0, 60, 70}};
    int A[7];
    int k = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j || i == j + 1 || i == j - 1)
            {
                A[k] = matrix[i][j];
                k++;
            }
        }
    }
    cout << "Stored elements: ";
    for(int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
