char* timeConversion(char* s) {
    static char result[9]; //HH:MM:SS\0
    // Extract hour from first two characters manually
    int hour = (s[0] - '0') * 10 + (s[1] - '0');
    // Check if it's AM or PM
    char period = toupper(s[8]);
    // Apply conversion rules
    if(period == 'A'){
        if(hour == 12) hour = 0; // 12 AM - 00
    } else if (period == 'P'){
        if(hour != 12) hour += 12; // PM - add 12 unless its 12
    }
    
    // Cnostruct final string manually
    result[0] = (hour / 10) + '0';
    result[1] = (hour % 10) + '0';
    result[2] = ':';
    result[3] = s[3]; //minute tens
    result[4] = s[4]; //minute ones
    result[5] = ':';
    result[6] = s[6]; //second tens
    result[7] = s[7]; //second ones
    result[8] = '\0'; //end of string
    
    return result;

}
