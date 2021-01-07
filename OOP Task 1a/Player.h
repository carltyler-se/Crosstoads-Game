#pragma once

#include "constants.h"

class Player
{
    public:
        // constructor
        Player();

        // assessors
        int GetX();
        int GetY();
        char GetSymbol() const;
        bool IsAtPosition(int x, int y);

        // mutators
        void Move(int key);

        //other functions
        void Die();

        int GetCurrentLives();

        int GetMaxLives();

        void ResetLives();

    protected:
        //data members


    private:
        // data members
        bool alive;
        bool escaped;
        int maxLives;
        int currentLives;
        int dx;
        int dy;
        char symbol;
        int  x, y;

        // supporting functions 
        void PositionAtStart();
        void UpdatePosition(int dx, int dy);
};