#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"enter 1st string"<<endl;
    cin>>str1;
    cout<<"enter 2nd string"<<endl;
    cin>>str2;
    string concat=str1+str2;
    cout<<"concatenated string is:"<<concat<<endl;
    return 0;
}
