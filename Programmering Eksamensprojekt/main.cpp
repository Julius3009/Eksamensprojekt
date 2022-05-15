#include <iostream>

using namespace std;


char board [9][9] = {{' ',' ','6','1',' ','2','5',' ',' '},
                    {' ','3','9',' ',' ',' ','1','4',' '},
                    {' ',' ',' ',' ','4',' ',' ',' ',' '},
                    {'9',' ','2',' ','3',' ','4',' ','1'},
                    {' ','8',' ',' ',' ',' ',' ','7',' '},
                    {'1',' ','3',' ','6',' ','8',' ','9'},
                    {' ',' ',' ',' ','1',' ',' ',' ',' '},
                    {' ','5','4',' ',' ',' ','9','1',' '},
                    {' ',' ','7','5',' ','3','2',' ',' '}};

char boardSolved [9][9] = {{'8','4','6','1','7','2','5','9','3'},
                           {'7','3','9','6','5','8','1','4','2'},
                           {'5','2','1','3','4','9','7','6','8'},
                           {'9','6','2','8','3','7','4','5','1'},
                           {'4','8','5','9','2','1','3','7','6'},
                           {'1','7','3','4','6','5','8','2','9'},
                           {'2','9','8','7','1','4','6','3','5'},
                           {'3','5','4','2','8','6','9','1','7'},
                           {'6','1','7','5','9','3','2','8','4'}};

void placerTal(char tal, int y, int x);
bool slutSpil = false;
bool validerInput (char tal, int y, int x);
void check_filled();

void drawboard (){

    cout << "-------------------------------------" << endl;
      for(int i = 0; i < 9; i++) {
        cout << "| ";
        for(int j = 0; j < 9; j++) {
            cout << board[i][j] << " | ";
            
        
        }
         
        cout << endl;
        cout << "-------------------------------------" << endl;
      }
    }



int main()
{
    while (slutSpil == false) {
        char tal;
        int x, y;
        
        drawboard();
        
        cout << "Indtast det tal du vil placere" << endl;
        cin >> tal;
        
        cout << "Indtast koordinaterne til det felt du vil placere dit tal i";
        cin >> y; cin >> x;

        
        if(validerInput(tal, y, x)){
                   placerTal(tal, y-1, x-1);

               } else {
                   cout << "NEJ, kan ikke placeres her!" << endl;
               }
               cout << endl << endl;
        
        

    }
    
  
     
    
    

}

void check_filled() {
    int spots_not_filled = 0;
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            if (board[i][j] == ' ') {
                spots_not_filled++;
            }
        }
    }
    if (spots_not_filled == 0) {
        slutSpil = true;
    }
    
}


void placerTal(char tal , int y, int x){
//board[y][x]=tal;

   if (board[x][y] == ' '){
    board[x][y] = tal;
   }

    }



//     Tjek vandret for samme tal
bool validerInput (char tal, int y, int x){
    for(int valider = 0; valider < 9; valider++){
        if(valider != x){
            if(board[valider][y] == tal){
                return false;
            }
        }
    }
// Tjek lodret for samme tal
    for(int valider = 0; valider < 9; valider++){
        if(valider != y){
            if(board[x][valider] == tal){
            }
        }
    }
    int board_tjek_x, board_tjek_y;
        if(x < 3){
            board_tjek_x = 0;
        }
        else if(x < 6){
            board_tjek_x = 3;
        }
        else {
            board_tjek_x = 6;
        }
        if(y < 3){
            board_tjek_y = 0;
        }
        else if(y < 6){
            board_tjek_y = 3;
        }
        else {
            board_tjek_y = 6;
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int x = board_tjek_x + i;
                int y = board_tjek_y + j;
                if(x != x && y != y){
                    if(board [x][y] == tal)
                    return false;
                }
            }
        }
        return true;
    
    }





