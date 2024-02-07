/*
** EPITECH PROJECT, 2023
** MY QUEEN
** File description:
** n queen for n echequier
*/

int verify(int row, int col, int tab[])
{
    int index;

    for (int index = 0; index < col; index++) {
        if (row == tab[index])
            return 0;
        if ( row == tab[index] + col - index)
            return 0;
        if ( row == tab[index] - col + index)
            return 0;
    }
    return 1;
}

int queen_placement(int col, int n, int tab[])
{
    int compt;
    int index;

    if (col == n)
        return 1;
    compt = 0;
    for (index = 0; index < n; index++) {
        if (verify(index, col, tab)) {
            tab[col] = index;
            compt += queen_placement(col + 1, n, tab);
        }
    }
    return compt;
}

int count_valid_queens_placements(int n)
{
    int tab[n];
    int col;

    if ( n == 0)
        return 0;
    col = 0;
    return queen_placement(col, n, tab);
}
