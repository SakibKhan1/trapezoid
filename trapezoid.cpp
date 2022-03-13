/*
Author: Ashok Surujdeo
Course: CSCI-135
Instructor: Tong Yi
Assignment: Trapezoid
Writes a program 
that prints an upside-down 
trapezoid of given width and height.
Parameters must be correct or an invalid
message will be made. 
*/

#include <iostream>
using namespace std;

int main()
{
    int width, height, spaces, i, j, b; 
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";  
    cin >> height;
    cout << endl;  //prints shape on new line
    if (width % 2 == 0 && height > width / 2)  //width divided by a number divisbile by 2, each new line has 2 less *
    {
        cout << "Impossible shape!";
    }
    else if (width % 2 != 0 && height > (width / 2 + 1))  
    {
        cout << "Impossible shape!";  //otherwise print "Impossible shape!"
    }
    else
    {
        spaces = 0;
        for (i = 1; i <= height; i++)  //height increases by 1
        {
            for (b = 0; b < spaces; b++)  //loop to print spaces
                cout << " ";

            for (j = i; j <= width; j++)  
                cout << "*";

            cout << endl;  

            width = width - 1;  

            spaces++;  
        }
    }
    return 0;
}
