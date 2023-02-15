#pragma once
class ChocolateBoiler
{
private:
    bool empty;
    bool boiled;
public:
    void fill();
    void drain();
    void boil();
    bool isEmpty();
    bool isBoiled();
};


