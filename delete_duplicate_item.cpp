# include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cout<<"\ncreation of array\n";
    cout<<"enter size of array :";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"__________________\n";
    cout<<"display of array\n";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n__________________\n";
    cout<<"deletion of duplicate item in array\n";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}