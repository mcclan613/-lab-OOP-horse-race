#ifndef RACE_H
#define RACE_H

#include "horse.h"

class Race {
    private:
        const static int NUM_HORSES = 5;
        Horse horses[NUM_HORSES];
        bool someoneWon;

    public:
        Race();
        int runRace();
};

#endif
