#include <stdarg.h>
#include <stdio.h>

void print_all(const char *const format,...) {
    va_list args;
    va_start(args, format);

    while (*format!= '\0') {
        switch (*format) {
            case 'c': {
                char c = (char)va_arg(args, int);
                printf("%c", c);
                break;
            }
            case 'i': {
                int i = va_arg(args, int);
                printf("%d", i);
                break;
            }
            case 'f': {
                double f = va_arg(args, double);
                printf("%f", f);
                break;
            }
            case 's': {
                char *s = va_arg(args, char *);
                if (s == NULL) {
                    printf("(nil)");
                } else {
                    printf("%s", s);
                }
                break;
            }
            default:
                break;
        }
        format++;
    }

    printf("\n");
    va_end(args);
}

int main() {
    print_all("cisff", 'a', 123, 456.789, "Hello", "World", NULL);
    return 0;
}
