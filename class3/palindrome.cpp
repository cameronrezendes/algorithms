#include <iostream>
//#include <string>

bool palindrome(char*);
int main(){
    char *str;
    std::cout<<"Enter word to check if palindrome: ";
    std::cin>>str;
    std::cout<<palindrome(str);

return 0;
}

bool palindrome(char *str){
    int length;
    //check strength
    for (length=0;str[length];length++);
    //check is palindrome
    for(int i=0;i<length/2;i++){
        if (str[i]!=str[length-i-1]){
            std::cout<<"Not palindrome"<<std::endl;
            return false;
        }
    }
    std::cout<<"Is palindrome"<<std::endl;
    return true;
}