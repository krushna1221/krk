#include <iostream>
 using namespace std; 
// Inline function definition inline
int add(int a, int b)
{ 
    return a + b; 
} 
int main()
{
     int x = 10, y = 20;
     int result = add(x, y); // function 
      cout << "Addition is: " << result << endl;
      return 0; 
} 

/*output
PS C:\cpp> g++ oop7.cpp
PS C:\cpp> ./a.exe     
Addition is: 30
*/