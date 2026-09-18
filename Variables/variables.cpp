#include <iostream>
using namespace std;

bool myanswer = true; // It declares a boolean variable named myanswer and initializes it with the value true
int speed = 100;// It declares an integer variable named speed and initializes it with the value 100
char grade = 'A';// It declares a character variable named grade and initializes it with the value 'A'
string name = "Key";// It declares a string variable named name and initializes it with the value "Key"
float pi = 3.14;// It declares a float variable named pi and initializes it with the value 3.14
int main() {
cout << "The speed of the car is :" << speed << "km/h" <<endl;// It prints the value of the speed variable to the console, along with a message indicating that it is the speed of the car
cout << "My name is :" << name << ", the value of pi is :"<< pi << ".Which is "<< myanswer << " and my grade is :"<< grade; // It prints the values of the name, pi, myanswer, and grade variables to the console, along with a message indicating what each value represents
return 0;
}