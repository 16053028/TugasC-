//perulangan menggunakan "while" (Nested While Loop)

#include<iostream>
using namespace std;

int main() //initialization Main
 {
    int i=0; //initialization var i = 0
    int c; //initialization var c
    std::cout << "Task1 C++ Advanced Asterik Count" << std::endl;
    std::cout << "Input Maxs asterik : "; //show message
    std::cin >> c; //save the input to var c
    while(i <= c-1) //While Loop condition if i more less or equal c-1
    {
        int n=0; //initialization var n
        while(n <= i) //While Loop condition if n more less or equal i
        {
         n++; //var n add 1
         printf(" * "); // show var n asterik
        }
        i++; //var i add 1
        std::cout << "Line " << n << " = " << i << " Asterik for this line." << std::endl; //Total Asterik 
        printf("\n"); //change line or paragraf
    }
return 0; // \End the program
 }