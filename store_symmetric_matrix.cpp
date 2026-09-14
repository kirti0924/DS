#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 1, 4 , 2, 2};
    int i;
    int j,n;
    for(i=0;i<6;i++)
    {
        j=i+1;
        if(arr[i]!=arr[j])
        {
            n=arr[i];
        }
        // else
        // {
        //     n=arr[i];
        // }
    }
    cout<<n;
}
