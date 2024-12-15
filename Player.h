#ifndef PLAYER_H
#define PLAYER_H

#include "GameMechs.h"
#include "Food.h"
#include "objPos.h"
#include "objPosArrayList.h"

class Player
{    
    public:
        enum Dir {UP, DOWN, LEFT, RIGHT, STOP};  // This is the direction state

        Player(GameMechs* thisGMRef, Food* thisFdRef);
        ~Player();

        objPosArrayList* getPlayerPos() const;
        void updatePlayerDir();
        void movePlayer();

        bool checkSelfCollision();

    private:
        objPosArrayList* playerPosList;
        enum Dir myDir;

        // Reference to the Main Game Mechanisms
        GameMechs* mainGameMechsRef;

        // Reference to the Main Food Class
        Food* mainFoodRef;
};

#endif