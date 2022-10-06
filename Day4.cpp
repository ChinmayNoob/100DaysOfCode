// building a calculators
#include <iostream>
using namespace std;
int main()
{ 
    int num1, num2;
    char op;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter operatior";
    cin>>op;
    cout<<"enter second number";
    cin>>num2;
    int result;
    if(op=='+'){
        result=num1+num2;

    }else if(op=='-'){
        result=num1-num2;
    }
    }else if(op=='/'){
        result=num1/num2;
    }
    }else if(op=='*'){
        result=num1*num2;
    }
    else{
        cout<<"invalid operators";

    }
    cout<<result;
   
    return 0;
} 
// switch statement
#include <iostream>
using namespace std;
string getDayofWeek(int dayNum){
    string dayName;
    uf(dayNum==0){
        dayName="sunday";
0    }
else if(dayNum==1)
{
    dayName="monday";
}
else if(dayNum==2)
{
    dayName="tuesday";
}
else if(dayNum==3)
{
    dayName="wednesday";
}
else if(dayNum==4)
{
    dayName="thursday";
}
else if(dayNum==5)
{
    dayName="friday";
}
    return dayName;

}
int main()

{
    int dayName;
    int dayNum;
    cout<<"enter your day number"<<endl;
    cin>>dayNum;
    cout<<"today is"<< getDayofWeek(int dayNum);
  
    return 0;
}
// this is to much timy
// this is to much timy
#include <iostream>
using namespace std;
string getDayofWeek(int dayNum){
    string dayName;
switch(dayNum){
    case 0:
    dayName="sunday";
    break;
    case 1:
    dayName="monday";
    break;
    case 2:
    dayName="tuesday";
    break;
    case 3:
    dayName="wednesday";
    break;
    case 4:
    dayName="thursday";
    break;

}
    return dayName;
  }



   int main()
  {


    cout<<getDayofWeek(0);
  
    return 0;
}

// while loops
#include <iostream>
using namespace std;
int main()
{
    int index=1;
    while(index<=5){
        cout<<index<<endl;
        index++;
    }
    return 0;
}