#include <iostream>

using namespace std;

int main() {

   string a;
   string b;
   cin>>a>>b;
   cout<<a.size()<<endl;
   cout<<b.size()<<endl;
   cout<<a+b<<endl;
   char c=a[0];
   a[0]=b[0];
   b[0]=c;
   cout<<a<<" "<<b; 
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int n=s.size();
   for(int i=0,j=n-i-1;i<n/2;i++,j--)
   {
      if(s[i]!=s[j])
      {
         cout<<"NO";
         break;
      }
      else{
         cout<<"YES";
         break;
      }
   }
   
}