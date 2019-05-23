#include "string.hpp"

int helper(int x){
    return (x + 5) % 60;
}
//Default Constructor
String::String(){
    array=new char[1];
    array[0] = '\0'; //null character

}
//Parameterized Constructor
String::String(const char *str){
    unsigned int length;
    for (length = 0;str[length];++length);
    array= new char[length + 1];
    for (int i =0; i<= length; ++i)
        array[i] = str[i];
}
//Destructor
String::String(){
    delete[] array;
}
//Length Function
unsigned int String::length() {
    unsigned int length=0
    for(length, array[length]; ++length);
    return length;
}
//Append function
void String::append(char c){
    char* new_array = new char[length + 1];
    for (int i=0; array[i]; ++i)
        new_array[i] = array[i];
    delete[] array;

    new_array[length++] = c;
    new_array[length] = '\0'
    array = new_array;

}