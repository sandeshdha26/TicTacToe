#include<iostream>
using namespace std;
int numberChoice;
char marking = 'X';
int row, column;

void printTable()       //print 3x3 matrix first
{
    int table[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[0][0]<<"  |  "<<table[0][1]<<"  |  "<<table[0][2]<<endl;
    cout<<"\t____|_____|____\n";
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[1][0]<<"  |  "<<table[1][1]<<"  |  "<<table[1][2]<<endl;
    cout<<"\t____|_____|____\n";
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[2][0]<<"  |  "<<table[2][1]<<"  |  "<<table[2][2]<<endl;
    cout<<"\t    |     |    \n";
}

void userInput()
{
    if(marking == 'X')
        cout<<"\nPlayer [1] turn..."<<endl;
    else if (marking == '0')
        cout<<"\nPlayer [2] turn..."<<endl;
    cout<<"Enter any number from 1 to 9: ";
    cin>>numberChoice;

    switch(numberChoice)
    {
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
            column = 3;
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

}
