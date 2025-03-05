#include <stdio.h>
#include <ctype.h>

int count_vowels(const char *str) 
{
    int count = 0;
    while (*str) 
{
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int vowels = count_vowels(str);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}

#Code for vowelcounter
