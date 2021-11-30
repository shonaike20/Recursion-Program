#include "answer3.h"

void recPaintRoom( char** room, int numrows, int numcols, int x, int y, int dstCovered );

/* declare any other helper functions here*/
int searchAx(char** room, int numrows, int numcols);
int searchAy(char** room, int numrows, int numcols);

/* Helper function that makes initial call to recursive function */
void paintRoom( char** room, int numrows, int numcols ){
int x; 
x = searchAy(room, numrows, numcols);
int y; 
y = searchAx(room, numrows, numcols);

    /* Call any other helper functions (a helper function to find the 'A' in room may be handy) */
    
    /* Call your recursive function here */
    recPaintRoom(room, numrows, numcols,x,y, 'A');
       
    printf("%d %d\n",x, y);
    
    
    
    
}

int searchAx(char** room, int numrows, int numcols){
int i; int l;

  for(i = 0; i < numrows; i++){
      for(l = 0; l < numcols; l++){
          if(room[i][l]== 'A')
            return i;
            }
          }

}

int searchAy(char** room, int numrows, int numcols){
int i; int l;

  for(i = 0; i < numrows; i++){
      for(l = 0; l < numcols; l++){
          if(room[i][l]== 'A')
            return l;
            }
          }

}

void recPaintRoom( char** room, int numrows, int numcols, int x, int y, int dstCovered ){

    // Base case:
    if(room[x][y]=='*')
      return;
    if(room[x][y]!=' ' && room[x][y] < dstCovered)
      return;
    if(room > 'Z')
      room[x][y]='Z';
    else
      room[x][y]=dstCovered;

    // Recursive case: 
    //Navigate Down
    recPaintRoom(room, x+1, y, numrows, numcols, dstCovered+1);
    //Navigate Left
    recPaintRoom(room, x, y-1, numrows, numcols, dstCovered+1);
    //Navigate Up
    recPaintRoom(room, x-1, y, numrows, numcols, dstCovered+1);
    //Navigate Right
    recPaintRoom(room, x, y+1, numrows, numcols, dstCovered+1);
    

}
 







 