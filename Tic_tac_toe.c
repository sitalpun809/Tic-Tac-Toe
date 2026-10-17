#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    char board[ROW][COL]={' 0',' 0',' 0',' 0',' 0',' 0',' 0',' 0',' 0'};
    char turn = 'X';
    
    while(1)
    {   
        printf("\n");
        printf(" --- | --- | ---\n");
        printf("  %c  |  %c  | %c\n", board[0][0], board[0][1], board[0][2]);
        printf(" --- | --- | ---\n");
        printf("  %c  |  %c  | %c\n", board[1][0], board[1][1], board[1][2]);
        printf(" --- | --- | ---\n");
        printf("  %c  |  %c  | %c\n", board[2][0], board[2][1], board[2][2]);
        printf(" --- | --- | ---\n");
        
        printf("Turn %c\n",turn);

        int row,col;
        printf("Enter the row and column: ");
        scanf("%d%d",&row,&col);
        printf("\n");
        printf("%c",board[row-1][col-1]);
        if(row < 1 || row > 3 || col < 1 || col > 3){
            printf("Please enter the valid row and column!");
            continue;
        }

        if(board[row-1][col-1] != '0'){
            printf("This co-ordinate is already occupied!!");
            continue;
        }
        
        board[row-1][col-1] = turn;
        int count = 1;
        for(int i = 0; i< ROW; i++)
        {
            for(int j = 0; j < COL; j++)
            {
                if(board[i][j] == '0')
                {
                    count = 0;
                    break;
                }
            }
        }
        if(count){
            printf("The game is draw! Play again.");
            break;
        } 

        //  win = {11,12,13},{21,22,23},{31,32,33},   {11,21,31},{12,22,32},{13,23,33},{11,22,33}
        if(
            board[0][0] == turn && board[0][1] == turn && board[0][2] == turn ||
            board[1][0] == turn && board[1][1] == turn && board[1][2] == turn ||
            board[2][0] == turn && board[2][1] == turn && board[2][2] == turn ||
            board[0][0] == turn && board[1][0] == turn && board[2][0] == turn ||
            board[0][1] == turn && board[1][1] == turn && board[2][1] == turn ||
            board[0][2] == turn && board[1][2] == turn && board[2][2] == turn ||
            board[0][0] == turn && board[1][1] == turn && board[2][2] == turn 
        ){
            printf(" --- | --- | ---\n");
            printf("  %c  |  %c  | %c\n", board[0][0], board[0][1], board[0][2]);
            printf(" --- | --- | ---\n");
            printf("  %c  |  %c  | %c\n", board[1][0], board[1][1], board[1][2]);
            printf(" --- | --- | ---\n");
            printf("  %c  |  %c  | %c\n", board[2][0], board[2][1], board[2][2]);
            printf(" --- | --- | ---\n");

            printf("The winner is %c\n",turn);
            break;
        }
        
        if(turn == 'X'){
            turn = 'O';
        }else if(turn == 'O'){
            turn = 'X';
        }
        
    }
}