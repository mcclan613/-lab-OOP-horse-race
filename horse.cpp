#include <iostream>
#include <cstdlib>
#include "horse.h"
 
Horse::Horse(int horseNum) {
    this->horseNum = horseNum;
    position = 0;
}
 
void Horse::advance() {
    int coin = rand() % 2; // 0 = tails, 1 = heads
    if (coin == 1) {
        position = position + 1;
    }
}
 
void Horse::printLane() {
    for (int i = 0; i < TRACK_LENGTH; i++) {
        if (i == position) {
            std::cout << horseNum;
        } else {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}
 
bool Horse::isWinner() {
    return position >= TRACK_LENGTH - 1;
}
 
