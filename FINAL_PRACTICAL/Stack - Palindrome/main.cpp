#include <iostream>
#include <string>
#include "arraystack.h"
using namespace std;

// TODO implement this method.
// Use the ArrayStack to perform the stack operations needed.
bool is_palindrome(string str){
    ArrayStack* stk = new ArrayStack();
    
    for (int i = 0; i < str.length() / 2; i++) 
        stk->push(str[i]);
    
    int start = 0;
    if(str.length() % 2 == 0) {
        start = str.length() / 2; //even
    } else {
        start = str.length() / 2+1; //iff odd
    }
    
    for (int i = start; i < str.length(); i++) {
        if (stk->pop() != str[i]) 
            return false;
    }
    return true;
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if(is_palindrome(str)) {
        cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is not a palindrome!" << endl;
    }
    return 0;
}