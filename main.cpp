
#include <iostream>
#include <string> // export string library so we can declare strings

using namespace std;

bool is_vowel(char single_vowel); //a boolen functiuon that determines whether a character is a vowel and returns true or false
string substr(string str_input); //substr function that removes all the vowels from the passed string




int main() {

    string user_input{ "" }; //declare a variable that would hold a user's input

    //below, the program asks user to input a string, spaces are possible 
    cout << "Please enter your string: ";
    getline(cin, user_input);

    //output the results 
    cout << "***************************" << endl;
    cout << "Your string without vowels: " << substr(user_input) << endl;
    cout << "***************************" << endl;

    return 0;
}



bool is_vowel(char single_vowel) {

    //here we use cases to chack if a character is a vowel
    switch (tolower(single_vowel)) {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;

    default:
        return false;

    }
};


string substr(string str_input) {

    string str_output = {};

    for (int i{ 0 }; i <= str_input.length() + 1; i++) {

        //if function "is_vowel" returns false, meaning that the character is not a vowel, then the program concatenates it with string "str_output"
        if (!is_vowel(str_input[i]))
        {
            str_output += str_input[i];
        }
    }
    //and the function returns the string that contains all the non-vowels
    return  str_output;

}
