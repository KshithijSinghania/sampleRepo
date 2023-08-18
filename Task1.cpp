@@ -0,0 +1,77 @@
//HELLO,
//I AM KSHITHIJ SINGHANIA FROM ELECTRICAL DEPARTMENT
//THIS IS MY TASK 1
//HOPE YOU CONSIDER MY EFFORT :)

#include <iostream>
using namespace std;
int main(){
    int choice=0;
    cout<<"enter 1 for addition"<<endl;
    cout<<"enter 2 for multiplication"<<endl;
    cout<<"enter 3 for division"<<endl;
    cout<<"enter 4 for substraction"<<endl;
    cout<<"enter 5 for exponential function"<<endl;
    cout<<"enter 6 for sine function"<<endl;
    cout<<"enter 7 for cosine function"<<endl;
    cout<<"enter 8 for tangent function"<<endl;
    cin>>choice;
    float num1=0.00,num2=0.00;
    if(choice<=4 && choice>0){
        cout<<"enter 2 numbers"<<endl;
        cin>>num1>>num2;
    }
    else if(choice==5){
        cout<<"enter base"<<endl;
        cin>>num1;
        cout<<"enter exponent"<<endl;
        cin>>num2;
    }
    else if(choice>5&&choice<=8){
        cout<<"enter number"<<endl;
        cin>>num1;
    }
    else{
        cout<<"WRONG CHOICE"<<endl;
    }
    float store=1.00;
    switch(choice){
        case 1:
        num1=num1+num2;
        break;

        case 2:
        num1=num1*num2;
        break;

        case 3:
        num1=num1/num2;
        break;

        case 4:
        num1=num1-num2;
        break;

        case 5:
        for(int i=1;i<=num2;i++){
            store=store*num1;
        }
        num1=store;
        break;

        case 6:
        num1= num1 - ((num1*num1*num1)/6.00) +((num1*num1*num1*num1*num1)/120.00);
        break;

        case 7:
        num1=1-((num1*num1)/2.00)+((num1*num1*num1*num1)/24.00);
        break;

        case 8:
        num1=num1+((num1*num1*num1)/3.00)+((num1*num1*num1*num1*num1)*0.4);
        break;
    }

    cout<<"the result is ="<<num1<<endl;
    cout<<"thank you :)";
}
