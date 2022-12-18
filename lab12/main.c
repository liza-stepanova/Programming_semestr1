#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2, *result;
    char ch;

    f1 = fopen("file1.txt", "r");
    // открылся ли файл 1
    if (f1 == NULL) {
        perror("file1.txt");
        exit(0);
    }

    f2 = fopen("file2.txt", "r");
    // открылся ли файл 2
    if (f2 == NULL) {
        perror("file2.txt");
        exit(0);
    }

    result = fopen("result.txt", "w");
    // открылся ли файл result
    if (result == NULL) {
        perror("result.txt");
        fclose(f1);
        fclose(f2);
        exit(0);
    }

// запись символов в result, пока не дойдем до конца строки
// когда дошли - выходим из цикла
    while (1) {
        ch = getc(f1);
        if (ch == EOF)
            break;
        else
            putc(ch, result);
    }

    while (1) {
        ch = getc(f2);
        if (ch == EOF)
            break;
        else
            putc(ch, result);
    }

    printf("Файлы скопированы");

    fclose(f1);
    fclose(f2);
    fclose(result);

    return 0;
}