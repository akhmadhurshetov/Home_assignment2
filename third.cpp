#include <iostream>
using namespace std;
 
int main() {
    float fahren, celsius;
 
    cout << "Input:\n";
    cin >> celsius;
 
    // convert celsius to fahreneheit
    // Multiply by 9, then divide by 5, then add 32
    fahren =(9.0/5.0) * celsius + 32;
 
    cout << "The temperature in Farenheit is equal to " << fahren;
     
    return 0;
}