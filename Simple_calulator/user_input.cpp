#include <iostream>

//Assigning values
     int x,y;

//Fn to take user input and display the result

int main(){
    
    std::cout << "Enter the first number:";
    std::cin >>x;
    std::cout << "Enter the second number:";
    std::cin>>y;
    std::cout <<"The sum of the two numbers is:"<<x+y;
    return 0;
}