// occurence  number
#include<bits/stdc++.h>
using namespace std;
int Occurence(int arr[],int n, int X)
{
   int count=0;
   for (int i = 0; i < n; ++i)
   {
      if (X==arr[i])
      {
        count++;      }
   }
   return count;
}
int main()
{
   int n;
   int X;
   cin>>n>>X;
   int arr[n];
   for (int i = 0; i < n; ++i)
   {
     cin>>arr[i];
   }
   cout<<Occurence(arr,n,X);
   
   

}