
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  

if(s1<s2 && s1<s3){


cout<<s1;

}

else if (s2<s1 && s2<s3){

  cout<<s2;
}
else {

  cout<<s3;
}

}

void exercise_2(double A, double B, double C) {

 if((-B+sqrt(pow(B,2)-(4*A*C)))/(2*A)==sqrt(-1)) 
 {cout<<"";}

 else {
  cout<<(-B+sqrt(pow(B,2)-(4*A*C)))/(2*A)<<" ";
 }

 if((-B-sqrt(pow(B,2)-(4*A*C)))/(2*A)==sqrt(-1)) 
 {cout<<"\n";}

 else {
  cout<<(-B-sqrt(pow(B,2)-(4*A*C)))/(2*A)<<"\n";
 }


}

void exercise_3(int a, int b) {
  
  if (b==0){
  cout<<"Impossible"<<endl;
}

else
{
cout<<a/b<<endl;

}
}
void exercise_4(double n, double a, double b, double x, double y) 
{
  
  if (n>a && n>b)
  {

y=(y/100)*n;
cout<<n-y<<endl;
  }
else if(n>a)
{
x=(x/100)*n;
cout<<n-x<<endl;

}

else{
  cout<<n<<endl;
}
}

void exercise_5(char character) {
  if (character >=65 && character <=90)
  {

cout<<"upper-case alphabet"<<endl;

  }

  else if (character >=97 && character <=122)
  {
cout<<"lower-case alphabet"<<endl;

  }

  else
  {

    cout<<"not an alphabet"<<endl;
  }


}

void exercise_6(int number) {
  
switch(number){

case 0:
cout<<"Invalid input"<<endl;
break;

case 1:
cout<<"Monday"<<endl;
break;

case 2:
cout<<"Tuesday"<<endl;
break;

case 3:
cout<<"Wednesday"<<endl;
break;

case 4:
cout<<"Thursday"<<endl;
break;

case 5:
cout<<"Friday"<<endl;
break;

case 6:
cout<<"Saturday"<<endl;
break;

case 7:
cout<<"Sunday"<<endl;
break;

default:cout<<"Invalid input"<<endl;
break;
}
}

void exercise_7(double r) {
  if(r>=0){
cout<<4*3.14*pow(r,2)<<endl;
  }
  
  else
  {
    cout<<"Error: Radius cannot be negative."<<endl;
  }
}

void exercise_8(long int seconds) {
  
  if(seconds>=0)
  {
 if(seconds/3600<10)
  {

    cout<<"0"<<seconds/3600;
  }

  else{
cout<<seconds/3600;

  }

  seconds=seconds-(seconds/3600)*3600;

    if(seconds/60<10)
  {

    cout<<":0"<<seconds/60;
  }

  else{
cout<<":"<<(seconds/60);

  }

  seconds=seconds-(seconds/60)*60;

    if(seconds<10)
  {

    cout<<":0"<<seconds;
  }

  else{
cout<<":"<<seconds;

  }

  }
  
 else{

  cout<<"Error: Input seconds cannot be negative."<<endl;
 }
  
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}