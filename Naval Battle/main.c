#include <stdio.h>
#include <stdlib.h>

char spaces[10][10][2];
void matrix()
{
    // This function is responsible to generate and print a matrix full of zeros.
    // This matrix will be used to record the boats and ships positions for the game.
    int i,j,c; // 'i' represents the lines and 'j' the columns.
    for(c=0;c<2;c++){
            if (c==1){printf("\n");}

            for(i=0;i<10;i++){
            j=0;
               while(j<10) {
                    if(spaces[i][j][c]<10){
                    printf("%d  ",spaces[i][j][c]);
                    }
                    else{
                        printf("%d ",spaces[i][j][c]);
                    }
                    j++;
               }
               printf("\n");
            }
    }
    printf("\n");
}

void printBoard(int c) // This function is responsible to print a table on the screem, alowing the player to visualize the game board
{
    int i,j;
    printf("     A   B   C   D   E   F   G   H   I   J");
    printf("\n");
    for(i=0;i<10;i++){
            j=0;
            while(j<10) {
                /* The conditions below are used for a better visual representation.
                The differences between them are just the number of spaces used on each "printf"
                statement, so everything on the display will be symmetrical.*/
                if (j==0&&i<=9&&spaces[i][j][c]=='O'){
                    printf(" %d | %c |",i,spaces[i][j][c]);
                }
                else if(j==0&&i<=9){
                    printf(" %d |___|",i);
                }
                else{
                    if(spaces[i][j][c]=='O'){
                        printf(" %c |",spaces[i][j][c]);
                    }
                else{
                    printf("___|");
                }
                }
                j++;
            }
            printf("\n\n");
    }
}

void board(a,b,c)
{
    // This function changes an element on the matrix "spaces" and show what the changes did on the board
    int i,j; // Again, 'i' represents the rows and 'j' the columns

    spaces[b][a][c] = 'O'; // 'b' represents the rows and 'a' the columns
    printBoard(c);
}

int main()
{
    matrix();
    printBoard();
    return 0;
}
