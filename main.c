
#include "base_64.h"

int main() {
    char src[] = "welcome";
    char *encoded = Base64Encrypt(src, strlen(src));
    printf("%s\n", Base64Decrypt(encoded, strlen(encoded)));
    return 0;
}