#include <iostream>

using namespace std;

int main() {
   int a=0, b=0;
   int sum = 0; int product = 0;
   cout << "Sum and Product of Two Numbers";
   cout << "\n\n";
   cout << "Input : ";
   cin >> a >> b;
   sum = (a+b);
   product = (a*b);
   
   cout <<"\n\n";
   cout << "The result of sum is equal to " << sum <<".";
   
   cout << "The result of product is equal to " << product <<".";

    return 0;
}