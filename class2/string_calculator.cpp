#include <iostream>
#include <string>

int main(){

    std::cout<<"Enter number 1: "<<std::endl;
    std::string num1;
    std::cin>> num1;

    std::cout<<"Enter an operator"<<std:: endl;
    std::string op;
    std::cin>>op;

    std::cout<<"Enter number 2: "<<std::endl;
    std::string num2;
    std::cin>> num2;

    if(op=="+"){
        //int integer1 = std::stoi(string1); converts strings to integers
        int a = std::stoi(num1)+std::stoi(num2);
        std::cout << "The result is "<< a << std::endl;
    }
    else if(op=="-"){
        int a=std::stoi(num1)-std::stoi(num2);
        std::cout << "The result is "<< a << std::endl;
    }



    return 0;
}