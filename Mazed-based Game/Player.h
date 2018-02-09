//
//  Player.h
//  Mazed-based Game
//
//  Created by Rory John Fielding on 04/03/2017.
//  Copyright © 2017 Rory John Fielding. All rights reserved.
//

#ifndef Player_h
#define Player_h
#include <vector>
#include "PlayerID.h"
#include "Maze.h"

class Player {
    
public:
    void moveup(int &x, int &y); //declare move up function
    void movedown(int &x, int &y); //declare move down function
    void moveleft(int &x, int &y); //declare move left function
    void moveright(int &x, int &y); //declare move right function
    void hitplayer(); //declare function to losing health
    int health = 100; //declare player health
    int dice(); //declare dice roll function
    int x = 0;
    int y = 0;
    int playx = 0; //declare player's x co-ordinates
    int playy = 1; //decalre player's y co-ordinates
    char moveme; //declare char for player's movement input
    
private:
    vector <PlayerID> playerid; //vector for player ID and score
};
#endif /* Player_h */
