#include <iostream>
#include <string>

//Assigning values
 int x,y;
 std::string operation;   
//Fn to take user input and display the result

int main(){
    
    std::cout << "Enter the first number:";
    std::cin >>x;
    std::cout << "Enter the second number:";
    std::cin>>y;
    //Taking operation from user input and using else if statements to perform the various algebraic operations
    std::cout << "Enter the operation:";
    std::cin >>operation;
    if (operation=="+"){
        std::cout << "The result is:"<< x+y; 
    }
    else if (operation=="-"){
        std::cout<< "The result is:"<<x-y;
    }
    else if (operation=="*"){
        std:: cout<< " The result is:"<<x*y;
    }
    else if (operation=="/"){
        std:: cout<< " The result is:"<<x/y;
    }
    return 0;
}
