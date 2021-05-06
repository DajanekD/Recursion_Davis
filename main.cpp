// Dajanek Davis
// Tower of Hanoi
// May 4, 2021 
#include <bits/stdc++.h>
using namespace std;
 
int factorialR(int n)
{
   if(n<=1){
      return n;
   }
   return n*(factorialR(n-1));
}
 
int main()
{
  // Variables
   int n;

   cout << "Please enter a number for the starting point: ";

   cin>>n; //Prompting user for input

   cout << "The factorial is: ";

   cout<<factorialR(n)<<endl;//Recursive call

return 0;
}