   int max = *arr;
    for (int i = 0; i < arr_count; i++){
        int value = *(arr + i);
        total_sum += value;

        if(value<min){
            min = value;
        }
        if (value>max){
            max = value;
        }
    }
    // min sum = total-max
    // max sum = total -min
    long min_sum = total_sum - max;
    long max_sum = total_sum - min;
    printf("%ld %ld\n", min_sum,max_sum);

}

