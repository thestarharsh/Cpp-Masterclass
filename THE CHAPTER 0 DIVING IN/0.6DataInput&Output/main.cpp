#include<iostream>
#include<string>

int main(){
   /*
    //Printing Data
    std::cout << "Hello C++20! " << std::endl;

    int age{21};
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message : Something is wrong. " << std::endl;
    std::clog << "Log message : Something happened. "  << std::endl;

    //Reading Data
    int age1;
    std::string name;

    std::cout << "Please type your Name and Age. " << std::endl;

    std::cin >> name;
    std::cin >> age1;

    std::cout << "Your name is " << name << " and you are " << age1 << " years old." << std::endl;
    */
   // Data with spaces

   std::string full_name;
   int age2;

   std::cout << "Please type your full name and age." << std::endl;

   std::getline(std::cin,full_name);
   std::cin >> age2;

   std::cout << "Your name is " << full_name << " and you are " << age2 << " years old." << std::endl;

    return 0;
}