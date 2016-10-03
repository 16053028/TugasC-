//perulangan menggunakan "for" (Nested For Loop)

#include<iostream>
using namespace std;

int main()
 {
    int i, n; //initialization var i and n
    for(i = 0;i <= 8; i++) //"for" loop condition 1
    {
        for(n = 1;n <= i;n++) //"for" loop condition 2
        {
            printf(" * "); // show var n as asterik
        }
        std::cout << " = " << i << " Asterik for this line." << std::endl;
        printf("\n"); //Change line or paragraf
    }
return 0; //End the program
 }
        