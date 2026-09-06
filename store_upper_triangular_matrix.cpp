#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3];
    int i,j,k=0;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
               b[k]=a[i][j];
                k++;
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}