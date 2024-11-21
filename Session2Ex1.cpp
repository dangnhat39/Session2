#include <stdio.h>

int main() {
  
    short myShort = -32768; 

    unsigned short myUnsignedShort = 65535; 

    int myInt = -2147483648; 

  
    unsigned int myUnsignedInt = 4294967295; 

   
    long long myLongLong = -9223372036854775807LL; 

   
    unsigned long long myUnsignedLongLong = 18446744073709551615ULL; 

   
    char myChar = 'A'; // Ky tu 'A'.

   
    unsigned char myUnsignedChar = 255; // Gia tri toi da cua unsigned char.


    float myFloat = 3.14159; // Gia tri gan dung cua pi.

   
    double myDouble = 2.718281828459045; // Gia tri cua hang so e.

    printf("short: %d\n", myShort);
    printf("unsigned short: %u\n", myUnsignedShort);
    printf("int: %d\n", myInt);
    printf("unsigned int: %u\n", myUnsignedInt);
    printf("long long: %lld\n", myLongLong);
    printf("unsigned long long: %llu\n", myUnsignedLongLong);
    printf("char: %c\n", myChar);
    printf("unsigned char: %u\n", myUnsignedChar);
    printf("float: %f\n", myFloat);
    printf("double: %lf\n", myDouble);

    return 0;
}

