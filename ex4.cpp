#include <iostream>
 
void passByValue(int x) {
    ++x;
}
void passByReference(int &y) {
    ++y;
}
 
int main() {
	int x = 5;
	int y = 5;
	passByValue(x);
	passByReference(y);
	std::cout << x << " " << y; //Output: 5 6
}