#include<iostream>


int main(){
    std::cout << "Please enter a number : ";
    int x = 0;
    std::cin >> x;
    std::cout << "\nEntered number is : " << x << "\n";

    std::cout << "Please enter 2 numbers : ";
    int y = 0;
    double d = 0.0;
    std::cin >> y >> d;
    std::cout << "\nEntered numbers are : " << y << " " << d;
}