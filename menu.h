#include<iostream>
#include<raylib.h>
#include<vector>
#include<functional>

using namespace std;
#ifndef MENU_H
#define MENU_H

class MenuItem{
    int height, width, Nox, Noy;
    string text;
    Vector2 initPosition, position, initScale,scale, ainmation, cainmation;
    Texture woodie;
    friend class Menu;
    public:
        Vector2 inScale;
        MenuItem(int height, int width, int Nox, int Noy, string text, Vector2 position, Texture woodie);
        void draw();
        Vector2 getInitScale(){return initScale;}
        function<void()> onClick;
};
class Menu{
    vector<MenuItem> menus;
    Texture bg, woodie,title;
    float titleScale;
    public:
        Menu();
        void addMenuItem(int height, int width, int Nox,int Noy, string text, Vector2 position);
        void draw();
        void selectMode(bool, bool);
        void checkMouse();
        MenuItem& getItem(int i);
        friend void showMenu(Menu &menu);
        
};
void addMenu(Menu &menu);
void showMenu(Menu &menu);
#endif //MENU_H 