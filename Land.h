#pragma once
#ifndef LAND_H
#define LAND_H

#include "RealEstate.h"


class Land : public RealEstate
{
private:
    int choice, lastChoice;
    string fname;
    string email;
    string phone;
    string username;

    string landtype;
    string landloc;
    string size;
    string   landprice;
public:
    Land(string filename) :RealEstate(filename) {

    }
    void registerLand();
    void display();
    void buyLand();

};

#endif // LAND_H
#pragma once
