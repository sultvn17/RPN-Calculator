#include "stack.h"
#include <iostream>
#include <cstring>
#include <string>
#include<sstream>


using namespace std;


int main(){
    // initialize all variables
    Stack s1;
    string equation;
    string numOfCases;
    // get the number of cases and change to num
    getline(cin , numOfCases);
    int cases = stoi(numOfCases);
    // loop for number of cases
    for (int i = 0; i < cases; i++){
        // initialize more variables and get the equation
        getline(cin, equation);
        string store = "";
        int x;
        int y;
        int z;
        int num;
        // check if equation is just an int
        if (equation.find(' ') == string::npos){
            int num = stoi(equation);
            s1.push(num); 
        // other wise loop for the length of equation    
        }else{
        for (int j = 0; j < equation.length(); j++){
            // if there is a space and before the space there are numbers push store into stack
            if(equation[j] == ' ' && equation[j-1] >= '0'){
                num =stoi(store);
                s1.push(num);
                store = "";
            }
            // if there is just a space continue in the loop
            else if(equation[j] == ' '){
                continue;
            }
            // if it is a number add it to the string store
            else if(equation[j] >= '0'){
                store = store + equation[j]; 
                continue; 
                 
            }
            // checks for a negative before a number 
            else if(equation[j] == '-' && equation[j+1] >='0' ){
                store = store + equation[j];
                continue;
            }
            // if there is an operator perform the correct operation
            else if(equation[j] < '0'){
    
                    switch(equation[j]){
                    case '+':
                    y = s1.pop();
                    x= s1.pop();
                    z = x+y; 
                    s1.push(z);
                    break;
                    case '-':
                    y = s1.pop();
                    x= s1.pop();
                    z = x-y; 
                    s1.push(z);
                    break;
                    case '*':
                    y = s1.pop();
                    x= s1.pop();
                    z = x*y; 
                    s1.push(z);
                    break;
                    case '/':
                    y = s1.pop();
                    x= s1.pop();
                    z = x/y; 
                    s1.push(z);
                    break;
                }
            }
        }
    }
    // print contents of stack then remove the value from it 
    cout<<s1.pop()<< '\n';
    
}
       
    }


