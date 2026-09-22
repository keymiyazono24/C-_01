#include <iostream>

auto x =10;//automatically detects the variable type based on the assigned value
int y =10;
//bool result = x>y
int main(){
    if (x>y){
        std::cout << "x is greater than y";
    }
    else if (x<y){
        std::cout << "x is less than y";
    }
    else{
        std::cout <<"x is equal to y";
    }
    return 0;

}