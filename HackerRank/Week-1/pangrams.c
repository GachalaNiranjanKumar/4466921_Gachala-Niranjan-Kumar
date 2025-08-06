char* pangrams(char* s) {
    int alphabet[26] = {0};
    
    // Mark letters as present (ignore case)
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            char lower = tolower(s[i]);
            alphabet[lower - 'a'] = 1;
        }
    }
    
    // check if all letters are present
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            return "not pangram";
            
        }
    }
    
    return "pangram";

}
