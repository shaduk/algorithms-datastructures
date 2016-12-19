// java.util.* has been imported for this problem.
// You don't need any other imports.

public static void flipItVerticalAxis(int[][] matrix) {
    for(int i = 0; i < matrix.length; i++)
    {
        int n = matrix[i].length;
        for(int j = 0; j < n/2; j++)
        {
            int l = n - j - 1;
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][l];
            matrix[i][l] = temp;
        }
    }
}