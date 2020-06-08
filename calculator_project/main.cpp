#include <iostream>
#include <unistd.h>
#include <windows.h>
using namespace std;

//function to enter_number a number
void enter_number(){
cout<< "________ \n"<<endl;
Beep(400, 500); //to give it a beep sound
cin.get(); //to give it a beep sound
}

// Addition Function
float Addition( float num){
float addnum;
cin>>addnum;
float addnum2 = addnum + num;
return addnum2;

}

// Subtraction Function
float Subtraction( float num){
float addnum;
cin>>addnum;
float addnum2 = num - addnum;
return addnum2;
}

// Multiplication Function
float Multiply( float num){
float addnum;
cin>>addnum;
float addnum2 = num * addnum;
return addnum2;
}

// Division Function
float Division( float num){
float addnum;
cin>>addnum;
float addnum2 = num / addnum;
return addnum2;
}
// Calculating function
float Calculator(){
float answer;
string A;

enter_number();
cin>>answer;
cin>>A;

while(true){
float B;
if (A == "+"){
   B = Addition(answer);

}
else if (A == "-"){
      B = Subtraction(answer);

}
else if (A == "*"){
      B = Multiply(answer);

}
else if (A == "/"){
      B = Multiply(answer);

}
else if (A == "="){
    cout<< "Your answer is "<<answer<<endl;

}
else if (A == "cl"){
      return Calculator();

}
answer = B;
cin>>A;
}}


int main()
{
system("COLOR 8E"); //to give the background and text color

while(true){
    string Z;
    sleep(1); //delay text
    cout<<"Welcome to Captain Vee's Simple Calculator \n"<<endl;
    sleep(1); //delay text
    cout<<"Press S to start, press cl to restart"<<endl;
    cin>>Z;
    if (Z == "S"){
        Calculator();
        return 0;

    }
    else {
        cout <<"please enter a valid command \n\n"<<'\a'<<endl;
    }
}
}


