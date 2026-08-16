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
    cout<<"insertion of array\n";
    int pos,val;
    cout<<"enter position and value to be inserted :";
    cin>>pos>>val;
    for (int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
        if(i==pos)
        {
            arr[i]=val;
        }
    }
    arr[pos] = val;
    n++;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n__________________\n";
    cout<<"deletion of array\n";
    cout<<"enter position to be deleted :";
    cin>>pos;
    for (int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n__________________\n";
    cout<<"searching of array\n";
    cout<<"enter value to be searched :";
    cin>>val;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            cout<<"value found at position :"<<i<<"\n";
            break;
        }
    }
    return 0;
}