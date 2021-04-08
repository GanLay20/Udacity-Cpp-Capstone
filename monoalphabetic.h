#ifndef SIMPLE_CRYPTO_MONOALPHABETIC_H
#define SIMPLE_CRYPTO_MONOALPHABETIC_H

#include <iostream>
#include <string>
using namespace std;


class MonoAlpha
{
private:
    static const char keys[][2];
    char findEncrypt(char datae);
    char findDecrypt(char datad);
   // std::string final_encrypt_data;
    //std::string final_decrypt_data;
    

public:
    std::string final_encrypt_data;
    std::string final_decrypt_data;
    MonoAlpha();
    ~MonoAlpha();
    void encrypt(const char* Data,const char* cipherData);
    void decrypt(const char* cipherData,const char* Data);
    char get_encrypt_data();
    char get_decrypt_data();

};
#endif //SIMPLE_CRYPTO_MONOALPHABETIC_H