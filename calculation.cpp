#include <cmath>
#include <iostream>
#include <windows.h>

using namespace std;

void cls(HANDLE hConsole)
{
    COORD coordScreen = { 0, 0 };    // home for the cursor
    DWORD cCharsWritten;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD dwConSize;

    // Get the number of character cells in the current buffer.
    if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
    {
        return;
    }

    dwConSize = csbi.dwSize.X * csbi.dwSize.Y;

    // Fill the entire screen with blanks.
    if (!FillConsoleOutputCharacter(hConsole,        // Handle to console screen buffer
                                    (TCHAR)' ',      // Character to write to the buffer
                                    dwConSize,       // Number of cells to write
                                    coordScreen,     // Coordinates of first cell
                                    &cCharsWritten)) // Receive number of characters written
    {
        return;
    }

    // Get the current text attribute.
    if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
    {
        return;
    }

    // Set the buffer's attributes accordingly.
    if (!FillConsoleOutputAttribute(hConsole,         // Handle to console screen buffer
                                    csbi.wAttributes, // Character attributes to use
                                    dwConSize,        // Number of cells to set attribute
                                    coordScreen,      // Coordinates of first cell
                                    &cCharsWritten))  // Receive number of characters written
    {
        return;
    }

    // Put the cursor at its home coordinates.
    SetConsoleCursorPosition(hConsole, coordScreen);
}




void circlecalc(long double n){
    long double p, m;

    if (n < 2 && n < 1){
        while(n < 2 && n < 1){
            cout << "Remember that >= or n = log(3)/log(2). Give another number: " << endl;
            cin >> n;
        }
        if(n == 1){
            p = log10(3)/log10(2);
            m = pow(2, p);
            cout << endl << endl << "- Figure number: log(3)/log(2) = " << p << endl;
            cout << "- Number of sides of log(3)/log(2): " << m << endl;
        }
        else if(n >= 2){
            m = pow(2, n);
            cout  << endl << endl << "- Figure number: " << n << endl;
            cout << "- Number of sides of " << n << ": " << m << endl;
        }
    }
    else if(n == 1){
        p = log10(3)/log10(2);
        m = pow(2, p);
        cout << endl << endl << "- Figure number: log(3)/log(2) = " << p << endl;
        cout << "- Number of sides of log(3)/log(2): " << m << endl;
    }
    else{
        m = pow(2, n);
        cout  << endl << endl << "- Figure number: " << n << endl;
        cout << "- Number of sides of " << n << ": " << m << endl;
    }




}


