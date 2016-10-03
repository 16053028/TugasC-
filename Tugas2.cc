//perulangan menggunakan "while" (Nested While Loop)

#include<iostream>
using namespace std;

int main() //initialization Main
 {
    int i=0; //initialization var i = 0
    while(i <= 7) //While Loop condition if i more less or equal 7
    {
     int n=0; //initialization var n = 0
        while(n <= i) //While Loop condition if n more less or equal i
        {
         n++; //var n add 1
         printf(" * "); // show var n asterik
        }
        i++; //var i add 1
        std::cout << " = " << i << " Asterik for this line." << std::endl;
        printf("\n"); //change line or paragraf
    }
return 0; // \End the program
 }