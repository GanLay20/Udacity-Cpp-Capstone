# Udacity-Capstone

This is my repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213).
This project is regarding monoalphabetic cipher,in which a character in the (Data.txt)text is always changed to the same character in the ciphertext(cipherData.txt) regardless of its position in the text.

# Project Description

Cryptography means "secret writing" in Greek origins. There are two broad categories of cryptography: symmetric and asymmetric. In symmetric-key cryptography, we can use the same key for both encryption and decryption. The key can be used for bidirectional communication, which is why it is called symmetric. For example, Alex, sends a message to another entity, Bobby, over an insecure channel with the assumption that an adversary cannot understand the contents of the message by simply eavesdropping over the channel. The original message from Alex to Bobby is plaintext; the message that is sent through the channel is ciphertext. To create the ciphertext from the plaintext, Alice uses an encryption algorithm and a shared secret key. To create the plaintext from the ciphertext, Bobby uses a decryption algorithm and the same secret key. We refer to encryption and decryption algorithms as ciphers. A key is a value or a set of values that the cipher, as an algorithm, uses. For instance, if the algorithm says that the letter A in the plaintext is changed to the letter D, every letter A is changed to the letter D. In other words, the relationship between letters in the plaintext and the ciphertext is one-to-one. One of the common monoalphabetic ciphers uses a two-dimensional table for encryption and decryption. The following array shows a mapping between Text and Ciphertext.

```
const char MonoAlpha::keys[][2] = {{'a','N'},{'b','O'},{'c','A'},{'d','T'},{'e','R'},
                                   {'f','B'},{'g','E'},{'h','C'},{'i','F'},{'j','U'},
                                   {'k','X'},{'l','D'},{'m','Q'},{'n','G'},{'o','Y'},
                                   {'p','L'},{'q','K'},{'r','H'},{'s','V'},{'t','I'},
                                   {'u','J'},{'v','M'},{'w','P'},{'x','Z'},{'y','S'},
                                   {'z','W'}};
```

I create a class named MonoAlpha that includes the secret key, a static two-dimensional array. The class has two public member functions, encrypt and decrypt. There are also two private member functions that change one character in plaintext to ciphertext and vice versa. They are called by the public encryption and decryption functions. In order to test the project,I  need two application files, one at the encryption site and the other at the decryption site. So, I implemented the two main files named: Sender_main and Receiver_main.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./Crypto`.

I created three files named Data.txt,CipherData,txt and Final.txt.
If you want to change the input data, you can change the 'Data.txt' file which is located under build.
You can look decrypted data stream in the 'CipherData.txt', also located under build directory and final retrieved data in "Final.txt".

# Ruberic Points
1. The project demonstrates an understanding of C++ functions and control structures.
2. The project reads data from a file and process the data, or the program writes data to a file.
3. The project accepts user input and processes the input.
4. The project uses Object Oriented Programming techniques.
5. The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
6. All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.
7. Classes use appropriate access specifiers for class members.
8. Classes abstract implementation details from their interfaces.
9. The project makes use of references in function declarations.
10. The project uses smart pointers instead of raw pointers.

# Output Result
```
Default Constructor is created !
--------------------------------------------------------------
Please Enter 1 for Encrytion and 2 for Decryption ! 
1
Start Data Encryption Process... 

Finish Data Encrytion Process ! 

Please check cipherData.txt under build directory 

After Encryption : 
ICFVLHYURAIFVQSJTNAFISANLVIYGRR
--------------------------------------------------------------
Default Constructor is created !
--------------------------------------------------------------
Please Enter 1 for Encrytion and 2 for Decryption ! 
2
--------------------------------------------------------------
 Start Data Decryption Process... 
 
 Finish Data Decrytion Process ! 

 Please check Final.txt under build directory 

After Decryption : 
thisprojectismyudacitycapstonee
--------------------------------------------------------------
The destructor was called ! 
```
