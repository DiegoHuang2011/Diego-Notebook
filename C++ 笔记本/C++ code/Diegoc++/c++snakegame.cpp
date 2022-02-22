#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

int N=30,M=20;
int size=16;
int w = size*N;
int h = size*M;

int main()
{
    RenderWindow window(VideoMode(w,h),"Snake Game!");

    Texture t1,t2;
    t1.loadFromFile("image/white.png");
    t2.loadFromFile("image/red.png");

    Sprite sprite1(t1)






}