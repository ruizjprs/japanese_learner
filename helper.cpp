#include "helper.h"
#include <iostream>

void helper::print(){
    std::cout << "こんにちわ！" <<std::endl;
}

void helper::play_game(int option){
    srand (time(NULL));
    std::vector<std::pair<std::string, std::string >> test_vector;

    if(option == 1){
        test_vector = helper::english_to_japanese_kanji;
    }
    else{
        std::cout << "invalid option" << std::endl;
        return;
    }
    std::cout << "japanese to english game" << std::endl;

    bool finished = false;
    while(!finished){
        if(test_vector.size() == 0){
            finished = true;
            break;
        }
        std::string input = "";
        int randomIndex = rand() % test_vector.size();
        std::cout << "Remaining:  " << test_vector.size() << std::endl;
        auto i = test_vector[randomIndex];
        std::cout << i.second << std::endl;
        std::getline(std::cin, input);
        if(input == i.first){
            std::cout << "correct" << std::endl;
            test_vector.erase(test_vector.begin() + randomIndex);
        }
        else{
            std::cout << "incorrect" << std::endl;
        }
    }    
    std::cout << "game over! Good Job" << std::endl;
}

