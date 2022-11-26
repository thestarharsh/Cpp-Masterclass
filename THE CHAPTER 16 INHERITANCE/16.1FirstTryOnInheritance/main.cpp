#include <iostream>
#include "player.h"
#include<ostream>


int main(){

    Player p1("Cricket");
    p1.set_first_name("Virat");
    p1.set_last_name("Kohli");
    std::cout << "player : " << p1 << std::endl;
   
    return 0;
}