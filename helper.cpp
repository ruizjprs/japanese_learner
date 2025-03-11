#include "helper.h"
#include <iostream>

void helper::print(){
    std::cout << "こんにちわ！" <<std::endl;
}

void helper::play_game(int option){
    srand (time(NULL));
    std::vector<std::pair<std::string, std::string >> test_vector;

    if(option == 1){
        std::cout << "Japanese to Romaji Kanji game" << std::endl;
        std::cout << "Type the romaji equivalent of the following kanji" << std::endl;
        test_vector = helper::japanese_to_romaji_kanji;
    }
    else if (option == 2){
        std::cout << "English to Japanese Kanjigame" << std::endl;
        std::cout << "Type the kanji equivalent of the following English word" << std::endl;
        test_vector = helper::english_japanese_kanji;
    }
    else{
        std::cout << "invalid option" << std::endl;
        return;
    }

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
        std::cout << i.first << std::endl;
        std::cout << "Enter answer: ";
        std::getline(std::cin, input);
        if(input == i.second){
            std::cout << "correct" << std::endl;
            test_vector.erase(test_vector.begin() + randomIndex);
        }
        else{
            std::cout << "incorrect" << std::endl;
        }
    }    
    std::cout << "game over! Good Job" << std::endl;
}

