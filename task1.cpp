//develop a program of simple calculator that performs basic operations using c++ ..
#include<iostream>
#include<math.h>
using namespace std;
 int cal(){
    char op;
    float a,b;
    float add,sub,mult,div,sq;
    cout<<" ------------ SIMPLE CALCULATOR ------------"<<endl<<endl;
    cout<<"ENTER ANY OPERATION OF YOUR CHOICE('+','-','*','/') : "<<endl;
    //cout<<"1.ADDITION  "<<endl<<"2.SUBSTRACTION"<<endl<<"3.MULTIPLICATION "<<endl<<"4.DIVISION"<<endl;
    cin>>op;
    cout<<"ENTER TWO NUMBER :"<<endl;
    cin>>a;
   cin>>b;
    switch(op)
    {
        case '+':
        add=a+b;
        cout<<"ADDITION OF TWO NUMBER ="<<add; 
        break;
        case '-':
        sub=a-b;
        cout<<"SUBSTRACTION OF TWO NUMBER ="<<sub;
        break;
        case '*':
        mult=a*b;
        cout<<"MULTIPLICATION OF TWO NUMBER ="<<mult;
        break;
        case '/':
         div=a/b;
         cout<<"DIVISION OF TWO NUMBER ="<<div;

}
}
int main()
{
   
    cal(); 
    cout<<endl;
    cal();
    cout<<endl;
}