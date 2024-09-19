#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cctype>
using namespace std;

void remove_capital_letters(char first_input[]) {
    for (int i = 0; first_input[i] != 0; i++) {     //function that remove the capital letters
        first_input[i] = tolower(first_input[i]);     
    }
}

int strcmp_case_insensitive(const char first_input[], const char second_input[]){
   char first_input_no_capitals[100];   
   char second_input_no_capitals[100];
   strcpy(first_input_no_capitals, first_input);
   strcpy(second_input_no_capitals, second_input);
   remove_capital_letters(first_input_no_capitals);             //function that compares 
   remove_capital_letters(second_input_no_capitals);            //case insensitive
   int result = strcmp(first_input_no_capitals,second_input_no_capitals);
   return result;
}

int main(){
  char first_input[100];
  char second_input[100];
  int result = 1;
  cout << "enter the value of the first string: ";
  cin >> first_input;
  cout << "enter the value of the second string: ";
  cin >> second_input;
  result= strcmp_case_insensitive(first_input,second_input);
  cout << "The comparison of "<< first_input <<" and " << second_input << " returns " <<result <<endl;
  return 0;
}
