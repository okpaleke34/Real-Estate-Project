#pragma once
#ifndef HOUSE_H
#define HOUSE_H


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <conio.h>
#include <iomanip>

#include "RealEstate.h"
//#include "../src/RealEstate.cpp"


class House : public RealEstate
{
private:
    string fname, email, phone, username, housetype;
    string size, houseloc, houseprice, str_input;
    int choice, selectType, lastChoice;
public:
    House(string filename) :RealEstate(filename) {

    }
    void registerHouse();
    void buyHouse();
    void display();
};

#endif // HOUSE_H
