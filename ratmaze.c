#include <stdio.h>
#include <stdbool.h>

bool pathPossible(int maze[4][4], int n, int x, int y)
{
    if (x >= n || y >= n)
        return false;

    if (maze[x][y] == 0)
        return false;

    if (x == n - 1 && y == n - 1 && maze[x][y] == 1)
        return true;

    bool op1 = pathPossible(maze, n, x + 1, y);

    if (op1)
        return true;

    return pathPossible(maze, n, x, y + 1);

    // return op1 || op2;
}

int main()
{
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
    };

    int n = 4;

    if (pathPossible(maze, n, 0, 0))
    {
        printf("Path Exists");
    }

    else
        printf("Path Does not exists");
}

