#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"

// Inclusions go here:
#include <iostream>

String::String() {
  // Allocate space.
  array = new char[1];

  // Add the null.
  array[0] = '\0';

  // Adjust private variables.
  _capacity = 0;
}

String::String(char c) {
  // Allocate space.
  array = new char[2];

  // Add the character and the null.
  array[0] = c;
  array[1] = '\0';

  // Adjust private variables.
  _capacity = 1;
}

String::String(char* str) {
  // Get the length of the incoming string.
  int length = 0;
  while (str[length])
    ++length;

  // Allocate space for the string plus a null.
  array = new char[length + 1];

  // Fill our array up, including the null.
  for (int i = 0; i <= length; ++i)
    array[i] = str[i];

  // Adjust private variables.
  _capacity = length;
}

String::~String() {
  delete[] array;
}
//---------------------------------------------------------------------------------------

/** at(int position)
   * Returns the character at the given position, throws an exception if the
   * position is out of bounds.
   * O(2)
   */
  char String::at(int x) const{
      if(array[x]<0){
          throw "Enter a position within the parameter";
      }
      else{
        return array[x];
      }
  }

  /** empty()
   * Returns whether or not the string is empty.
   * O(2)
   */
  bool String::empty() const{
      if(array[0]==NULL){
          return true;
      }
      else{
          return false;
      }
  }

  /** size()
   * Returns the number of characters in the string.
   * 0(n)
   */
  unsigned int String::size() const{
      int length=0;
      for(int i=0;array[i]!=NULL;i++){
          length ++;
      }
      return length;
  }

  /** capacity()
   * Returns the number of characters that the string can hold.
   * O(n)
   */
  unsigned int String::capacity() const{
      return 1;
  }

  /** reserve(int extra)
   * Reserves extra amount of characters, extending the capacity of the string.
   * O(n)
   */
  void String::reserve(unsigned int x){
      
  }

  /** insert(char c, int index)
   * Inserts the given character `c` into the string at the given index.
   * If the index is out of bounds the character should appended / prepended.
   * O(1)
   */
  void String::insert(char x, int y){
      array[y]=x;

  }

  /** erase(char)
   * Erases all copies of the given character from the string.
   * O(n)
   */
  void String::erase(char x){
      for(int i=0;array[i]!=NULL;i++){
          if (array[i]=x){
              array[i]=' ';
          }
      }

  }

  /** remove(int index)
   * Removes the character at the given index.
   * O(1)
   */
  void String::remove(int x){

  }

  /** append(char)
   * Appends the given character to the string.
   * O(1)
   */
  void String::append(char x){

  }

  /** prepend(char)
   * Prepends the given character to the string.
   * O(1)
   */
  void String::prepend(char x){

  }

  /** compare(char* or String)
   * Returns whether or not the string is equal with the one given.
   * O(n)
   */
  bool String::compare(char* x) const{
      return true;
  }
  bool String::compare(String&) const{
      return true;
  }

  /** concate(char* or String)
   * Concatenates the string with the given character array, or string.
   * O(1)
   */
  void String::concatenate(char* x){

  }
  void String::concatenate(String&){

  }

  /** find(char* or char or String)
   * Returns the index of the first occurrence of the character array, char, or
   * string given. Should return length if not found.
   * O(n)
   */
  unsigned int String::find(char*, int start) const{
      return 1;
  }
  unsigned int String::find(char, int start) const{
      return 1;
  }
  unsigned int String::find(String&, int start) const{
      return 1;
  }

  /** reverse()
   * Reverses the string in-place.
   * O(n)
   */
  void String::reverse(){

  }

  /** shift(int)
   * Shifts all characters ASCII values in the array upwards or downwards by the
   * amount given. This method should also prevent characters from becoming
   * null, or exceeding the ASCII range.
   * O(n)
   */
  void String::shift(int x){
      for(int i=0;array[i]!=NULL;i++){
          char originalChar=array[i];
          if (x<0){
            int shiftedChar=int (originalChar);
            shiftedChar--;
            array[i]=char(shiftedChar);
          }
          else{
            int shiftedChar=int (originalChar);
            shiftedChar++;
            array[i]=char(shiftedChar);
          }

      }

  }

  /** toInt()
   * Returns the string as an integer, if it can be represented as one.
   * Otherwise throws an exception
   * O(n)
   */
  int String::toInt() const{
      return 1;
  }

  /** substr(start, end)
   * Returns the string contained between [start, end).
   * O(?)
   */
  String String::substr(int x, int y) const{
      return "hello";
  }
//};