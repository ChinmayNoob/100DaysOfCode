// C++ program to display "Hello World"
  
// Header file for input output functions
#include <iostream>
using namespace std;
  
// Main() function: where the execution of program begins
int main()
{
    // prints hello world
    cout << "Hello World.";
  
    return 0;
}
#include <iostream>
using namespace std;
  
// Data types examples
// char-1byte char is aloso used to store characters rather than just nmbers
// short-2byte
// int-4byte for integers 
// long-4byte
// long long-8byte
// float(4bytes),double(8bytes) for storing decimals
// bool for booolean for true and false 
// bool occupies only 1 byte
//  in binary 0 means false and true means 1


int main()
{
    int variable=69;
    cout << variable;
    int variable=40;
    cout << variable;
    float a =5.73;
    cout<<a;
    double num=4.999;
    cout<<num;
    // boolean datatypes
    bool num=true;
    cout<<num;
    // output is 1
     bool num=false;
    cout<<num;
    // output is 0
  
    return 0;
}
// to know the sixe of variable
#include <iostream>
using namespace std;
int main()
{
    cout<< sizeof(int);
    cout<< sizeof(float);
    cout<< sizeof(double);
    cout<< sizeof(bool);
    return 0;
}
// outputs are :4,4,8,1

// drawing a shape
#include <iostream>
using namespace std;
int main()
{
    cout<< "   /|"<<endl;
    cout<< "  / |"<<endl;
    cout<< " /  |"<<endl;
    cout<< "/___|"<<endl;
    return 0;
}

