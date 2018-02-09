//
//  main.cpp
//  Mazed-based Game
//
//  Created by Rory John Fielding on 04/03/2017.
//  Copyright © 2017 Rory John Fielding. All rights reserved.
//

#include <iostream>
#include "Maze.h"
#include "Player.h"
#include <string>
#include <ctime>
using namespace std;

PlayerID a; //declare playerid for score/name
Player player1; //declare player 1 for function
int choice; //declare into choice for menu switch

void wait(int wait_time); //declares wait time
void wait(int wait_time) //function for stall or wait time in seconds
{
    long *start_time = new long;
    *start_time = time(0);
    
    while ((*start_time + wait_time) > time(0)){
    };
    delete start_time;
};

int main(void)
{
    cout << "Welcome to Maze V1.0..." << endl; //Introduction text output when starting program
    wait(1);
    cout << "Please use the arrow keys or wasd to move..." << endl;
    wait(1);
    cout << "Please enter your player ID..." << endl; //asks for input from user
    cin >> a.name; //inputs name to player id
    
    do
    {
        cout << "Hello ";
        cout << a.name << ": " << endl;
        cout << " 1 - Start A New Game. " << endl; //defines switches for menu program to run in
        cout << " 2 - Saved Games. " << endl;
        cout << " 3 - Highscores. " << endl;
        cout << " 4 - Exit. " << endl;
        cout << " Enter your choice and press return: ";
        cin >> choice;
        Maze x; //declares maze x
        switch (choice)
        {
            case 1:
                //function code to start a game
                //a function for creating the maze needs to be called here
                
                cout << x.printmaze();
                while (x.game == false)
                    cout << "You are currently at co-ordinates X:" << player1.playx << endl; //outputs players x coords
                    cout << "You are currently at co-ordinates Y:" << player1.playy << endl; //outputs players y coords
                    cout << "Please make a move" << endl;
               
                    cin >> player1.moveme;
                
                if (player1.moveme == 'W')
                {
                    player1.moveup(player1.playx, player1.playy); //if player hits w, move player up
                }
                
                if (player1.moveme == 'A')
                {
                    player1.moveleft(player1.playx, player1.playy); //if player hits a, move player left
                }
                
                if (player1.moveme == 'S')
                {
                    player1.movedown(player1.playx, player1.playy); //if player hits s, move player down
                }
                
                if (player1.moveme == 'D')
                {
                    player1.moveright(player1.playx, player1.playy); //if player hits d, move player right
                }
                
                if (player1.playx == 10 && player1.playy == 2) //if player reaches end coords, set game to finish
                {
                    x.game = true;
                    cout << "Congratulations, you win!" << endl;
                }
                
                break;
            case 2:
                //function code to access saved game file
                cout << "There are currently no saved games." << endl; //saved games switch
                cout << "Still in development" << endl;
                break;
            case 3:
                //function code to access highscores
                cout << "There are currently no highscores." << endl; //highscores switch
               
                break;
            case 4:
                //function code to make user exit program
                return 0;
                break;
                
            default:
                cout << "Not a Valid Choice. \n" //default error message
                << "Choose again.\n";
                break;
        }
        
    }
    while (choice !=5);
    
    return 0;
}

