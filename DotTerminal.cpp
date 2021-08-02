#include "DotTerminal.h"
using namespace std;
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <sstream>
#include <cmath>
#include <fstream>


int DotTerminal::color(string textColor, string backgroundColor)
{
    int colorValue = 0;

    if(backgroundColor == "Black")
    {
        colorValue = 0;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "DarkBlue")
    {
        colorValue = 16;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "Green")
    {
        colorValue = 32;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "LightBlue")
    {
        colorValue = 48;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "Red")
    {
        colorValue = 64;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "Purple")
    {
        colorValue = 80;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "DarkYellow")
    {
        colorValue = 96;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "LightGrey")
    {
        colorValue = 112;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "Grey")
    {
        colorValue = 128;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "Blue")
    {
        colorValue = 144;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "LightGreen")
    {
        colorValue = 160;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "Cyan")
    {
        colorValue = 176;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "LightRed")
    {
        colorValue = 192;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "Pink")
    {
        colorValue = 208;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    else if(backgroundColor == "Yellow")
    {
        colorValue = 224;
        if(textColor == "Black")
            colorValue = colorValue + 0;
        else if(textColor == "DarkBlue")
            colorValue = colorValue + 1;
        else if(textColor == "Green")
            colorValue = colorValue + 2;
        else if(textColor == "LightBlue")
            colorValue = colorValue + 3;
        else if(textColor == "Red")
            colorValue = colorValue + 4;
        else if(textColor == "Purple")
            colorValue = colorValue + 5;
        else if(textColor == "DarkYellow")
            colorValue = colorValue + 6;
        else if(textColor == "LightGrey")
            colorValue = colorValue + 7;
        else if(textColor == "Grey")
            colorValue = colorValue + 8;
        else if(textColor == "Blue")
            colorValue = colorValue + 9;
        else if(textColor == "LightGreen")
            colorValue = colorValue + 10;
        else if(textColor == "Cyan")
            colorValue = colorValue + 11;
        else if(textColor == "LightRed")
            colorValue = colorValue + 12;
        else if(textColor == "Pink")
            colorValue = colorValue + 13;
        else if(textColor == "Yellow")
            colorValue = colorValue + 14;
    }
    return colorValue;
}

string DotTerminal::int2String(int number)
{
    stringstream numberString;
    numberString << number;
    return numberString.str();
}

string DotTerminal::char2String(char caracter)
{
    stringstream caracterString;
    caracterString << caracter;
    return caracterString.str();
}

char* DotTerminal::string2CharArray(string caracters)
{
    char* charArray;
    strcpy(charArray,caracters.c_str());
    return charArray;
}

char* DotTerminal::int2CharArray(int number)
{
    return string2CharArray(int2String(number));
}


void DotTerminal::setWindowTitle(string _title)
{
    string titleCommand = "title ";
    titleCommand.append(_title);
    system(titleCommand.c_str());
}

void DotTerminal::setWindowSize(string _windowWidth, string _windowHeight)
{
    string windowSizeCommand = "MODE CON COLS=";
    windowSizeCommand.append(_windowWidth);
    windowSizeCommand.append(" LINES=");
    windowSizeCommand.append(_windowHeight);
    system(windowSizeCommand.c_str());
}

void DotTerminal::hideConsoleCursor()
{
   HANDLE hideCursorHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO cursor;
   cursor.dwSize = 100;
   cursor.bVisible = FALSE;
   SetConsoleCursorInfo(hideCursorHandle, &cursor);
}

void DotTerminal::assetInitialization()
{
    HANDLE assetLoadHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(assetLoadHandle, 11);

    int assetLoadTime = 500;
    cout << "####  ##### #####     ##### #####\n"
         << "#   # #   #   #       #   # #    \n"
         << "#   # #   #   #       #   #  ### \n"
         << "#   # #   #   #   ##  #   #     #\n"
         << "####  #####   #   ##  ##### #####\n\n";

    SetConsoleTextAttribute(assetLoadHandle, 2);
    cout << "MADE BY ENE ALEXANDRU ";

    SetConsoleTextAttribute(assetLoadHandle, 14);
    cout << "Version number : " << versionNumber << endl << endl;

    SetConsoleTextAttribute(assetLoadHandle, 4);

    cout << "Loading assets (1%)" << endl;
    Sleep(assetLoadTime);
    cout << "Loading assets (10%)" << endl;
    Sleep(assetLoadTime);
    cout << "Loading assets (23%)" << endl;
    Sleep(assetLoadTime);
    cout << "Loading assets (38%)" << endl;
    Sleep(assetLoadTime);
    cout << "Loading assets (55%)" << endl;
    Sleep(assetLoadTime);
    cout << "Loading assets (78%)" << endl;
    Sleep(assetLoadTime);
    cout << "Loading assets (99%)" << endl;
    Sleep(assetLoadTime);
    cout << "Loading assets (DONE)" << endl;
    Sleep(assetLoadTime*5);
}

DotTerminal::DotTerminal(string titleRequested, int windowWidthRequested, int windowHeightRequested)
{
    //Storing data for other functions
    title = titleRequested;
    if(windowHeightRequested > 49)
        windowHeightRequested = 49;
    if(windowWidthRequested > 200)
        windowWidthRequested = 200;
    windowWidth = windowWidthRequested;
    windowHeight = windowHeightRequested;

    //Terminal initialization
    setWindowTitle(title);
    setWindowSize(int2String(windowWidth), int2String(windowHeight + 1));
    resetScreen();

    //Screen initialization
    hideConsoleCursor();
}

void DotTerminal::resetFrame()
{
    HANDLE frameHandle;
    COORD framePosition;

    frameHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    framePosition.X = 0;
    framePosition.Y = 0;
    SetConsoleCursorPosition(frameHandle, framePosition);
}

void DotTerminal::display()
{
    resetFrame();
    HANDLE consoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    for(int y = 0; y < windowHeight; y++)
    {
        for(int x = 0; x < windowWidth; x++)
        {
            if(screen[y][x].drawn)
            {
                SetConsoleTextAttribute(consoleOutput, screen[y][x].color);
                cout << screen[y][x].text;
            }
            else
            {
                SetConsoleTextAttribute(consoleOutput, 0);
                cout << " ";
            }
        }
        cout << endl;
    }
    SetConsoleTextAttribute(consoleOutput, 7);
}

void DotTerminal::fillRectangle(int PositionStartX, int PositionStartY, int PositionStopX, int PositionStopY, int color, char text[10000])
{
    int textCursorPosition = 0;

    for(int y = PositionStartY; y < PositionStopY; y++)
    {
        for(int x = PositionStartX; x < PositionStopX; x++)
        {
            screen[y][x].drawn = true;
            screen[y][x].color = color;

            if(textCursorPosition <= strlen(text))
            {
                screen[y][x].text = text[textCursorPosition];
                textCursorPosition++;
            }
            else
            {
                screen[y][x].text = ' ';
            }
        }
    }
}

void DotTerminal::fillCircle(int PositionStartX, int PositionStartY,int radius, int color , char text[10000])
{
    int textCursorPosition = 0;
    int sizeThicknesAmount = 0;

    radius = radius + 1;
    PositionStartX = PositionStartX + radius - 2;
    PositionStartY = PositionStartY + radius - 1;



    for(int y = PositionStartY - radius; y < PositionStartY + radius; y++)
    {
        sizeThicknesAmount = 0;
        for(int x = PositionStartX - radius; x < PositionStartX + radius * 3; x++)
        {
            float distanceToCenter = sqrt((y - (PositionStartY))*(y - (PositionStartY)) + (x - (PositionStartX))*(x - (PositionStartX)));
            if(distanceToCenter > radius - 0.5)
            {
                //Transparent blank cell
            }
            else
            {
             screen[y][x + sizeThicknesAmount].drawn = true;
             screen[y][x + sizeThicknesAmount].color = color;

             screen[y][x + sizeThicknesAmount + 1].drawn = true;
             screen[y][x + sizeThicknesAmount + 1].color = color;

             if(textCursorPosition <= strlen(text))
             {
                screen[y][x + sizeThicknesAmount].text = text[textCursorPosition];
                textCursorPosition++;
                if(textCursorPosition <= strlen(text))
                {
                    screen[y][x + sizeThicknesAmount + 1].text = text[textCursorPosition];
                    textCursorPosition++;

                }
             }
             else
             {
                screen[y][x + sizeThicknesAmount].text = ' ';
                screen[y][x + sizeThicknesAmount + 1].text = ' ';
             }
            }
            sizeThicknesAmount++;
        }
    }
}

void DotTerminal::resetScreen()
{
    for(int y = 0; y  < windowHeight; y++)
    {
        for(int x = 0; x < windowWidth; x++)
        {
            screen[y][x].drawn = false;
            screen[y][x].text = ' ';
            screen[y][x].color = 0;
        }
    }
}

void DotTerminal::fillRectangleInactive(int PositionStartX, int PositionStartY, int PositionStopX, int PositionStopY)
{
    for(int y = PositionStartY; y < PositionStopY; y++)
    {
        for(int x = PositionStartX; x < PositionStopX; x++)
        {
            screen[y][x].drawn = false;
        }
    }
}

void DotTerminal::fillCanvas(int color, char text)
{
    for(int y = 0; y < windowHeight; y++)
    {
        for(int x = 0; x < windowWidth; x++)
        {
            screen[y][x].drawn = true;
            screen[y][x].text = text;
            screen[y][x].color = color;
        }
    }
}

void DotTerminal::copyRectangle(int PositionStartX, int PositionStartY, int PositionStopX, int PositionStopY, int PositionCopyStartX, int PositionCopyStartY, int PositionCopyStopX, int PositionCopyStopY)
{
    for(int y = PositionStartY, yCopy = PositionCopyStartY; y <= PositionStopY, yCopy <= PositionCopyStopY; y++ , yCopy++)
    {
        for(int x = PositionStartX, xCopy = PositionCopyStartX; x <= PositionStopX, xCopy <= PositionCopyStopX; x++ , xCopy++)
        {
            screen[y][x].drawn = screen[yCopy][xCopy].drawn;
            screen[y][x].color = screen[yCopy][xCopy].color;
            screen[y][x].text = screen[yCopy][xCopy].text;
        }
    }
}

//input functions

int DotTerminal::forceInput()
{
    char key  = getch();
    return (int)key;
}

int DotTerminal::input()
{
    char key;
    if(kbhit())
    {
        key = getch();
        return (int)key;
    }
}

void DotTerminal::fillTextureRectangle(int PositionStartX, int PositionStartY, int PositionStopX, int PositionStopY, char filename[100])
{
    /*TextureColorCodes:

    Black = '.'
    DarkBlue = 'B'
    Green = 'G'
    LightBlue = 'b'
    Red = 'R'
    Purple = 'P'
    DarkYellow = 'Y'
    LightGrey = '#'
    Grey = '/'
    Blue = 'A'
    LightGreen = 'g'
    Cyan = 'C'
    LightRed = 'r'
    Pink = 'p'
    Yellow = 'y'

    */
    ifstream textureFile;
    textureFile.open(filename);
    char textureCursor;

    for(int y = PositionStartY; y < PositionStopY; y++)
    {
        for(int x = PositionStartX; x < PositionStopX; x++)
        {
            textureFile >> textureCursor;
            switch(textureCursor)
            {
            case '.':
                screen[y][x].drawn = true;
                screen[y][x].color = color("LightGrey","Black");
                break;
            case 'B':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","DarkBlue");
                break;
            case 'G':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","Green");
                break;
            case 'b':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","LightBlue");
                break;
            case 'R':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","Red");
                break;
            case 'P':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","Purple");
                break;
            case 'Y':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","DarkYellow");
                break;
            case '#':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","LightGrey");
                break;
            case '/':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","Grey");
                break;
            case 'A':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","Blue");
                break;
            case 'g':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","LightGreen");
                break;
            case 'C':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","Cyan");
                break;
            case 'r':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","LightRed");
                break;
            case 'p':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","Pink");
                break;
            case 'y':
                screen[y][x].drawn = true;
                screen[y][x].color = color("Black","Yellow");
                break;
            case '*':
                break;
            }
        }
    }
}
void DotTerminal::wait(int amoutOfTime)
{
    Sleep(amoutOfTime);
}




