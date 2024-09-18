#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
  char first_input[100];
  char second_input[100];
  int result;
  cout << "enter the value of the first string: ";
  cin >> first_input;
  cout << "enter the value of the second string: ";
  cin >> second_input;
  result = strcmp(first_input, second_input);
  printf("strcmp(str1, str2) = %d\n", result);
  return 0;
}
