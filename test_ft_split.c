#include <stdio.h>
#include <stdlib.h>

char **ft_split(const char *str, char c);

void print_result(char **result)
{
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
    }
    printf("\n");
}

int main(void)
{
    // Test 1: Splitting a string with a space delimiter
    char **result1 = ft_split("Hello World", ' ');
    printf("Test 1:\n");
    print_result(result1);
    free(result1);

    // Test 2: Splitting a string with a comma delimiter
    char **result2 = ft_split("This,is,a,test", ',');
    printf("Test 2:\n");
    print_result(result2);
    free(result2);

    // Test 3: Splitting a string with a comma delimiter
    char **result3 = ft_split("One,Two,Three,Four", ',');
    printf("Test 3:\n");
    print_result(result3);
    free(result3);

    // Test 4: Splitting an empty string
    char **result4 = ft_split("", ' ');
    printf("Test 4:\n");
    print_result(result4);
    free(result4);

    // Test 5: Splitting a string with no delimiter
    char **result5 = ft_split("NoDelimiter", ',');
    printf("Test 5:\n");
    print_result(result5);
    free(result5);

    return 0;
}// Test 1: Splitting a string with a space delimiter
char **result1 = ft_split("Hello World", ' ');
printf("Test 1:\n");
for (int i = 0; result1[i] != NULL; i++)
{
    printf("%s\n", result1[i]);
}
printf("\n");

// Test 2: Splitting a string with a comma delimiter
char **result2 = ft_split("This,is,a,test", ',');
printf("Test 2:\n");
for (int i = 0; result2[i] != NULL; i++)
{
    printf("%s\n", result2[i]);
}
printf("\n");

// Test 3: Splitting a string with a comma delimiter
char **result3 = ft_split("One,Two,Three,Four", ',');
printf("Test 3:\n");
for (int i = 0; result3[i] != NULL; i++)
{
    printf("%s\n", result3[i]);
}
printf("\n");

// Test 4: Splitting an empty string
char **result4 = ft_split("", ' ');
printf("Test 4:\n");
for (int i = 0; result4[i] != NULL; i++)
{
    printf("%s\n", result4[i]);
}
printf("\n");

// Test 5: Splitting a string with no delimiter
char **result5 = ft_split("NoDelimiter", ',');
printf("Test 5:\n");
for (int i = 0; result5[i] != NULL; i++)
{
    printf("%s\n", result5[i]);
}
printf("\n");

// Test 6: Splitting a string with multiple consecutive delimiters
char **result6 = ft_split("Multiple,,,Delimiters", ',');
printf("Test 6:\n");
for (int i = 0; result6[i] != NULL; i++)
{
    printf("%s\n", result6[i]);
}
printf("\n");

// Test 7: Splitting a string with a tab delimiter
char **result7 = ft_split("Tab\tDelimiter", '\t');
printf("Test 7:\n");
for (int i = 0; result7[i] != NULL; i++)
{
    printf("%s\n", result7[i]);
}
printf("\n");

// Test 8: Splitting a string with a newline delimiter
char **result8 = ft_split("Newline\nDelimiter", '\n');
printf("Test 8:\n");
for (int i = 0; result8[i] != NULL; i++)
{
    printf("%s\n", result8[i]);
}
printf("\n");

// Test 9: Splitting a string with a special character delimiter
char **result9 = ft_split("Special!Character!Delimiter", '!');
printf("Test 9:\n");
for (int i = 0; result9[i] != NULL; i++)
{
    printf("%s\n", result9[i]);
}
printf("\n");

// Test 10: Splitting a string with a space delimiter at the beginning and end
char **result10 = ft_split("  Space Delimiter  ", ' ');
printf("Test 10:\n");
for (int i = 0; result10[i] != NULL; i++)
{
    printf("%s\n", result10[i]);
}
printf("\n");