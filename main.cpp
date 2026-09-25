#include <iostream>
#include <cstdlib>
#include <ctime>
#include "race.h"

int main() {
    srand(time(NULL));

    int bet;
    std::cout << "Place your bet! Pick a horse (0-4): ";
    std::cin >> bet;
    std::cin.ignore(); // clear the leftover newline before cin.get() is used in the race loop

    Race race;
    int winner = race.runRace();

    std::cout << std::endl;
    if (bet == winner) {
        std::cout << "You bet on Horse " << bet << " and WON!" << std::endl;
    } else {
        std::cout << "You bet on Horse " << bet << ", but Horse " << winner << " won. Better luck next time." << std::endl;
    }

    return 0;
}
