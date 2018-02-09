//
//  Maze.cpp
//  Mazed-based Game
//
//  Created by Rory John Fielding on 04/03/2017.
//  Copyright © 2017 Rory John Fielding. All rights reserved.
//

#include <iostream>
#include "Maze.h"
using namespace std;

bool Maze::printmaze() //loop that runs through array and prints maze
{
       for (int i = 0; i < 10; i ++)
    {
        for (int j = 0; j < 10; j ++)
        {
            switch (mazearrayeasy[i][j])
            {
                case 0: cout << " ";
                    break;
                case 1: cout << char (219);
                    break;
                case 2: cout << " ";
                    break;
                case 3: cout << "X";
                    break;
            }
        } cout << endl;
    }
    return 0;
}
