
#include "monoalphabetic.h"
#include<memory>
using namespace std;

int main()
{
    unsigned int choice;

    std::unique_ptr<MonoAlpha> mono_obj(new MonoAlpha());
   

    cout << "--------------------------------------------------------------" <<endl;
    cout<< "Please Enter 1 for Encrytion and 2 for Decryption ! " <<endl ;
    cin >> choice ;
    if (choice == 1)
    {
        cout<< "Start Data Encryption Process... \n" << endl;
        mono_obj->encrypt( "Data.txt","CipherData.txt");
        cout<< "Finish Data Encrytion Process ! \n"<< endl;
        cout<<"Please check cipherData.txt under build directory \n" <<endl;
        cout << "After Encryption : " << endl;
        cout << mono_obj-> get_encrypt_data() <<endl;
        cout << "--------------------------------------------------------------" << endl;;
    }
    else if(choice == 2)
    {
        cout << "--------------------------------------------------------------" << endl;
        cout<< " Start Data Decryption Process... \n " << endl;
        mono_obj->decrypt( "CipherData.txt","Final.txt");
        cout<< " Finish Data Decrytion Process ! \n"<< endl;
        cout<<" Please check Final.txt under build directory \n"<<endl;
        
        cout << "After Decryption : "  <<endl;
        cout << mono_obj->get_decrypt_data() << endl;
        cout << "--------------------------------------------------------------" << endl;
    }
    else
    cout << "Exit" <<endl;

   
    return 0;

}


