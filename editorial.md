#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    while(1)
    {
         t=rand();
        if(t>=1&&t<=10000)
        break;
       
    }
    while(t--)
    {
        int n=0;
        while(1)
        {
            n=rand();
            if(n>=3&&n<=100000)
            break;
        }
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            long long int N=1e9;
            arr[i]=0;
            while(1)
            {
                arr[i]=rand();
                if(arr[i]>=1&&arr[i]<=N)
                break;
            }
        }
    }
}
// 1
// 3
// 2 1 2
// Answer
// 2
// 1
// 5
// 1 2 1 4 3
// Answer
// 0
// 1
// 6
// 3 1 4 5 5 2
// Answer
// 3
// 1
// 8
// 4 2 1 3 5 3 6 1
// Answer
// 3
// 1
// 6
// 1 10 1 1 10 1
// Answer
// 0
// 1
// 8
// 1 10 11 1 10 11 10 1
// Answer
// 4
