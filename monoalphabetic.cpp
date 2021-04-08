
#include"monoalphabetic.h"
#include <fstream>
#include <iostream>
#include <cassert>
using namespace std;


const char MonoAlpha::keys[][2] = {{'a','N'},{'b','O'},{'c','A'},{'d','T'},{'e','R'},
                                   {'f','B'},{'g','E'},{'h','C'},{'i','F'},{'j','U'},
                                   {'k','X'},{'l','D'},{'m','Q'},{'n','G'},{'o','Y'},
                                   {'p','L'},{'q','K'},{'r','H'},{'s','V'},{'t','I'},
                                   {'u','J'},{'v','M'},{'w','P'},{'x','Z'},{'y','S'},
                                   {'z','W'}};



MonoAlpha::MonoAlpha()
{
    cout << "Default Constructor is created !" << endl;
}

MonoAlpha::~MonoAlpha()
{
    cout << "The destructor was called ! " <<endl;
}


void MonoAlpha::encrypt(const char* Data,const char* cipherData)
{
    ifstream indata(Data, ios::in);
    ofstream outdata(cipherData,ios::out);

    char data1,data2;
    while(indata.get(data1))
    {
        data2 = findEncrypt(data1);
        outdata.put(data2);
    }
    indata.close();
    outdata.close();

}

void MonoAlpha::decrypt(const char* cipherData, const char* Data)
{
    ifstream indata( cipherData, ios::in);
    ofstream outdata( Data, ios::out);

    char data1,data2;
    while(indata.get(data1))
    {
        data2 = findDecrypt(data1);
        outdata.put(data2);
    }
    indata.close();
    outdata.close();
}


char MonoAlpha::findEncrypt(char datae)
{
    int x = 0;
    while(true)
    {
        if (keys[x][0] == datae)
        {
            return keys[x][1];
        }
        x++;
    }
}

char MonoAlpha::findDecrypt(char datad)
{
    int x = 0;
    while(true)
    {
        if (keys[x][1] == datad)
        {
            return keys[x][0];
        }
        x++;
    }
}

char MonoAlpha:: get_encrypt_data()
{
    char temp;
    ifstream instr;
    instr.open("CipherData.txt",ios ::in);
    if(!instr.is_open())
    {
        cout << "Data file cannot be opend!" << endl;
        assert(false);
        
    }
    while(instr.get(temp))
    {
        cout.put(temp);
        
    }
    instr.close();
    return temp;
    
}
char MonoAlpha::get_decrypt_data()
{
    char temp;
    ifstream outstr;
    outstr.open("Final.txt",ios ::in);
    if(!outstr.is_open())
    {
        cout << "Cipher Data file cannot be opend!" << endl;
        assert(false);
        
    }
    while(outstr.get(temp))
    {
        cout.put(temp);
    }

    outstr.close();
    return temp;
}

