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

// pointers
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=4;
    int *p_x=&x;
    cout<<"addr x;"<<&x<<endl;
    cout<<"addr p_x;"<<p_x<<endl;
    cout<<"addr *p_x;"<<*p_x<<endl;
    cout<<"*p_x+1;"<<p_x+1<<endl;
    int **p_p_x=&p_x;
    cout<<"addr p_x"<<&p_x<<endl;
    cout<<"val p_p_x:"<<p_p_x<<endl;
    cout<<"val p_p_x:"<<*p_p_x<<endl;
}

