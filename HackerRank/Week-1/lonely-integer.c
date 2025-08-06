int lonelyinteger(int a_count, int* a) {
    int i;
    int unique = 0;
    for(i=0;i<a_count;i++){
        unique ^= a[i];
        }
        return unique;

}
