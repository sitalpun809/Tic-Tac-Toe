### Tic Tac Toe Game in c ### 
A console/terminal basied **Tic-Tac-Toe** which is written in c program, a clean grid layout, input validation, win/draw detection.

# Features
**Two player Mode:** play locally with the friend.(player X and player O)
**Input validation:** prevents player from the overwriting already taken spots or  entering the invalid coordinate.
**Dynamic Board Display:** Real time update of the grid after every move.
**Win and Draw Detection:** Automatically check the row, column and diagonal to detect the win or draw the game.

# Requirement 
to compile and run this program you will need to download c compiler in your system.(such as **GCC**,**Clang**, or **MSVC**)

you can check if GCC is installed by running this commans in the terminal:
'''bash
gcc --version

# How to compile and run
**To compile the c program**
Bash
"gcc Tic_tac_toe.c -o Tic_tac_toe"

**To run the c program**
# On Linux/MacOS
Bash
"./Tic_tac_toe"
# On Windows
Bash
"Tic_tac_toe.exe"

# How to play
- The game start with an empty 3X3 grid number from 1 to 9.
- Player X goes first,followed by player O.
- Enter the corresponding number where you want to place your mark.
- The first player to align 3 of their marks horozontally, vertically, or diagnoally wins the game. If the all 9 spots are wihtout a winner then the game ends in a draw