#include<iostream>

int addNumbers( int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int main(){

    int first_number {13}; //Statement
    int second_number {7};

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25,9);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(3,45) << std::endl;

    return 0;
}
