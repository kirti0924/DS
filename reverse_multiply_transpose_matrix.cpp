#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"original matrix\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"transpose of matrix\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
    cout<<"reverse of matrix\n";
    for(int i=2;i>=0;i--)
    {
        for(int j=2;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"multiplication of matrix\n";
    int arr2[2][2]={1,2,3,4};
    int arr3[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr3[i][j]=0;
            for(int k=0;k<2;k++)
            {
                arr3[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<"\n";
    }
}