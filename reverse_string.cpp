#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<"enter string"<<endl;
    cin>>s1;
    int n=s1.length();
    for(int i=n-1;i>=0;i--)
    {
        cout<<s1[i];
    }
    return 0;
}