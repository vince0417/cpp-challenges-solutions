//Checking for Palindromes
#include <iostream>
#include <algorithm>

bool is_palindrome(std::string str); // Protótipo;

// Main function;
int main(){
    std::string s;
    std::cout << "Enter a string: " << std::flush;
    std::getline(std::cin,s);
    std::cout << "\n\"" << s << (is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    return 0;
}

bool is_palindrome(std::string str){
    std::string temp = str;
    std::reverse(temp.begin(), temp.end()); // Inverte a ordem dos elementos;

    return temp == str;
}