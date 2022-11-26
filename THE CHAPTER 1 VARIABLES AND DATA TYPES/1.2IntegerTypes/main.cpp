#include<iostream>

int main(){

    //Braced Initializers
    //Variable may contain random garbage value. WARNING
    int elephant_count{};//Initializes to zero

    int lion_count{10};//Initializes to 10

    int dog_count {10};//Initializes to 10

    int cat_count {15};//INitializes to 15

    //Can use expression as initializer.
    int domesticated_animals {  dog_count + cat_count };

    std::cout << "Elephant count : " << elephant_count << std::endl;
    std::cout << "Lion count : " << lion_count << std::endl;
    std::cout << "Dog count : " << dog_count << std::endl;
    std::cout << "Cat count : " << cat_count << std::endl;
    std::cout << "Domesticated animal count : " << domesticated_animals << std::endl;

    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof elephant_count : " << sizeof(elephant_count) << std::endl;

    return 0;
}