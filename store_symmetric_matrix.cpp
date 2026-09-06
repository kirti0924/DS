#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3]={{10, 20, 30},{20, 40, 50},{30, 50, 60}};
    int A[6];
    int k = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < 3; j++)
        {
            A[k] = matrix[i][j];
            k++;  
        }
    }
    cout << "Stored elements: ";
    for(int i = 0; i < 6; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
