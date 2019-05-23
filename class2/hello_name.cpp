#include <iostream>
#include <string>

int main(){
    std::cout << "First name? ";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Last name? ";
    std::string last_name;
    std::cin>> last_name;
    std::string greeting="*Hello, " + first_name +" "+last_name + "! *";
    std::string stars(greeting.size(), '*');
    std::cout<< stars << std::endl;
    std::cout<< greeting << std:: endl;
    std:: cout << stars << std::endl;
    return 0;
}