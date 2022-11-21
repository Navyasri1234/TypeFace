#include<iostream>
#include<string>
using namespace std;
 int arr[]={1,2,5,6,8,9};
int check(int n)
{
    int flag=0;
     if(n==0)
         flag=1;
    else
    {
         for(int i=0;i<6;i++)
       {
           if(arr[i]==n )
           {
                 flag=1;
                 break;
           }
           
       }
    }
   
      
     return flag;
}
int main()
{
   
    int count=6;
    int n,rem;
    cin>>n;
    if(n<=6)
      cout<<arr[n-1];
  else
  {
    int i=10;
    while(count!=n)
    {
       int icp=i;
        int fin_count=0;
        while(i>0)
        {
            rem=icp%10;
            icp/=10;
             if(check(rem))
            {
              fin_count++;
            }
            else
               break;
        }
        if(fin_count==2)
          count++;
        i++;
    }
    cout<<i-1;
    
  }
     
}
