//tic tak toe game
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int row,column,choice,i,j;
bool draw = false;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
//function for displaying the current status of board
void display_board()
{
cout<<"\t"<<"   |   |   \n";
cout<<"\t"<<" "<<board[0][0]<<" |"<<" "<<board[0][1]<<" |"<<" "<<board[0][2]<<" "<<"\n";
cout<<"\t"<<"___|___|___\n";

cout<<"\t"<<"   |   |   \n";
cout<<"\t"<<" "<<board[1][0]<<" |"<<" "<<board[1][1]<<" |"<<" "<<board[1][2]<<" "<<"\n";
cout<<"\t"<<"___|___|___\n";

cout<<"\t"<<"   |   |   \n";
cout<<"\t"<<" "<<board[2][0]<<" |"<<" "<<board[2][1]<<" |"<<" "<<board[2][2]<<" "<<"\n";
cout<<"\t"<<"   |   |   \n";
}
//function for checking the player turn and updating the board
void player_turn(){
    if(turn == 'X'){
        cout<<"Player 1 turn play with - X"<<"\n";
    }
    else if(turn == 'Y'){
        cout<<"Player 2 turn play with - Y"<<"\n";
    }
    cout<<"Enter the number where you want to play = ";
    cin>> choice;

    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'Y'){
        board[row][column] = 'X';
        turn = 'Y';
    }else if(turn == 'Y' && board[row][column] != 'X' && board[row][column] != 'Y'){
        board[row][column] = 'Y';
        turn = 'X';
    }else {
        cout<<"Box already filled!n Please choose another";
        player_turn();
    }
   
}
//function to get the status of the game (win, loss, draw, continue)
bool game_status()
{
	for(i=0; i<3; i++)
	{
		if((board[i][0]==board[i][1] && board[i][0]==board[i][2]) || (board[0][i]==board[1][i] && board[0][i]==board[2][i]))
		{
			return false;
		}
	}
		if((board[0][2]==board[1][1] && board[0][2]==board[2][0]) || (board[1][1]==board[2][2] && board[1][1]==board[2][2]))
		{
			return false; 
		}
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				if(board[i][j]!='X' && board[i][j]!='Y')
				{
					return true;
				}
			}
		}
		draw = true;
		return false;
}


int main()
{
	while(game_status())
	{
		display_board();
		player_turn();
		game_status();
	}
	if(turn == 'X' && draw == false)
	{
		cout<<"Player Y won";
		display_board();
	}
	else if(turn = 'Y' && draw == false)
	{
		cout<<"Player X won";
		display_board();
	}
	else
	{
		cout<<"Game Draw";
		display_board();
	}
	
}
