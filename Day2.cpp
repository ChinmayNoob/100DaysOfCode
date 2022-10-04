// playing with string
#include <iostream>
using namespace std;
int main()
{
    string ph="luffy";
    cout<<" strawhats"<<endl;
    cout<<ph<<endl;
    cout<<ph.length()<<endl;
    cout<<ph[4]<<endl;
    // luffy
    // 01234
    ph[0]='g';
    cout<<ph<<endl;
    cout<<ph.find("ffy", 0)<<endl;
//    output is 2 coz ffy is starting from 3rd letter 

// substring
 cout<<ph.substr(1,3)<<endl;
 string sub;
 sub=ph.substr(1,3);
 cout<<sub<<endl;
//  you can store the value of substring as a new string as shown above
   
    return 0;
} 

// working with numbers
#include <iostream>
using namespace std;
int main()
{ int wnum=5;
wnum++;
    cout<< 5;
    cout<< -4.6;
    cout<< -5+9;
    cout<< 5*4;
    cout<< 10%3;
    cout<<wnum;
    // modulus operator gives us remainder
    // c++ follows bdmas rule
    // we can also store numbers in variables

    // int for integers,float for decimals,double for decimals too
    return 0;
}
// getting before value code
#include <iostream>
using namespace std;
int main()
{ int wnum=70;
wnum--;
cout<<wnum<<endl;
return 0;
}
// adding a certain number to the variables
#include <iostream>
using namespace std;
int main()
{ int wnum=70;
wnum +=70;
cout<<wnum<<endl;
return 0;
}
// subtracting certain number to the variables
#include <iostream>
using namespace std;
int main()
{ int wnum=70;
wnum -=40;
cout<<wnum<<endl;
return 0;
}
// multiplying a certain number to the variables
#include <iostream>
using namespace std;
int main()
{ int wnum=70;
wnum *=2;
cout<<wnum<<endl;
return 0;
}
// dividing a certain number to the variables
#include <iostream>
using namespace std;
int main()
{ int wnum=70;
wnum /=5;
cout<<wnum<<endl;
return 0;
}

// maths operation of a decimaland integers give you decimal number as a output
// maths operator of  a integer+integers give you decimal number as a output
// for e.g 
#include <iostream>
using namespace std;
int main()
{ 
    cout<<10/3;
return 0;
}
// output is 3
#include <iostream>
using namespace std;
int main()
{ 
    cout<<10.00/3.00;
return 0;
}
// output is 3.33


// baisc maths functions
// adiing a maths library
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
    // power function(pow)
    cout<<pow(2,5);
    // output is 32

    // squareroot function(sqrt)
    cout<<sqrt(64);
    // outputis 8
    // you can also put decimal num in these function 

    // round function
    cout<<round(3.577);
    // outputis 4

    // ceil function(act as a greatest nteger function )
    cout<<ceil(68.1);
    // outputis 69xd

    // floor function
    cout<<floor(75.9);
    // output is 75

    // fmax and fmin
    cout<<fmax(3,5);
    // output 5
    cout<<fmin(3,5);
    // output 3
      
return 0;
}


// getting user input

// 1) for integers and characters(char)
#include <iostream>
using namespace std;
int main()
{ 
    input age;
    cout<<"enter your age :";
    cin>>age;
    cout<< "you are"<<age << "years old";
return 0;
}

// for string
#include <iostream>
using namespace std;
int main()
{ 
    string name;
    cout<<"enter your name:";
    getline(cin, name)
    cout<< "hello" << name;
return 0;
}


// building a calculator
#include <iostream>
using namespace std;
int main()
{ 
int num1,num2;
cout<<"enter your first number"<<endl;
cin>>num1;
cout<<"enter your second number"<<endl;
cin>>num2;
cout<< num1+num2;
return 0;
}
// you can also add subtract multiply,divide whatever its just a simple calculator where the user doesnt have the right to choose the arithmetical operators
