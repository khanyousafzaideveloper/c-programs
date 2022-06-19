#include <iostream>
using namespace std;
int choice;
char board[3][3] = {{'1', '2', '3'},{'4', '5', '6'},{'7', '8', '9'}};
char turn = 'X';
bool draw = false;
int row, col;

void display()
{
    system("cls");
    cout << "\t*****Making ticTacToe game***** " << endl;
    cout << "\t**Player 1 [X]** \t**player[0]**" << endl << endl <<endl;

    cout <<"                |       |       " << endl;
    cout <<"            "<< board[0][0] <<"   |   "<< board[0][1] <<"   |   "<< board[0][2] <<"   " << endl;
    cout <<"        ________|_______|_______" << endl;
    cout <<"                |       |       " << endl;
    cout <<"            "<< board[1][0] <<"   |   "<< board[1][1] <<"   |   "<< board[1][2] <<"   " << endl;
    cout <<"        ________|_______|_______" << endl;
    cout <<"                |       |       " << endl;
    cout <<"            "<< board[2][0] <<"   |   "<< board[2][1] <<"   |   "<< board[2][2] <<"   " << endl;
    cout <<"                |       |       " << endl;
}

void player_turn()
{       
    if(turn == 'X')
    cout << "\t\tIt is player X turn: " << endl;
    if(turn == 'O')
    cout << "\t\tIt is player O turn: " << endl;
    cin >> choice;
    switch(choice)
    {
        case 1: row =0; col=0; break;
        case 2: row =0; col=1; break;
        case 3: row =0; col=2; break;
        case 4: row =1; col=0; break;
        case 5: row =1; col=1; break;
        case 6: row =1; col=2; break;
        case 7: row =2; col=0; break;
        case 8: row =2; col=1; break;
        case 9: row =2; col=2; break;
        default:
        cout << "Invalid";  
        break;
    }
    if(turn == 'X' && board[row][col]!= 'X' && board[row][col]!='O')
    {
        board[row][col] = 'X';
        turn = 'O';
    }    
    else if(turn == 'O'&& board[row][col]!= 'X' && board[row][col]!='O')
    {
        board[row][col] = 'O';
        turn = 'X';
    }
    else
    {
        cout << "\t\tEnter a valid number "<< endl;
        player_turn();
    }
}
bool gameOver()
{
    for(int i=0; i<3; i++)
    if(board[0][i]==board[1][i]&&board[0][i]==board[2][i] || board[i][0]==board[i][1]&&board[i][0]==board[i][2] || board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2]== board[2][0])    
    return false;

    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j]!='X' && board[i][j]!='O')
    return true;

    draw = true;
    return false;
}    

int main()
{
    while(gameOver())
    {
        display();
        player_turn();
        display();
    }
    if(turn=='X' && draw==false)
    cout << "\t\tPlayer 'O' won the match. Congratulatiions";
    else if(turn=='O' && draw == false)
    cout << "\t\tPlayer 'X' won the match. Congratulatiions";
    else
    {
        cout << "game  draw!!! " << endl;
    }
}