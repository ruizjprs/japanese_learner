#include <iostream>
#include "helper.h"

int main(){

    bool play = true;
    while(play){
        std::string input = "";
        std::cout<< "Chose an option" << std::endl;
        std::cout<< "1. English to Japanese" << std::endl;
        // [TODO] std::cout<< "2. Japanese to English" << std::endl;
        std::cout<< "press q to exit" << std::endl;
        std::getline(std::cin, input);
        if(input == "q"){
            play = false;
            break;
        }
        helper::play_game(stoi(input));        
    }

    
}