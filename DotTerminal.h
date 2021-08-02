#ifndef DOTTERMINAL_H
#define DOTTERMINAL_H
using namespace std;
#include <string>

struct screenCell
{
    int color;
    char text;
    bool drawn;
};

class DotTerminal
{
    public:
        //Terminal initialization
        DotTerminal(string title, int windowWidth, int windowHeight);
        void setWindowTitle(string _title);
        void setWindowSize(string _windowWidth, string _windowHeight);
        void assetInitialization();
        void hideConsoleCursor();
        void resetScreen();

        //Conversion functions
        string int2String(int number);
        string char2String(char caracter);
        char* string2CharArray(string caracters);
        char* int2CharArray(int number);
        int color(string textColor, string backgroundColor);

        //Drawing functions
        void resetFrame();
        void display();
        void fillCanvas(int color, char text = ' ');

        void fillRectangle(int PositionStartX, int PositionStartY, int PositionStopX, int PositionStopY, int color, char text[10000] = " ");
        void fillTextureRectangle(int PositionStartX, int PositionStartY, int PositionStopX, int PositionStopY, char filename[100]);
        void fillRectangleInactive(int PositionStartX, int PositionStartY, int PositionStopX, int PositionStopY);
        void copyRectangle(int PositionStartX, int PositionStartY, int PositionStopX, int PositionStopY, int PositionCopyStartX, int PositionCopyStartY, int PositionCopyStopX, int PositionCopyStopY);

        void fillCircle(int PositionStartX, int PositionStartY,int radius, int color , char text[10000] = " ");

        //Input functions
        int forceInput();
        int input();

        //Quality of life functions
        void wait(int amoutOfTime);

    private:
        string versionNumber = "0.4.8";
        string title = "DotTerminal";
        int windowWidth = 100, windowHeight = 25;
        screenCell screen[200][200];
};

#endif
