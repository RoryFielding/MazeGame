//
//  Maze.h
//  Mazed-based Game
//
//  Created by Rory John Fielding on 04/03/2017.
//  Copyright © 2017 Rory John Fielding. All rights reserved.
//

using namespace std;
#ifndef Maze_h
#define Maze_h

class Maze {
   
    
public:
    bool printmaze(); //function for printing maze
    bool game = false; //function for end game condition
    int mazearrayeasy[10][10] = { //declares maze array
        {1,1,1,1,1,1,1,1,1,1},
        {3,1,1,0,0,0,0,1,1,1},
        {0,1,1,0,1,1,0,0,1,2},
        {0,0,0,0,1,0,0,0,1,0},
        {1,0,1,1,1,0,0,1,0,0},
        {1,0,1,0,0,0,1,1,1,0},
        {1,0,1,1,1,0,1,0,0,0},
        {1,1,1,0,0,0,1,1,1,0},
        {1,1,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,1,0,0,0},
                                 };
    int mazearraymedium[20][20]; //declares medium maze array
    int mazarrayhard[30][30]; //decalre hard maze aray
};

#endif /* Maze_h */
