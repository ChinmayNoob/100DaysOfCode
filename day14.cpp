#include<bits/stdc++.h>
using namespace std;
// void toggletring(char str[])
// // {
//    for (int i = 0; i < str[i]; ++i)
//    {
//       if(str[i]>='a' && str[i]<='z' )
//       {
//          str[i]=str[i]+'a'-'A';
//       } 
//       else if(str[i]>='A' && str[i]<='Z' )
//       {
//          str[i]=str[i]+'A'-'a';
//       } 
//         }
// }
// int main()
// {
//    char str;
//    getline(cin,str);
//    cout<<toggletring(str)<<endl;
//    return 0;

// }
// int main()
// {
//    string str;
//    cin>>str;
//    for (int i = 0; i < str.length(); ++i)
//    {
//       /* code */
   
//    if(islower(str[i]))
//    {
//       str[i]=isupper(str[i]);
//    }
//    else{
//       str[i]=islower(str[i]);
//    }

// }
   
// }



int main(){

string str;

cin>>str;

for(int i=0;i<str.length();i++){

    if(isupper(str[i])) str[i]=tolower(str[i]);

    else

    str[i]=toupper(str[i]);

}

cout<<str;

    return 0;

}