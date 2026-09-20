#include <iostream>

int x,y,z;// Global variables x, y, and z are declared here
int a=100,b=200,c=300;// You can assign values to multiple variables by separating them with commas

int main(){
    x=y=z=100;// Assigning the same value 100 to x, y, and z
    std::cout << x+y+z<< std::endl;
    std::cout << a*b*c;
    return 0;
}