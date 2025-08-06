int* countingSort(int arr_count, int* arr, int* result_count) {
    *result_count = 100;
    int* freq = (int*)calloc(*result_count, sizeof(int));
    
    // count frequencies
    for (int i = 0; i < arr_count; i++){
        freq[arr[i]]++;
    }
    
    return freq; // Return frequency array

}
