#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1[3];
    cout<<"enter 3 strings"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>s1[i];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(s1[i]>s1[j])
            {
                string temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<s1[i]<<endl;
    }
    return 0;
}