#include <iostream>
 
 void print(std::string str) {
     std::cout << str;
 }
 
int main() {
	int x = 1;
	x = "abc"; //error
	print(x);  //another error
}