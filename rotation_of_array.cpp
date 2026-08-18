#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n,pos,ele,temp;
    cout<<"enter value of n"<<endl;
    cin>>n;
    cout<<"enter the position where u eant to do left notation"<<endl;
    cin>>pos;
    cout<<"enter elements"<<endl;
    if (pos>n)
    {
        pos=pos%n;
    }
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<pos;i++)
    {
        temp=a[0];
        for(int j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"left rotation at "<<pos<<"is"<<endl;
    int k;
    cout<<"enter k";
    cin>>k;
    for (int i=0;i<k;i++)
    {
        int last=a[n-1];
        for (int i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=last;
    }
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}