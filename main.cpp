#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

char getComputerMove()
{
  int move;
  // genrating the random number in between 0 to 2;
  srand(time(NULL));
  move = rand() % 3;
  // returning the move based on random number generated
  if (move == 0)
  {
    return 'p';
  }
  else if (move == 1)
  {
    return 's';
  }
  else
  {
    return 'r';
  }
}

// function to return the final result
int getResult(char playerMove, char computerMove)
{
  // condition for draw
  if (playerMove == computerMove)
  {
    return 0;
  }
  // condition for win and lose according to rule of game
  if (playerMove == 's' && computerMove == 'p')
  {
    return 1;
  }
  if (playerMove == 's' && computerMove == 'r')
  {
    return -1;
  }
  if (playerMove == 'p' && computerMove == 'r')
  {
    return -1;
  }
  if (playerMove == 'p' && computerMove == 's')
  {
    return -1;
  }
  if (playerMove == 'r' && computerMove == 's')
  {
    return -1;
  }
  if (playerMove == 'r' && computerMove == 'p')
  {
    return 1;
  }
  else
    return 0;
}
int main()
{
  char playerMove;
  cout << "\n\n\n\t\t\tWelcome to Stone Paper Sesior Game" << endl;
  cout << "\n\t\tEnter r for ROCK,p for PAPER,s for SCISSOR\n\t\t\t\t\t";
  // input from the user
  while (1)
  {
    cin >> playerMove;
    if (playerMove == 'p' || playerMove == 's' || playerMove == 'r')
    {
      break;
    }
    else
    {
      cout << "\t\t\t Invalid Player Move !! Please Try Again ." << endl;
    }
  }

  char computerMove = getComputerMove();

  int result = getResult(playerMove, computerMove);
  if (result == 0)
  {
    cout << "\n\t\tGame Draw!!" << endl;
  }

  else if (result == 1)
  {
    cout << "\n\t\tCongratulations Player won the game!" << endl;
  }
  else
  {
    cout << "\n\t\t\tOh! Computer won the game!\n";
  }

  cout << "\t\t\tYour Move: " << playerMove << endl;
  cout << "\t\t\tComputer`s Move: " << computerMove << endl;
  return 0;
}
