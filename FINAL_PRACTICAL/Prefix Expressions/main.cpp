#include <iostream>
#include <cstring>
#include "arraystack.h"
using namespace std;

int main() {
    Stack* stack = new ArrayStack();
    // string c;
    int size, num, a, b;

  
    // Step 2: Ask the user for number of items to be inputted.
    cout << "Enter number of inputs: ";
    cin >> size;

    
    // Step 3: Initialize a string array and place all items there.
    string* input = new string[size + 1];
    cout << "Enter expression: ";
    input[0] = "x";
    for(int i = 1; i < size + 1; i++){
        cin >> input[i];
    }
  

    // Step 4: Loop the array from last to first
    for(int i = size; i >= 0; i--){
      string k = input[i];
        
        switch (k[0]) {
    		case '+':
    			a = stack->pop();
    			b = stack->pop();
    			stack->push(a + b);
    			break;
    		case '-':
    			a = stack->pop();
    			b = stack->pop();
    			stack->push(a - b);
    			break;
            case '/':
    			a = stack->pop();
    			b = stack->pop();
    			stack->push(a / b);
    			break;
            case '*':
    			a = stack->pop();
    			b = stack->pop();
    			stack->push(a * b);
    			break;
            case 'x':
    			cout << "Answer is " << stack->pop() << endl;
    			break;
    		default: 
    			num = stoi(k);
    			stack->push(num);
    			break;
		}
    }
}