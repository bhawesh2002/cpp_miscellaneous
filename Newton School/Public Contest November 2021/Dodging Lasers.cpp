/*Problem Statement
Alice like grids. Today, she is playing a computer game on an N*M grid.

The rows of the grid are numbered from 1 to N and the columns are numbered from 1 to M. The cell in row A and column B is represented as (A, B).

The grid has K lasers in it. Each laser is fixed at a single cell of the grid and can either defend the whole row it is placed in, or the whole column it is placed in.
Alice's player starts on the cell (1, 1) at time t = 0. Every second the following process takes place:

Alice chooses a neighbouring cell (a cell that shares an edge with the current cell) and moves her player to that cell. She cannot choose to remain on the same cell.

All the lasers flip their orientation i. e. if a laser was defending its row, then it now defends its column and vice versa.

If the cell the player landed on is defended by any laser, the player dies and Alice loses instantly.



Note that the player dies only if the cell is defended in the new orientation of the lasers.
The player is allowed to visit the same cell any number of times.
Determine the minimum time it will take Alice to navigate the grid and reach cell (N, M) without losing.
It is guaranteed that no lasers are placed on rows 1 and N, and columns 1 and M. However, a laser may defend cells on these rows and columns.
Input
The first line of input contains three integers: N, M and K. (3 <= N <= 3000, 3 <= M <= 3000, 1 <= K <= 3000)

The next K lines each contain the description of a laser's initial state (at time t = 0). The ith line contains two integers, xi and yi; followed by a character, Oi.

2 <= xi <= N-1
2 <= yi <= M-1

The ith laser is stationed on the cell (xi, yi) and its initial orientation is Oi. Oi is either 'R' or 'C' denoting whether the laser defends its row or column respectively.
Output
Print a single integer, the minimum possible time for Alice to make her player reach (N, M). If it is impossible to reach (N, M) print -1.*/

#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0,k = 0;
    int c = 1;
    int player_loc[1][1] = {(1,1)};
    cin >> n >> m;
    int **grid;
    grid = new int * [n];
    for (int i = 0; i < n; i++)
    {
        grid [i] = new int[m];
    }
    for(int i = 0; i < n; i++){
        delete grid[i];
    }
    delete[] grid;
    return 0;
}