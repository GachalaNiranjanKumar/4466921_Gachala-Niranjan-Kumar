int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primarySum = 0, secondarySum = 0;
    
    for (int i = 0; i < arr_rows; i++){
        primarySum += arr[i][i];
        secondarySum += arr[i][arr_columns - i - 1];
    }
    
    int diff = primarySum - secondarySum;
    return abs(diff);
}
