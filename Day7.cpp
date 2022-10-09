// reference values
#include<bits/stdc++.h>
using namespace std;
int increment(int n){
    n++;
    return n;
}

int main(){
int a = 3;
cout<<a<<endl;
a=increment(a);
cout<<a<<endl;

}
// reference values
#include<bits/stdc++.h>
using namespace std;
void increment(int n){
    n++;

}

int main(){
int a = 3;
cout<<a<<endl;
increment(a);
cout<<a<<endl;

}
// output is 3 3
// reference values
// & is used to se reference
#include<bits/stdc++.h>
using namespace std;
void increment(int &n){
    n++;

}

int main(){
int a = 3;
cout<<a<<endl;
increment(a);
cout<<a<<endl;

}
// output is 3 4 

// swapping a number
#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 3;
  int b = 5;
  cout << a << b << endl;
  swap(a, b);
  cout << a << b << endl;
}


