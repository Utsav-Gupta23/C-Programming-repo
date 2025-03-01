#include<stdio.h>

int main() {
  char board[3][3] = {{'X','O','O'},{'O','X','X'},{'X','O','X'}};
  printf("\n%c|%c|%c", board[0][0],board[0][1],board[0][2]);
  printf("\n_____");
  printf("\n%c|%c|%c", board[1][0],board[1][1],board[1][2]);
  printf("\n_____");
  printf("\n%c|%c|%c", board[2][0],board[2][1],board[2][2]);
  return 0;
}