#include <iostream>
#include "race.h"

Race::Race() : horses{Horse(0), Horse(1), Horse(2), Horse(3), Horse(4)} {
    someoneWon = false;
}

int Race::runRace() {
    int winningHorse = -1;

    while (!someoneWon) {

        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].advance();
            horses[i].printLane();

            if (horses[i].isWinner()) {
                someoneWon = true;
                std::cout << "Horse " << i << " WINS!!!" << std::endl;
                if (winningHorse == -1) {
                    winningHorse = i;
                }
            }
        }

        if (!someoneWon) {
            std::cout << "Press enter for another turn";
            std::cin.get();
        }
    }

    return winningHorse;
}
