#include <iostream>
#include <stack>

using namespace std;

int prec (char ch){
 // Gives precedence to different operators
 switch (ch) {
  case '^':
   return 5;
  case '/':
   return 4;
  case '*':
   return 4;
  case '+':
   return 2;
  case '-':
   return 1;
  default :
   return 0;
 }
}

bool isOperand(char ch){
 // Finds out is a character is an operand or not
 if ((ch>='0' && ch<='9') || (ch>='a' && ch<='z'))
  return true;
 else
  return false;
}

string postFix (string infix){
 string pfix = "";
 stack<char> opstack;
 
 for (int i=0; i<infix.length(); i++){
  // Scan character by character
  if (isOperand(infix[i]))
  {
   pfix += infix[i];
  }
  else if (infix[i] == '(')
  {
   opstack.push(infix[i]);
  }
  else if (infix[i] == ')')
  {
   // Retrace to last ( closure
   while (opstack.top() != '(')
   {
    pfix += opstack.top();
    opstack.pop();
   }
   // Remove the '(' found by while loop
   opstack.pop();
  }
  else
  {
   // pop out stuff till we find '(' or stack is empty or 
   // precedence of current op is <= the op on top
   while ( !opstack.empty() &&
     opstack.top()!='(' &&
     prec(infix[i]) <= prec(opstack.top()) )
     {
      pfix += opstack.top();
      opstack.pop();
     }
     
   opstack.push(infix[i]);
  }
 }
 
 // pop out remaining characters of stack
 while (!opstack.empty())
 {
  pfix += opstack.top();
  opstack.pop();
 }
 return pfix;
}

int main (){
int t;
cin>>t;
while(t--) { 
string infix;
 while (cin >> infix)
  cout << postFix (infix)<<endl;
  }
 //system ("pause");
 return 0;
}
