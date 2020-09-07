bool isWin(chargame[3][3]){
 bool win = false;
 //row
  if(game[0][0] == game[0][1] && game[0][1] == game[0][2] && (game[0][0] == 'X'|| game[0][0] == 'O')) win = true;
  if(game[1][0] == game[1][1] && game[1][1] == game[1][2] && (game[1][0] == 'X'|| game[1][0] == 'O')) win = true;
  if(game[2][0] == game[2][1] && game[2][1] == game[2][2] && (game[2][0] == 'X'|| game[2][0] == 'O')) win = true;
 
 // column
  if(game[0][0] == game[1][0] && game[1][0] == game[2][0] && (game[0][0] == 'X'|| game[0][0] == 'O')) win = true;
  if(game[0][1] == game[1][1] && game[1][1] == game[2][1] && (game[0][1] == 'X'|| game[0][1] == 'O')) win = true;
  if(game[0][2] == game[1][2] && game[1][2] == game[2][2] && (game[0][2] == 'X'|| game[0][2] == 'O')) win = true;
 
 // diagonal
  if(game[0][0] == game[1][1] && game[1][1] == game[2][2] && (game[0][0] == 'X'|| game[0][0] == 'O')) win = true;
  if(game[0][2] == game[1][1] && game[1][1] == game[2][0] && (game[0][2] == 'X'|| game[0][2] == 'O')) win = true;
  return win;
 }
 
 bool isEmpty(char cell){ 
     bool isEmpty = true;   
     If(cell != ‘ ‘}{ 
       isEmpty =false; 
     } 
     return isEmpty; 
 } 


 int main(){
  int row, column;
  char game[3][3] = {' '}; // Tic-tac-toe
  char player1 = 'X';
  char player2 = 'O';
  bool turn = true; // false for player 1's turn, true for player 2's turn. Player 1 first.
  cout << "X = Player 1"<< endl << "O = Player 2"<< endl;
  
  for(int n=0; n<9; n++){
    turn = !turn;  // use the not-operator to change true to false or false to true.
      if(turn == false)
        cout << "Player 1: ";
      Else 
        cout << "Player 2: ";
        
      cout << "Which cell to mark? row:[0..2], column:[0..2]: ";
      cin >> row >> column;
      
      //check valid coordinate range input 
      if(row > 2 || row > 2 || column < 0 || column< 0){ 
       //check is the cell empty
       if(isEmpty(game[row][column]){
        if(turn == false)
          game[row][column] = 'X';
        else
          game[row][column] = 'O';

        if(isWin(game)){
          cout << "Win!"<< endl;
          break; // need to terminate the problem
        }
       }else{
            cout << "Coordinate is occupied. Please input another coordinate"; 
            cin >> row >> column; 
       }
      }else{
            cout << "Incorrect coordinate please input within i:[0..2], j:[0..2]:"; 
            cin >> row >> column; 
      }
  }
  if (!isWin(game) && n==9)) // check whether the round ended and the game hasnt has a winner
    cout << "Tie!"<< endl;
    
  // show the game to console
  cout << game[0][0] << " "<< game[0][1] << " "<< game[0][2] << endl;
  cout << game[1][0] << " "<< game[1][1] << " "<< game[1][2] << endl;
  cout << game[2][0] << " "<< game[2][1] << " "<< game[2][2] << endl;
  
 return 0;
}
