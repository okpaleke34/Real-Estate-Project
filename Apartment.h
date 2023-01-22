#pragma once

#ifndef APARTMENT_H
#define APARTMENT_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <conio.h>
#include <iomanip>

#include "RealEstate.h"

using namespace std;

class Apartment : public RealEstate
{
private:
    int choice, lastChoice;
    int apartmentType;
    string typeStr;
    string fname, email, phone;
public:
    Apartment(string filename) :RealEstate(filename) {

    }
    void display(vector<vector<string>> content);
    void rentApartment(vector<vector<string>> content);
    void chooseType();

};

#endif // APARTMENT_H
