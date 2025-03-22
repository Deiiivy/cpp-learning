#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <type_traits>


class Player {
  char symbol;


  public: 
    Player(char sym = 'X') : symbol(sym) {}

    char getSymbol() const { return  symbol; }
};

class Board {
  private: 
    char matriz[3][3];
    int filledCells;

  public:
    Board() : filledCells(0) {
      for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
          matriz[i][j] = ' ';
        }
      }
    }

    void drawBoard() const {
      std::cout << "-------------" << std::endl;
        for (int i = 0; i < 3; i++) {
          std::cout << "| ";
            for (int j = 0; j < 3; j++) {
              std::cout << matriz[i][j] << " | ";
            }
            std::cout << std::endl << "-------------" << std::endl;
        }
    }

    bool isValidMovement(int row, int col) {
     return (row >= 0 && row < 3 && col >= 0 && col < 3 && matriz[row][col] == ' ');
    }


    void makeMove(int row, int col, char symbol) {
      if(isValidMovement(row, col)){
        matriz[row][col] = symbol;
        filledCells++;
      }
    }


    bool checkWin(char symbol) const {

      // check rows
      for (int i = 0; i < 3; i++) {
        if(matriz[i][0] == symbol && matriz[i][1] == symbol && matriz[i][2] == symbol){
          return true;
        }
      }

      // check cols 
      for(int i = 0; i < 3; i++){
        if(matriz[0][i] == symbol && matriz[1][i] == symbol && matriz[2][i] == symbol){
          return true;
        }
      } 

      // check diagonals
        if(matriz[0][0] == symbol && matriz[1][1] == symbol && matriz[2][2] == symbol){
          return true;
        }

        return false;
    }

     bool isFull() const {
        return filledCells == 9;
    }
};

class TicTacToe{
  private:
    Board board;
    Player players[2];
    int currentPlayerIndex;

  public:
    TicTacToe() : currentPlayerIndex(0) {
    players[0] = Player('X');
    players[1] = Player('0');
  }
    Player& getCurrentPlayer(){
      return players[currentPlayerIndex];
    }

    void switchTurn(){
      currentPlayerIndex = (currentPlayerIndex + 1) % 2;
    }

    void play() {
      int row, col;


      std::cout << "Bienvenido a TIC TAC TOE " << std::endl;

      while (!board.isFull()) {
        board.drawBoard();
        Player& currentPlayer = getCurrentPlayer();

        while (true) {
          std::cout << currentPlayer.getSymbol() << " ingresa una fila(1,3) y una columna(1,3) ejemplo 1 3: ";
          std::cin >> row >> col;
          row--;
          col--;


        if(board.isValidMovement(row, col)){
          break;
        }else {
          std::cout << "movimiento invalido. intenta de nuevo " << std::endl;
        }
      }

      board.makeMove(row, col, currentPlayer.getSymbol());

      if(board.checkWin(currentPlayer.getSymbol())) {
        board.drawBoard();
        std::cout << currentPlayer.getSymbol() << "Gano!!" << std::endl;
        return;
      }

      switchTurn();

    }
      board.drawBoard();
      std::cout << "It's a draw!" << std::endl;
}
};

int main () {
  TicTacToe game;

  game.play();

  return 0;
}

