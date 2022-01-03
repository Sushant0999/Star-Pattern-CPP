#include <iostream>
#include <stdlib.h>
#include "solid_square.h"
#include "hollow_square.h"
#include "inverted_triangle.h"
#include "triangle.h"
#include "number_triangle.h"
#include "floyd's_triangle.h"
#include "butterfly.h"
#include "inverted_numberTriangle.h"
#include "1-0_triangle.h"
#include "rhombus.h"
#include "number_pyramid.h"
#include "palendromic_pattern.h"
#include "star_pattern.h"
#include "zig_zag_pattern.h"

using namespace std;

int main()
{
    char z;
    do
    {

        int x;
        int row, col;
        cout << "Select\n Square\n\t1. Solid Rectangle\n\t2. Hollow Square\n Triangle\n \t3. Inverted Half Triangle\n \t4. Triangle\n \t5. Number Triangle\n\t6. Floyd's Triangle\n\t7. Inverted Number Triangle\n\t8. 1-0 Triangle\n\t9. Number Pyramid\n\t10. Palindrome Triangle\nAdvanced Pattern\n\t13. Zig Zag Pattern\n\t14. Star Pattern\n\t15. ButterFly\n\t16. Rhombus"
             << endl;

        cin >> x;
        switch (x)
        {
        case 1:
            system("CLS");
            cout << "Enter row size" << endl;
            cin >> row;
            cout << "Enter column size" << endl;
            cin >> col;
            rectangle(row, col);
            break;

        case 2:
            system("CLS");
            cout << "Enter row size" << endl;
            cin >> row;
            cout << "Enter column size" << endl;
            cin >> col;
            hRectangle(row, col);
            break;

        case 3:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            invertedTriangle(col);
            break;

        case 4:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            triangle(col);
            break;

        case 5:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            numberTriangle(col);
            break;

        case 6:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            fTriangle(col);
            break;

        case 7:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            invertedNTriangle(col);
            break;

        case 8:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            one_zero_Triangle(col);
            break;

        case 9:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            numberPyramid(col);
            break;

        case 10:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            palindrome(col);
            break;

        case 13:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            zigzag(col);
            break;

        case 14:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            star(col);
            break;

        case 15:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            butterfly(col);
            break;

        case 16:
            system("CLS");
            cout << "Enter column size" << endl;
            cin >> col;
            rhombus(col);
            break;

        default:
            break;
        }
        cout << "\nEnter\n0 to quit\np to continue" << endl;
        cin >> z;
    } while (z != '0');
    return 0;
}