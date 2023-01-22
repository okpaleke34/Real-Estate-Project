//#include "../include/House.h"
#include "House.h"
//#include "Menu.h"

#define HOUSE "houses.csv"

using namespace std;

void House::registerHouse()
{
    cout << " " << endl;
    cout << "Please enter your name" << endl;
    cin >> username;
    cout << "Please enter your Email" << endl;
    cin >> email;
    cout << "Please enter your phone number" << endl;
    cin >> phone;
    cout << "************************************" << endl;
    cout << "Hi " << username << "   Enter Your House details below   " << endl;
    cout << "  " << endl;
    cout << "House Type [e.g detached,duplex etc]:" << endl;
    cin >> housetype;
    cin.ignore();
    cout << "Dimension [e.g 1000 square meter]:" << endl;
    getline(cin, size);
    cout << "House Location [e.g Cieplice ]:" << endl;
    getline(cin, houseloc);
    cout << "Price [e.g 50, 000 PLN]:" << endl;
    getline(cin, houseprice);
    cout << "****************************" << endl;
    cout << username << "  Your House has been successfully registered!" << endl;
    cout << "****************************" << endl;
    cout << "House type: " << housetype << endl;
    cout << "House Dimension: " << size << endl;
    cout << "House Location: " << houseloc << endl;
    cout << "House Price: " << houseprice << endl;
    cout << "****************************";
    cout << "\n * Thanks for visiting us *\n";
}
void House::display()
{
    RealEstate house(HOUSE);
    cout << "\n *******************List of Available Houses for sale ******************** \n\n";
    vector<vector<string>> content;
    house.printAll(content);
}
void House::buyHouse()
{

    //Menu menu;
    vector<vector<string>> content;

    std::cout << "House do you want to select a house?\n0 Go back to main menu\n1 List all houses\n2 Use search engine\nEnter your choice: ";
    cin >> selectType;
    if (selectType == 0)
    {
        //menu.displayChoice();
    }
    else if (selectType == 1)
    {
        content = this->fetchAll();
    }
    else if (selectType == 2) {
        //Duplex Krakow 3000000-6000000
        //Detached Krakow 300000-6000000
        cin.ignore();
        std::cout << "Please search for a House Using the format `type city min-max`: ";
        std::getline(std::cin, str_input);
        //content = this->findWhere(str_input);
        content = this->fetchWhere(str_input);
    }
    else {
        cout << "\n Wrong Choice\t Try Again" << endl;
        this->buyHouse();
    }


    cout << "***BUY OPTION*** \n";

    this->printAll(content);
    if (content.size() == 1) {
        cout << "-- No house found --\n";
    }
    cout << "Press -1 to go to main menu\nPress 0 to go back to choose options\n";
    for (int i = 0; i < content.size(); i++)
    {
        if (i != 0) {
            cout << "Press " << i << " to buy " << content[i][0] << " house, " << content[i][1] << " " << content[i][2] << " for " << this->moneyFormat<string>(content[i][3]) << " PLN\n";
        }
    }
    cout << "\nPlease enter  your Choice:\t";
    cin >> choice;
    if (choice == -1) {
        //menu.displayChoice();
    }
    else if (choice == 0) {
        this->buyHouse();
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
                cout << "House TYPE" << setw(30) << "DIMENSION" << setw(30) << "LOCATION" << setw(30) << "PRICE" << endl;
                cout << row[0] << setw(30) << row[1] << setw(30) << row[2] << setw(30) << this->moneyFormat<string>(row[3]) << endl;

                cout << "\nThanks for buy a house \nDo you want to make use of other services in ZIELONY Real Estate?\n1 To go to menu\n2 To end the application\nEnter choice:\t";
                cin >> lastChoice;
                if (lastChoice == 1) {
                    //menu.displayChoice();
                }
                else {
                    cout << "\n * Thanks for visiting us *\n";
                }

            }
            else {
                cout << "\nThere is probably a problem with the location of the \\database\\" << HOUSE << ", Check the file configuration and Try Again" << endl;
            }
        }
        catch (const std::out_of_range& ex) {
            cerr << ex.what() << endl;
            cout << "\n Wrong Choice\t Try Again" << endl;
            this->buyHouse();
        }
    }
}
