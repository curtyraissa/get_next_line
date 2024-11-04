#include "get_next_line.h"
#include <stdio.h>

void test_ft_strlen()
{
    printf("Testing ft_strlen:\n");
    printf("Length of 'Hello': %zu (expected 5)\n", ft_strlen("Hello"));
    printf("Length of '': %zu (expected 0)\n", ft_strlen(""));
    printf("Length of NULL: %zu (expected 0)\n\n", ft_strlen(NULL));
}

void test_ft_strchr()
{
    printf("Testing ft_strchr:\n");
    printf("Finding 'e' in 'Hello': %s (expected 'ello')\n", ft_strchr("Hello", 'e'));
    printf("Finding 'z' in 'Hello': %s (expected NULL)\n", ft_strchr("Hello", 'z'));
    printf("Finding '\\0' in 'Hello': %s (expected '')\n\n", ft_strchr("Hello", '\0'));
}

void test_ft_strjoin()
{
    printf("Testing ft_strjoin:\n");
    char *result1 = ft_strjoin("Hello", " World");
    printf("Joining 'Hello' and ' World': %s (expected 'Hello World')\n", result1);
    free(result1);

    char *result2 = ft_strjoin(NULL, "World");
    printf("Joining NULL and 'World': %s (expected 'World')\n", result2);
    free(result2);

    char *result3 = ft_strjoin("Hello", NULL);
    printf("Joining 'Hello' and NULL: %s (expected 'Hello')\n", result3);
    free(result3);

    char *result4 = ft_strjoin(NULL, NULL);
    printf("Joining NULL and NULL: %s (expected NULL)\n\n", result4);
    free(result4);
}

int main()
{
    test_ft_strlen();
    test_ft_strchr();
    test_ft_strjoin();
    return 0;
}

