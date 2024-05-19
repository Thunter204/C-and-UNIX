#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 12
#define COLS 12

void mazeGenerator(char maze[ROWS][COLS]) {
srand(time(0));

for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
maze[i][j] = rand() % 2 ? '#' : ' ';
}
}

int startRow = rand() % ROWS;
int startCol = rand() % COLS;
int endRow = rand() % ROWS;
int endCol = rand() % COLS;

maze[startRow][startCol] = 'S';
maze[endRow][endCol] = 'E';

printf("Starting location: (%d, %d)\n", startRow, startCol);
printf("Ending location: (%d, %d)\n", endRow, endCol);
}

int main() {
char maze[ROWS][COLS];
mazeGenerator(maze);

for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
printf("%c ", maze[i][j]);
}
printf("\n");
}

return 0;
}

