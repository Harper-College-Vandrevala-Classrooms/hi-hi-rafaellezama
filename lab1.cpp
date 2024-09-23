#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void remove_capital_letters(char input[]) {
  for (int i = 0; input[i] != '\0'; ++i) {
    input[i] = tolower(input[i]);
  }
}

int strcmp_case_insensitive(const string& first_input, const string& second_input) {
  char first_input_no_capitals[100];  
  char second_input_no_capitals[100];

  strcpy(first_input_no_capitals, first_input.c_str());  
  strcpy(second_input_no_capitals, second_input.c_str());

  remove_capital_letters(first_input_no_capitals);
  remove_capital_letters(second_input_no_capitals);

  return strcmp(first_input_no_capitals, second_input_no_capitals);
}

int main() {
  string first_input;
  string second_input;
  int result = 1;

  cout << "Enter the first string: ";
  getline(cin, first_input); 

  cout << "Enter the second string: ";
  getline(cin, second_input); 

  first_input.erase(remove_if(first_input.begin(), first_input.end(), ::isspace), first_input.end());
  second_input.erase(remove_if(second_input.begin(), second_input.end(), ::isspace), second_input.end());

  result = strcmp_case_insensitive(first_input, second_input);

  cout << "The comparison of \"" << first_input << "\" and \"" << second_input << "\" returns " << result << endl;
  
  return 0;
}
