char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    qsort(A, A_count, sizeof(int), asc);
    qsort(B, B_count, sizeof(int), desc);
    
    for (int i = 0; i < A_count; i++){
        if (A[i] + B[i] <k){
            return "NO";
        }
    }
    
    return "YES";

}
