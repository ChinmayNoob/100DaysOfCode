/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        cout<<"hello mike"<<endl;
    }
    return 0;

}
// control flow statements
// continue-used inside the loops ,go to the next iteration to the loops otherwise end the loop;

// break used in loops and switch statements and used for the get out of the loop
// return to get ut of the function mostly used

#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        continue;
        cout<<"hello mike"<<endl;
        cout>>i>>endl;
    }
    return 0;

}
// for loops


#include <iostream>
using namespace std;
int main()
{
    int index=1;
    while(index<=5){
        cout<<index<<endl;
        index++;
    }
    for(int i=1;i<=5;i++){
        cout<<"monkey.d.luffy"<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int index=1;
    int sh[]={1,2,5,7,9,4,3};
   
    for(int i=0;i<7;i++){
        cout<<sh[i]<<endl;
    }
    return 0;
}/*


// exponent function
#include <iostream>
using namespace std;

int power(int baseNum, int powerNum){
    int result=1;
    for(int i=0;i< powerNum;i++){
        result=result*baseNum
    }
    return result;
}
int main()
{
    cout<<power(2,3);
    return 0;
}

// 2d arrrays

#include <iostream>
using namespace std;


int main()
{
   int numbergrid[3][2  ]={
{1,2},{2,3},{5,6}

   };
   cout<<numbergrid[1][0];

   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cout<<numbergrid[i][j];
    }
   }
   cout<<<<endl;
    return 0;
}


// more about arrrays
// agar array mai[] bracket ke an
dar likhi huvi value ke barabar ya ussizyada value daloge toh segmenttation error ata hai

*/#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef a
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
     int n;
     cin>>n;
     if(n==1){
        cout<<"one";
     }
     else if(n==2){
        cout<<"two";
     }else if(n==3){
        cout<<"three";
     }else if(n==4){
        cout<<"four";
     }else if(n==5){
        cout<<"five";
     }else if(n==6){
        cout<<"six";
     }else if(n==7){
        cout<<"seven";
     }else if(n==8){
        cout<<"eight";
     }else if(n==9){
        cout<<"nine";
     }
     else if(n>9 && n%2==0){
        cout<<"number is even";
     }
     else{
        cout<<"number is odd";
     }



} 