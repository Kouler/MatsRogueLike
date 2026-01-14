#include <iostream>
#include <vector>

#include "GameEngine.h"

int main() {
    //trying to push it from collaborator account, stop fucking with me
    GameEngine engine;
    Error result = engine.run();
    switch (result) {
        case Error::NONE:
            std::cout << "Just closed?.." << std::endl;
            break;
        case Error::WIN:
            std::cout << "Congratulations, You Won!!!" << std::endl;
            break;
        case Error::MAP_READ_FAIL:
            std::cerr << "Error: Failed to read the map." << std::endl;
            break;
        default:
            std::cerr << "An unknown error occurred." << std::endl;
            break;
    }
    
}