#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    //my code
    virtual void setVal1 (int value1);
    virtual void setStep (int value2);
    virtual void zoom1X();
    virtual void zoom2X();
    virtual void zoom4X();
    virtual void zoom8X();
protected:
    //for general purpose
    float buffer1 = 0;
    float buffer2 = 0;
    int buffer3 = 0;
    int buffer4 = 0;
    float buffer5 = 0;
    float buffer6 = 0;
    //my variables
    int position = 0;
    int distance = 0;
    //for scanning
    const float PI = 3.14;
    float degree = 0;
    int degreeInt = 0;
    float relativeDegree = 0;
    float relativeDegreeBuffer = 0;
    int side = 0; //1 means it's left, 2 it's midle, 3 means it's rigth
    float hypotenuse = 0;
    int prescaler = 1;
    int maxDistance = 220;
    float sideA = 0; //horizontal (bottom) part of triangle
    float sideB = 0; //vertical part of triangle
    float radians = 0;
    float positionX1 = 0;
    float positionY1 = 0;
    //for line
    const float lineLenght = 220;
    float sideC = 0; //set initial
    float sideD = 0; //set initial
    float degree1 = 0;
    float relativeDegree1 = 0;
    float radians1 = 0;
    int side1 = 0; //1 means it's left, 2 it's midle, 3 means it's rigth
    float positionX2 = 0;
    float positionY2 = 0;
};


#endif // SCREEN1VIEW_HPP
