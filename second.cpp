#include <iostream>
#define PI 3.14159
using namespace std;

    int main()
    {
    float radius, area, circum;
cout << "\n\n Find the area and circumference of any circle :\n";
cout << "----------------------------------------------------\n";
        cout<<" Input : ";
    cin>>radius;
   
    float diameter = 2*radius;
circum = 2*PI*radius;
area = PI*(radius*radius);
cout <<"  The diameter of circle is equal to " << diameter << "\n";
cout<<" The circumference of circle is equal to "<< circum << endl;
        cout<<" The area of circle is equal to "<< area << endl;
       

        cout << endl;
        return 0;
    }