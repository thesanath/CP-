#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   long long  int arr[n];
       for(int i=0;i<n;i++)
      cin>>arr[i];
      long long int sum=0;
      if(n%2!=0)
      {
          for(int i=1;i<n;i+=2)
          {
              if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
              sum+=0;
              else
              {
              if(arr[i-1]>arr[i+1])
              sum+=arr[i-1]-arr[i]+1;
              else
              sum+=arr[i+1]-arr[i]+1;
              }
          }
          cout<<sum<<"\n";
      }
      else
      {
        long long int arr2[n];
         arr2[0]=0;
         arr2[n-1]=0;
         long long int sum1=0;
         long long int sum2=0;
         long long int arr4[(n-2)/2];
         long long int arr5[(n-2)/2];
         int count1=0;
         int count2=0;
         for(int i=1;i<n-1;i++)
         {
             
             if(arr[i-1]>arr[i+1])
              arr2[i]=arr[i-1]-arr[i]+1;
              else
              arr2[i]=arr[i+1]-arr[i]+1;
              if(arr2[i]<0)
              arr2[i]=0;
              if(i%2==0)
             {
                 sum2+=arr2[i];
                 arr4[i/2-1]=sum2;
                 count1++;
             }
              else
             {
                 sum1+=arr2[i];
                 arr5[i/2]=sum1;
                 count2++;
             }
             
         }
         
        long long int max=sum1;
         long long int sum3=0;
         for(int i=1;i<n-1;i++)
         {
             if(i==1)
             sum3=sum2;
            else if(i!=(n-2))
             
             {
                 if(i%2!=0&&i!=2)
                 
                 sum3=arr5[(i-2)/2]+arr4[(n-2)/2-1]-arr4[(i-1)/2-1];
             }
             if(max>sum3)
             max=sum3;
    
         }
         
                  cout<<max<<"\n";
      }
	}
	return 0;
}
