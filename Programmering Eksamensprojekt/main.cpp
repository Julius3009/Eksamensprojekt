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
    int svar;
    char svar2;
    char tal;
    int x, y;
    
    cout << "Velkommen til Sudoku" << endl;
    
    cout << "Tast 1 for at se reglernerne" << endl;
    cout << "Tast 2 for at spille spillet" << endl;

    cin >> svar;
    
    if ((svar = 1)){
        cout << "Soduko pladen " << endl;
        
        cout << "For at starte spillet, indtast et tilfældigt bogstav eller tegn" << endl;
        
        cin >> svar2;
        
        while (slutSpil == false) {
            
            
            drawboard();
            
            cout << "Indtast det tal du vil placere" << endl;
            cin >> tal;
            
            cout << "Indtast koordinaterne til det felt du vil placere dit tal i";
            cin >> y; cin >> x;
            
            y--;
            x--;
                       placerTal(tal, y, x);
            

        }
        
    } else {
        
    
    
    
    while (slutSpil == false) {
      
        
        drawboard();
        
        cout << "Indtast det tal du vil placere" << endl;
        cin >> tal;
        
        cout << "Indtast koordinaterne til det felt du vil placere dit tal i";
        cin >> y; cin >> x;
        
        y--;
        x--;
                   placerTal(tal, y, x);
        

    }
    
    }
     
    
    

}



void placerTal(char tal , int y, int x){

   if (board[x][y] == ' '){
    board[x][y] = tal;
   
    } else {
          cout << "Dit valgte tal kan ikke placeres i dette felt" << endl;
     }
      cout << endl << endl;

    }






