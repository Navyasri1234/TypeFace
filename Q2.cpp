#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int len=0,count=0;
    for(int i=0;s2[i]!='\0';++i)
	{
	len++;
	}
    for(int i=0;s1[i]!='\0';++i)
    {
        if(s1[i]==s2[len-1])
          count++;
    }
    cout<<count;
}
