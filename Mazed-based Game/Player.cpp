//
//  Player.cpp
//  Mazed-based Game
//
//  Created by Rory John Fielding on 04/03/2017.
//  Copyright © 2017 Rory John Fielding. All rights reserved.
//

#include <iostream>
#include "Player.h"
#include "Maze.h"


using namespace std;


void Player::moveup(int &x, int &y)
{
    char tempupswap; //declare temp variable
    if (mazearrayeasy[x][y-1] == 0) //check to see if space above is a wall (1)
    {
        tempupswap = mazearrayeasy[x][y-1]; //swap this variable out
        mazearrayeasy[x][y-1] = mazearrayeasy[x][y]; //move player to new position
        mazearrayeasy[x][y] = tempupswap]; //swap empty char back into empty slot
    }
    else
    {
        cout << "Cannot move there!" << endl;
    }
}

void Player::movedown(int &, int &){
    char tempdownswap; //declare temp variable
    if (mazearrayeasy[x][y+1] == 0) //check to see if space above is a wall (1)
    {
        tempdownswap = mazearrayeasy[x][y+1]; //swap this variable out
        mazearrayeasy[x][y+1] = mazearrayeasy[x][y]; //move player to new position
        mazearrayeasy[x][y] = tempdownswap]; //swap empty char back into empty slot
    }
    else
    {
        cout << "Cannot move there!" << endl;
    }
}
void Player::moveleft(int &, int &){
    char templeftswap; //declare temp variable
    if (mazearrayeasy[x-1][y] == 0) //check to see if space above is a wall (1)
    {
        templeftswap = mazearrayeasy[x-1][y]; //swap this variable out
        mazearrayeasy[x-1][y] = mazearrayeasy[x][y]; //move player to new position
        mazearrayeasy[x][y] = templeftswap]; //swap empty char back into empty slot
    }
    else
    {
        cout << "Cannot move there!" << endl;
    }
}

void Player::moveright(int &, int &){
    char temprightswap; //declare temp variable
    if (mazearrayeasy[x+1][y] == 0) //check to see if space above is a wall (1)
    {
        temprightswap = mazearrayeasy[x+1][y]; //swap this variable out
        mazearrayeasy[x+1][y] = mazearrayeasy[x][y]; //move player to new position
        mazearrayeasy[x][y] = temprightswap]; //swap empty char back into empty slot
    }
    else
    {
        cout << "Cannot move there!" << endl;
    }
}

void Player::hitplayer(){ //if dice roll is 5 or higher, take off 25 from player's health
    if (dice >= 5)
        health - 25;
}

int dice() //roll dice to get random number, return random dice roll
{
    int randomNumber, die;
    randomNumber = random();
    die = 1 + (randomNumber % 6);
    return die;
}
