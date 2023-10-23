#include<iostream>
using namespace std;

int main(){
    	  // Set console text color to red and background color to yellow
    cout << "\033[31;43m";

    // Print blinking text
    cout << "\033[5mBlinking text\033[0m\n";
}