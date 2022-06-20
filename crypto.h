#include <openssl/bn.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>

#include <stdio.h>
#include <string.h>

int createRSAKeys(char* username);
int encrypt_decrypt(char *username);