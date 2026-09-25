#ifndef HORSE_H
#define HORSE_H

class Horse {
    private:
        const static int TRACK_LENGTH = 15;
        int position;
        int horseNum;

    public:
        Horse(int horseNum);
        void advance();
        void printLane();
        bool isWinner();
};

#endif
