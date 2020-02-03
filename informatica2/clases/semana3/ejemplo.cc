/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



int y = -20;

unsigned int z = 2^31 + 20;



bool isSet3(const short valor){
    
    return valor & 4;
}

bool isSet(const short pos, const short valor){
    
}

int main() {
    
    short c = 114;
    short a = 97;
    short d = c << 3;
    
    printf("los chars son %c, %c, %c\n\n", c, a, d);
    
    short nuevo = c | a;
    
    printf("el nuevo es %c\n\n", nuevo);
    
    if(isSet3(16)){
        printf("si esta activado.\n");
    }else{
        printf("no esta activado.\n");
    }
    
    
    int x = 5;
    
    y = y + 21;
    z = z + 21;
    
    bool resp = x > y || y < z;
    bool resp2 = true;
    
    if(resp){
        printf("x mayor que y");
    }
    
    
    return 0;
}
