#include <iostream>
using namespace std;

int main(){

double numone, numtwo;
char op;
cout << "Enter Two numbers : ";
cin >> numone >> numtwo;
cout << "Enter the operation you want to perform: ";
cin >> op;
switch(op)
{
case '+':
cout << "sum : " << numone + numtwo;
break;
case '-':
cout << "subtraction : " << numone - numtwo;
break;
case '*':
cout << "Multiplication : " << numone * numtwo;
case '/':
cout << "Division : " << numone / numtwo;
break;
default:
cout << "invalid operator" << endl;
}

return 0;
}