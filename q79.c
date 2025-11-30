//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);


    for(int d = 0; d < n + m - 1; d++) {
        int row = (d < m) ? 0 : d - m + 1;
        int col = (d < m) ? d : m - 1;

        while(row < n && col >= 0) {
            printf("%d ", mat[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
