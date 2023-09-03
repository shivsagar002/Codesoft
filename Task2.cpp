#include <bits/stdc++.h>
using namespace std;

int main(){
    float num1,num2,ans;
    char op;
    system("cls");
    cout<<"\t\t SIMPLE CALCULATOR"<<endl;
    cout<<"==================================================="<<endl<<endl<<endl;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    cout<<"Select operation to perform on the numbers (+,-,*,/)"<<endl;
    cin>>op;
    
    if(op=='+'){
        cout<<"Your result is: ";
        cout<<num1+num2<<endl;
    }
    else if(op=='-'){
        cout<<"Your result is: ";
        cout<<num1-num2<<endl;
    }
    else if(op=='*'){
        cout<<"Your result is: ";
        cout<<num1*num2<<endl;
    }
    else if(op=='/'){
        cout<<"Your result is: ";
        cout<<num1/num2<<endl;
    }
    else{
        cout<<"Error!! You have entered one or more wrong inputs, try again ;{";
    }
}