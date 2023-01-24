#include "Apartment.h"
 

#define APARTMENT "apartments.csv"

using namespace std;

void Apartment::display(vector<vector<string>> content)
{
    cout << "\n *******************List of Available Apartment for rent ******************** \n\n";
    this->printAll(content);
}
void Apartment::chooseType()
{
    vector<vector<string>> content;
    cout << "\nWhich type of apartment do you want?\n0 Go back to main menu\n1 All Apartments\n2 For Studio Apartments \n3 For Flats \nPlease enter your choice:\t";
    cin >> apartmentType;

    if (apartmentType == 0) {
        /*Menu menu;
        menu.displayChoice();*/
    }
    else if (apartmentType == 1) {
        content = this->fetchAll();
    }
    else
    {
        if (apartmentType == 3 || apartmentType == 2) {
            typeStr = apartmentType == 3 ? "Flat" : "Studio";
            content = this->fetchWhere(0, typeStr);
        }
        else {
            cout << "\n Wrong Choice\t Try Again" << endl;
            this->chooseType();
        }
    }
    this->rentApartment(content);

}
void Apartment::rentApartment(vector<vector<string>> content)
{
    this->display(content);
    cout << "***RENT OPTION*** \n";

    try {
        cout << "Press -1 to go to main menu\nPress 0 to go back to choose options\n";
        for (int i = 0; i < content.size(); i++)
        {
            if (i != 0) {
                cout << "Press " << i << " to rent " << content[i][0] << " apartment, " << content[i][2] << " for " << this->moneyFormat<string>(content[i][3]) << "\n";
            }
        }
    }
    catch (const std::runtime_error& ex) {
        cerr << ex.what() << endl;
        cout << "\nCould not open the file" << endl;
        this->chooseType();
    }

    cout << "\nPlease enter  your Choice:\t";
    cin >> choice;

    if (choice == -1) {
        /*Menu menu;
        menu.displayChoice();*/
    }
    else if (choice == 0) {
        this->chooseType();
    }
    else {
        vector<string> row;
        try {
            row = this->fetchRow(content, choice);
            if (!row.empty()) {
                cout << "****************" << endl;

                cin.ignore();
                std::cout << "Enter Your full name: ";
                std::getline(std::cin, fname);

                int e = 0;
                do {
                    if (e != 0) {
                        cout << "Wrong email format..\n" << endl;
                    }
                    cout << "Enter Your Email" << endl;
                    cin >> email;
                    e++;
                } while (!this->isValid("email", email));

                e = 0;
                do {
                    if (e != 0) {
                        cout << "Wrong phone number format..\n" << endl;
                    }
                    cout << "Enter Your Phone number" << endl;
                    cin >> phone;
                    e++;
                } while (!this->isValid("phone", phone));

                cout << "****************" << endl;
                cout << "Hi   " << fname << "  Below is Your order detail" << endl;
                cout << "Apartment TYPE" << setw(30) << "DIMENSION" << setw(30) << "LOCATION" << setw(30) << "PRICE" << endl;
                cout << row[0] << setw(30) << row[1] << setw(30) << row[2] << setw(30) << this->moneyFormat<string>(row[3]) << " PLN" << endl;

                cout << "\nThanks for renting an apartment \nDo you want to make use of other services in ZIELONY Real Estate?\n1 To go to menu\n2 To end the application\nEnter choice:\t";
                cin >> lastChoice;
                if (lastChoice == 1) {
                    /*Menu menu;
                    menu.displayChoice();*/
                }
                else {
                    cout << "\n * Thanks for visiting us *\n";
                }

            }
            else {
                cout << "\nThere is probably a problem with the location of the \database\\" << APARTMENT << ", Check the file configuration and Try Again" << endl;
            }
        }
        catch (const std::out_of_range& ex) {
            cerr << ex.what() << endl;
            cout << "\n Wrong Choice\t Try Again" << endl;
            this->chooseType();
        }
    }
}
