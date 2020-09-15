/* sp7-15.cpp
 Author: C.E.
 01MAR2018
 Last Updated: 07MAR2018
 Description: Program is a 2-player game of tic-tac-toe. Program is using a 2-D gameboard initialized to character asterisks. Player 1 is 'X' and Player 2 is 'O'. Game is a loop until either a winner is declared or no more legal spaces exist. Legal spaces are spaces with asterisks.
 ====================================================================================================*/

#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 3, COLS = 3;

//list of prototypes
void displayBoard(char [][3]); //prints board layout
char playerTurn(char[][3], char);
char gameOver(char[][3]);



// main consists of looped function calls for different aspects of the game
int main()
{

    
//2-D array with 3 Rows and 3 columns initialized with char *
        char gameBoard[ROWS][COLS] = {{'*','*','*'}, {'*','*','*'}, {'*','*','*'}};
    
    

// call to the function displayboard
        displayBoard(gameBoard);
    
    do
    {
//call to playerTurn function to enter their position on gameboard
        playerTurn(gameBoard, 'X');
    
    
//call to display board after player X has chosen marker position
        displayBoard(gameBoard);
    
    
// call to check for a winner
        gameOver(gameBoard);
    

// call to playerTurn to enter their position on gameBoard
        playerTurn(gameBoard, 'O');
  
    
//call to display board after player O has chosen marker position
        displayBoard(gameBoard);
    
// call to check for a winner
        gameOver(gameBoard);
        
    }while(1);
        
    return 0;
}

//***************************************************************************************
//                              displayBoard
// task: This procedure displays the game board progress
// data in: character input made by user from keyboard
// data out: none
//****************************************************************************************
void displayBoard(char board[][COLS])
{
    for (int x = 0; x < ROWS; x++)
    {
        for (int y = 0; y < COLS; y++)
        {
            cout << setw(4) << board [x][y];
        }
        cout << endl;
    }
    
    
}
//***************************************************************************************
//                              playerTurn
// task: this procedure prompts user to place character data type, char 'X' for player 1 and char 'O' for player 2, in array.
// data in: gameBoard
// data out: column and row spot to pass value to display board
//****************************************************************************************

// funtion to prompt player to choose a location on gameboard by choosing column and row. Use loop to test for legal location. if not legal, ask user to choose again. if legal position, replace value with player mark and return to display gameboard
char playerTurn(char board[][3], char marker)
{
    int row = 3, col = 3;
    
    do
    {
        cout << "Player" << marker << endl;
    
        cout << "Enter your marker on the game board by specifying a row and a column." << endl;
        cout << "Row (0, 1, 2)" << endl;
        cin >> row;
        cout << "Column";
        cin >> col;
        
        
    }while ((row < 0) || (row > 2) || (col < 0) || (col > 2) || (board[row][col] != '*'));
    {
        cout << "Enter a different location" << endl;
    }
    
    return board[row][col] = marker;
    
    
}

//***************************************************************************************
//                              gameOver
// task: function will determine winner by comparing array slots for like char in a row
// data in: char data type
// data out: none
//****************************************************************************************
char gameOver(char board[][3])
{

    // check for player X position
        if ((board[0][0] == 'X') && (board[0][1] == 'X') && (board[0][2] == 'X'))
            cout << "Player X is the winner" <<endl;
        
        else if ((board[1][0] == 'X') && (board[1][1] == 'X') && (board[1][2] == 'X'))
            cout << "Player X is the winner" <<endl;
        
        else if ((board[2][0] == 'X') && (board[2][1] == 'X') && (board[2][2] == 'X'))
            cout << "Player X is the winner" <<endl;
        
        else if ((board[0][0] == 'X') && (board[1][0] == 'X') && (board[2][0] == 'X'))
            cout << "Player X is the winner" <<endl;
        
        else if ((board[0][1] == 'X') && (board[1][1] == 'X') && (board[2][1] == 'X'))
            cout << "Player X is the winner" <<endl;
        
        else if ((board[0][2] == 'X') && (board[1][2] == 'X') && (board[2][2] == 'X'))
            cout << "Player X is the winner" <<endl;
        
        else if ((board[0][0] == 'X') && (board[1][1] == 'X') && (board[2][2] == 'X'))
            cout << "Player X is the winner" <<endl;
        else if ((board[0][2] == 'X') && (board[1][1] == 'X') && (board[2][0] == 'X'))
            cout << "Player X is the winner" <<endl;
        
        // check for player O position
        if ((board[0][0] == 'O') && (board[0][1] == 'O') && (board[0][2] == 'O'))
            cout << "Player O is the winner" <<endl;
        
        else if ((board[1][0] == 'O') && (board[1][1] == 'O') && (board[1][2] == 'O'))
            cout << "Player O is the winner" <<endl;
        
        else if ((board[2][0] == 'O') && (board[2][1] == 'O') && (board[2][2] == 'O'))
            cout << "Player O is the winner" <<endl;
        
        else if ((board[0][0] == 'O') && (board[1][0] == 'O') && (board[2][0] == 'O'))
            cout << "Player O is the winner" <<endl;
        
        else if ((board[0][1] == 'O') && (board[1][1] == 'O') && (board[2][1] == 'O'))
            cout << "Player O is the winner" <<endl;
        
        else if ((board[0][2] == 'O') && (board[1][2] == 'O') && (board[2][2] == 'O'))
            cout << "Player O is the winner" <<endl;
        
        else if ((board[0][0] == 'O') && (board[1][1] == 'O') && (board[2][2] == 'O'))
            cout << "Player O is the winner" <<endl;
        else if ((board[0][2] == 'O') && (board[1][1] == 'O') && (board[2][0] == 'O'))
            cout << "Player O is the winner" <<endl;
    

    return 0;
}
 
    
    
   







/*
 step 0
 set constants for functions and initialize array. initialize array in main like other variables
create loop for functions
 
 step1
 display the gameboard array. initialized to 2-D, 3x3 array of char asterisks(*)
 
 step 2
 ask player X to pick a location on gameboard to place marker. input must be validated to test if location is chosen. if valid, replace original value and exit loop. if not valid, instruct to enter new location.
 
 step 3
 display gameboard with current values of players marker positions.
 'X' or 'O'
 
 step 4
 gameOver function will determine winner by evaluating if player markers complete a continuous vertical, horizontal, or diagonal line of same marker ('X' or 'O'). if winner is determined, declare the winner and exit. if all spaces are used, but no continuous markers, declare a tie and exit game.
 
 step 5
 same as step 2, but for player O. playerTurn(gameBoard, 'O')
 
 ste6
 call again gameover (step 4). test for a winner. if no winner and more spaces then loop to step 2 (player 'X')
 */

