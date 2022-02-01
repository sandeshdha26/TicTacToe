#include<iostream>
#include<unistd.h>

using namespace std;

int numberChoice;
char marking = 'X';
int row, column;
char table[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool draw = false;

void printTable()       //print 3x3 matrix first
{
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[0][0]<<"  |  "<<table[0][1]<<"  |  "<<table[0][2]<<endl;
    cout<<"\t____|_____|____\n";
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[1][0]<<"  |  "<<table[1][1]<<"  |  "<<table[1][2]<<endl;
    cout<<"\t____|_____|____\n";
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[2][0]<<"  |  "<<table[2][1]<<"  |  "<<table[2][2]<<endl;
    cout<<"\t    |     |    \n";
    cout<<"\n";
}

void userInput()    //to determine user's turn as well as input from the user
{
    if(marking == 'X')
        cout<<"\nPlayer [1] ('X') turn..."<<endl;
    else if (marking == 'O')
        cout<<"\nPlayer [2] ('O') turn..."<<endl;
    cout<<"Enter any number from 1 to 9: ";
    cin>>numberChoice;

    switch(numberChoice)    //convert user given single digit to row and columns
    {
        case 0:
            exit(1);
        case 1:
            row = 0;
            column = 0;
            break;
        case 2:
            row = 0;
            column = 1;
            break;
        case 3:
            row = 0;
            column = 2;
            break;
        case 4:
            row = 1;
            column = 0;
            break;
        case 5:
            row = 1;
            column = 1;
            break;
        case 6:
            row = 1;
            column = 2;
            break;
        case 7:
            row = 2;
            column = 0;
            break;
        case 8:
            row = 2;
            column = 1;
            break;
        case 9:
            row = 2;
            column = 2;
            break;
        default:
            cout<<" Invalid entry!!!";
    }

    /*check if user defined cell is already acquired or not...*/
    if(marking == 'X' && table[row][column] != 'X' && table[row][column] != '0')
    {
        table[row][column] = 'X';
        marking = 'O';
    }
    else if (marking == 'O' && table[row][column] != 'X' && table[row][column] != 'O')
    {
        table[row][column] = 'O';
        marking = 'X';
    }
    else
    {
        cout<<"\nThis cell is already acquired. Try another cell."<<endl;
        userInput();
    }
    //printTable();
}

bool gameOver()  //condition(function) to decide who wins the game
{
    for(int i = 0;i < 3; i++)
    /* to check linear row and column for winning condition [row][column] */
    if(table[i][0] == table[i][1] && table[i][0] == table[i][2] || table[0][i] == table[1][i] && table[0][i] == table[2][i])
    return false;
    /*to check diagonally for win condition */
    if(table[0][0] == table[1][1] && table[0][0] == table[2][2] || table[0][2] == table[1][1] && table[0][2] == table[2][0])
    return false;
    //to check whether the game is in continue status or whatever the hell it means..
    for(int i = 0;i < 3; i++)
    for(int j = 0;j < 3; j++)
    if(table[i][j] != 'X' && table[i][j] != 'O')
        return true;

    draw = true;
    return false;    
}

int main()
{
    cout<<"\n----TIC-TAC-TOE GAME----"<<endl;
    cout<<"--------For 2 Players--------"<<endl;
    cout<<"Enter 0 to exit."<<endl;
    while(gameOver())
    {
        printTable();
        userInput();
        sleep(2);
        gameOver();
    }
    if(marking == 'X' && draw == false)
    {
        cout<<"Congratulations!!"<<endl;
        cout<<"Player 1 has won the game..."<<endl;
    }
    else if (marking == 'O' && draw == false)
    {
        cout<<"Congratulations!!"<<endl;
        cout<<"Player 2 has won the game..."<<endl;
    }
    else
    {
        cout<<"\nOh no!!"<<endl; 
        cout<<"The game is draw..."<<endl;
    }

}