#include <iostream>
#include <conio.h>

using namespace std;

char board [9][9] = {' ',' ',' ', ' ',' ',' ', ' ',' ',' ',
                     ' ',' ',' ', ' ',' ',' ', ' ',' ',' ',
                     ' ',' ',' ', ' ',' ',' ', ' ',' ',' ',
                     ' ',' ',' ', ' ',' ',' ', ' ',' ',' ',
                     ' ',' ',' ', ' ',' ',' ', ' ',' ',' ',
                     ' ',' ',' ', ' ',' ',' ', ' ',' ',' ',
                     ' ',' ',' ', ' ',' ',' ', ' ',' ',' ',
                     ' ',' ',' ', ' ',' ',' ', ' ',' ',' ',
                     ' ',' ',' ', ' ',' ',' ', ' ',' ',' '};

void drawboard (){

cout << "* * * * * * *" << " * * * * * * *" << " * * * * * *" << endl;
cout << "* " << board [0][0] << " | " << board [0][1] << " |   *" << board [0][2] << " " << board [0][3] << " | " << board [0][4] << " | " << board [0][5] << " * " << board [0][6] << " | " << board [0][7] << " |   *" << board [0][8] << endl;
cout << "*-----------*" << "------------*" << "-----------*" << endl;
cout << "* " << board [1][0] << " | " << board [1][1] << " |   *" << board [1][2] << " " << board [1][3] << " | " << board [1][4] << " | " << board [1][5] << " * " << board [1][6] << " | " << board [1][7] << " |   *" << board [1][8] << endl;
cout << "*-----------*" << "------------*" << "-----------*" << endl;
cout << "* " << board [2][0] << " | " << board [2][1] << " |   *" << board [2][2] << " " << board [2][3] << " | " << board [2][4] << " | " << board [2][5] << " * " << board [2][6] << " | " << board [2][7] << " |   *" << board [2][8] << endl;
cout << "* * * * * * *" << " * * * * * * *" << " * * * * * *" << endl;
cout << "* " << board [3][0] << " | " << board [3][1] << " |   *" << board [3][2] << " " << board [3][3] << " | " << board [3][4] << " | " << board [3][5] << " * " << board [3][6] << " | " << board [3][7] << " |   *" << board [3][8] << endl;
cout << "*-----------*" << "------------*" << "-----------*" << endl;
cout << "* " << board [4][0] << " | " << board [4][1] << " |   *" << board [4][2] << " " << board [4][3] << " | " << board [4][4] << " | " << board [4][5] << " * " << board [4][6] << " | " << board [4][7] << " |   *" << board [4][8] << endl;
cout << "*-----------*" << "------------*" << "-----------*" << endl;
cout << "* " << board [5][0] << " | " << board [5][1] << " |   *" << board [5][2] << " " << board [5][3] << " | " << board [5][4] << " | " << board [5][5] << " * " << board [5][6] << " | " << board [5][7] << " |   *" << board [5][8] << endl;
cout << "* * * * * * *" << " * * * * * * *" << " * * * * * *" << endl;
cout << "* " << board [6][0] << " | " << board [6][1] << " |   *" << board [6][2] << " " << board [6][3] << " | " << board [6][4] << " | " << board [6][5] << " * " << board [6][6] << " | " << board [6][7] << " |   *" << board [6][8] << endl;
cout << "*-----------*" << "------------*" << "-----------*" << endl;
cout << "* " << board [7][0] << " | " << board [7][1] << " |   *" << board [7][2] << " " << board [7][3] << " | " << board [7][4] << " | " << board [7][5] << " * " << board [7][6] << " | " << board [7][7] << " |   *" << board [7][8] << endl;
cout << "*-----------*" << "------------*" << "-----------*" << endl;
cout << "* " << board [8][0] << " | " << board [8][1] << " |   *" << board [8][2] << " " << board [8][3] << " | " << board [8][4] << " | " << board [8][5] << " * " << board [8][6] << " | " << board [8][7] << " |   *" << board [8][8] << endl;
cout << "* * * * * * *" << " * * * * * * *" << " * * * * * *" << endl;
}

int main()
{
    drawboard();

    cout << "hayhhhgfba" << endl;
        cout << "hayhhhgfba" << endl;
    
        string answer;
        int KbdAscii;
    
    //        string answer;
    
        cout << "Press keys" << endl;
        do
        {
            while (kbhit()==0); // waite for keypress
            KbdAscii =getch();
    //        cout << KbdAscii << endl; // Debug information
    
            switch (KbdAscii)
            {
                case 224:
                    KbdAscii =getch();
                    cout << "Special Key - reading one more key:  ";
                    switch  (KbdAscii)
                    {
                        case 72:
                            cout << "UpKey" << endl;
                            break;
                        case 75:
                            cout << "LeftKey" << endl;
                            break;
                        case 77:
                            cout << "RightKey" << endl;
                            break;
                        case 80:
                            cout << "DownKey" << endl;
                            break;
                        default:
                            cout << "Key with ASCII= " << KbdAscii << endl;
                            break;
                    }
                break;
                case 13:
                    cout << "Key with ASCII= " << KbdAscii << endl;
                break;
                case 27:    // esc - end game?
                    cout << "EscKey" << endl;
                break;
                case 'a':
                    cout << "a Key" << endl;
                    break;
                case 'f':
                    cout << "f Key" << endl;
                    break;
    
                default:
                    cout << "Key with ASCII= " << KbdAscii << endl;
            }
    
        } while (true);
    
    
    return 0;
}

