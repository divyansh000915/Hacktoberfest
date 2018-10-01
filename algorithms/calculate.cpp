// AUTHOR : theshrewedshrew @ https://github.com/theshrewedshrew
// REASON : Create a program, and or series of cpp files capable of calculating any two numbers.
// NEEDS  : ADD() SUB() MULTI() DIVIDE() MOD()

#include "algorithm-string.h"

using namespace std;


int ADD(int a, int b)
{
    return a+b;
}

int SUB(int a, int b)
{
    return a-b;
}

int MULTI(int a, int b)
{
    return a*b;
}

int DIVIDE(int a, int b)
{
    if(b!=0)
        return a/b;

}

int MOD(int a, int b)
{
    return a%b;

}

void main()
{
    int x , y , ch ;
    char choice ;
    do {cout << " Press          For\n"
         << "   1            Addition\n"
         << "   2            Subtraction\n" 
         << "   3            Multiplication\n"
         << "   4            Division\n" 
         << "   5            Remainder\n" ; 
    cin >> ch ;
    switch (ch) 
   {
       case 1 : ADD(int a, int b) ;
                break ;
       case 2 : SUB(int a, int b) ;
                break ;
       case 3 : MULTI(int a, int b) ;
                break ;
       case 4 : DIVIDE(int a, int b) ;
                break ;
       case 5 : MOD(int a, int b) ;
                break ; 
       default : cout << "Invalid Choice" ;
   }
        
   cout << "\n Want to continue (Y/N) ? " ;
   cin >> choice ;
        
           
                
   } while ( choice == 'Y' ) ;
}
