// revision
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout>>7/2*3;
    // output is 9

    cout>>3*7/2;
    // output is 10
}
// coz the precedence level is same for mulitiplication/divisio and modulus

// ranges of different datatypes
// -10^9<int<10^9
// -10^12<long int<10^12
// -10^18<long long int<10^12

// overflow
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a=100000;
 int b=100000;
 int c=a*b;
 cout<<c<<endl;
}

// conditional statement
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=2;
    int b=3;
    int c=4;
    //&& and || operators
    cout<<((b>a)&&(b>c));
    //output is 0
    cout<<((b>a)||(b>c));
    //output is 1

}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    if(n%2==0){
        cout<< n <<" is an even number"<<endl;
    
    }
    else{
        cout<< n << " is a odd number"
    }
}
#include<bits/stdc++.h>
using namespace std;
int i,j;
int main(){
    int n;
    cin>> n;
    for(int i=1;i<n+1;++i){
for(j=1;j < i+1;++j){
    cout<<"*";
}
    cout<<endl;
    }
}