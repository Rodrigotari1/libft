#include <stdio.h>
#include <string.h>
#include "ft_strchr.c"
#include "ft_strcmp.c"
#include "ft_strdup.c"
#include "ft_strlcat.c"
#include "ft_strrchr.c"
#include "ft_strlen.c"
#include "ft_strnstr.c"
// Function prototypes
char *ft_strchr(const char *s, int c);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strdup(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strrchr(const char *s, int c);
size_t ft_strlen(const char *s);
int* generateMultiples(int n, int size);

int main() {
    // Test ft_strchr
    // printf("Testing ft_strchr:\n");
    // const char *str1 = "Hello, World!";
    // char *result1 = ft_strchr(str1, 'o');
    // printf("ft_strchr result: %s\n\n", result1);

    // Test ft_strcmp
    printf("Testing ft_strcmp:\n");
    const char *str2 = "Hello";
    const char *str3 = "Hello, World!";
    int result2 = ft_strcmp(str2, str3);
    printf("ft_strcmp result: %d\n\n", result2);

    // Test ft_strdup
    printf("Testing ft_strdup:\n");
    char *dup = ft_strdup(str1);
    printf("ft_strdup result: %s\n", dup);
    free(dup);
    printf("\n");

    // Test ft_strlcat
    printf("Testing ft_strlcat:\n");
    char dest[20] = "Hello";
    const char *src = ", World!";
    size_t result3 = ft_strlcat(dest, src, sizeof(dest));
    printf("ft_strlcat result: %zu, dest: %s\n\n", result3, dest);

    // Test ft_strrchr
    printf("Testing ft_strrchr:\n");
    char *result4 = ft_strrchr(str1, 'o');
    printf("ft_strrchr result: %s\n\n", result4);

    // Test ft_strlen
    printf("Testing ft_strlen:\n");
    size_t len = ft_strlen(str1);
    printf("ft_strlen result: %zu\n\n", len);

    // Test generateMultiples
    printf("Testing generateMultiples:\n");
    int n = 5;
    int size = 10;
    int* multiples = generateMultiples(n, size);
    if (multiples != NULL) {
        printf("Multiples of %d: ", n);
        for (int i = 0; i < size; i++) {
            printf("%d ", multiples[i]);
        }
        printf("\n");
        free(multiples);
    } else {
        printf("Error in generating multiples.\n");
    }

    return 0;
}