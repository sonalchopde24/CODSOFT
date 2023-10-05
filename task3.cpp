// develop a program for  number guessing game in c++....
#include<iostream> 
using namespace std;
int main()
{
    int num, guess,trys=0;
    num=25;
    cout<<"GUESS MY NUMBER GAME \n \n";
    do{
        cout<<"ENETR A NUMBER BETWEEN 1 AND 100 :";
        cin>>guess;
        trys++;
        if(guess>num)
        cout<<"TOO HIGH "<<endl;
        else if(guess<num)
        cout<<"TOO LOW"<<endl;
        else
        cout<<" CORRECT,you gusesses it in  "<<trys<<endl;    }
        while(guess !=num);
        return 0;
}