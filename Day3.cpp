// arrray
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
 int lucky[]={4, 6, 8, 10};
 cout<<lucky[1];
 lucky[2]=7;
 cout<<lucky[2];
return 0;
}
// arrray
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
 int lucky[20]={4, 6, 8, 10};
 lucky[10]=700;
 cout<<lucky[10];
return 0;
}

// functions
#include <iostream>
#include <cmath>
using namespace std;
void sayHi()
{
    cout<<"hello user";
}
int main()
{ 
 
return 0;
}
// outputis null
#include <iostream>
#include <cmath>
using namespace std;
void sayHi()
{
    cout<<"hello user";
}
int main()
{ 
 sayHi();
return 0;
}
// outputis hhello user
#include <iostream>
#include <cmath>
using namespace std;
void sayHi(string name)
{
    cout<<"hello "<<name;
}
int main()
{ 
 sayHi("chinmay");
return 0;
}
// output is hello chinmay
#include <iostream>
#include <cmath>
using namespace std;
void sayHi(string name, int age)
{
    cout<<"hello "<<name<<endl;
    cout<<"you are "<<age <<"years old";
}
int main()
{ 
 sayHi("chinmay", 59);
return 0;
}
// outputt is hello chinmay you are 59 years old
// idk why but i was getting error when i was running the same function godd knows but i debugged it it was just an extra semicolon

// advantages of using functions. you can reuse the code agina and again

#include <iostream>
#include <cmath>
using namespace std;
void sayHi(string name, int age)
{
    cout<<"hello "<<name<<endl;
    cout<<"you are "<<age <<"years old"<<endl;
}
int main()
{ 
 sayHi("chinmay", 59);
 sayHi("chagan", 69);
 sayHi("baburao", 23);
return 0;
}


// return statement
#include <iostream>
#include <cmath>
using namespace std;
double cube(double num)
{
    double result=num*num*num;
    return result;
}
int main()
{ 
    double answer=cube(4);
    cout<<answer;
 
return 0;
}


// if statements
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    bool isMale=false;
    if(isMale){
        cout<<"you are a male";

    }
    else{
        cout<<"you are a female";
    }
   
 
return 0;
}
// if statements
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    bool isMale;
    cin>>isMale;

    if(isMale){
        cout<<"you are a male";

    }
    else{
        cout<<"you are a female";
    }
   
 
return 0;
}

// and operator (&&&)both conditions need to be true for the first outcome

#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    bool isMale;
    bool isTall
    cin>>isMale;
    cin>>isTall;

    if(isMale&&isTall){
        cout<<"you are a male and you are tall";

    }
    else{
        cout<<"you are a male but you are short";
    }
   
 
return 0;
}

// or function if either one is true you will get the first outcome(||)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    bool isMale;
    bool isTall
    cin>>isMale;
    cin>>isTall;

    if(isMale||isTall){
        cout<<"you are a male and you are tall";

    }
    else{
        cout<<"you are a male but you are short";
    }
   
 
return 0;
}

// nested else if
// ! is used for negations

#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    bool isMale;
    bool isTall;
    cin>>isMale;
    cin>>isTall;

    if(isMale&&isTall){
        cout<<"you are a male and you are tall";

    }
    else if(isMale&& !isTall){
        cout<<"you are short male";
    }
    else if(!isMale&& isTall){
        cout<<"you are tall female";
    }
    else{
        cout<<"you are a short female";
    }
 
return 0;
  }

//   more if statements

#include <cmath>
#include <iostream>
using namespace std;
int getMax(int num1, int num2) {
  int result;
  if (num1 > num2) {
    result = num1;
  } else {
    result = num2;
  }
  return result;
}

int main() {
  int num1, num2; 
  cout<<"find out the largest number"<<endl;
  cout << "enter you first number"<< endl;
  cin >> num1;
  cout << "enter you second number" << endl;
  cin >> num2;
  cout << "answer is"<<getMax(num1, num2);

  return 0; 
}


