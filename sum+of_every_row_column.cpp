# include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"enter values in array:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<'\n';
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"sum of every row\n";
    for(int i=0;i<3;i++)
    {
        int row=0;
        for(int j=0;j<3;j++)
        {
            row+=arr[i][j];
        }
        cout<<row<<"\n";
    }
    cout<<"sum of every column\n";
    for(int j=0;j<3;j++)
    {
        int col=0;
        for(int i=0;i<3;i++)
        {
            col+=arr[i][j];
        }
        cout<<col<<"\n";
    }
}