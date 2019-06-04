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

/** at(int position)
   * Returns the character at the given position, throws an exception if the
   * position is out of bounds.
   * O(?)
   */
  char String::at(int x) const{
      return 'a';
  }

  /** empty()
   * Returns whether or not the string is empty.
   * O(?)
   */
  bool String::empty() const{
      return true;
  }

  /** size()
   * Returns the number of characters in the string.
   */
  unsigned int String::size() const{
      return 1;
  }

  /** capacity()
   * Returns the number of characters that the string can hold.
   * O(?)
   */
  unsigned int String::capacity() const{
      return 1;
  }

  /** reserve(int extra)
   * Reserves extra amount of characters, extending the capacity of the string.
   * O(?)
   */
  void String::reserve(unsigned int x){
      
  }

  /** insert(char c, int index)
   * Inserts the given character `c` into the string at the given index.
   * If the index is out of bounds the character should appended / prepended.
   * O(?)
   */
  void String::insert(char x, int y){

  }

  /** erase(char)
   * Erases all copies of the given character from the string.
   * O(?)
   */
  void String::erase(char x){

  }

  /** remove(int index)
   * Removes the character at the given index.
   * O(?)
   */
  void String::remove(int x){

  }

  /** append(char)
   * Appends the given character to the string.
   * O(?)
   */
  void String::append(char x){

  }

  /** prepend(char)
   * Prepends the given character to the string.
   * O(?)
   */
  void String::prepend(char x){

  }

  /** compare(char* or String)
   * Returns whether or not the string is equal with the one given.
   * O(?)
   */
  bool String::compare(char* x) const{
      return true;
  }
  bool String::compare(String&) const{
      return true;
  }

  /** concate(char* or String)
   * Concatenates the string with the given character array, or string.
   * O(?)
   */
  void String::concatenate(char* x){

  }
  void String::concatenate(String&){

  }

  /** find(char* or char or String)
   * Returns the index of the first occurrence of the character array, char, or
   * string given. Should return length if not found.
   * O(?)
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
   * O(?)
   */
  void String::reverse(){

  }

  /** shift(int)
   * Shifts all characters ASCII values in the array upwards or downwards by the
   * amount given. This method should also prevent characters from becoming
   * null, or exceeding the ASCII range.
   * O(?)
   */
  void String::shift(int x){

  }

  /** toInt()
   * Returns the string as an integer, if it can be represented as one.
   * Otherwise throws an exception
   * O(?)
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