#include "Land.h"


#define LAND "lands.csv"

using namespace std;

void Land::registerLand()
{
    cout << " " << endl;
    cout << "Please enter your name" << endl;
    cin >> username;
    cout << "Please enter your Email" << endl;
    cin >> email;
    cout << "Please enter your phone number" << endl;
    cin >> phone;
    cout << "************************************" << endl;
    cout << "Hi " << username << "   Enter Your Land details below   " << endl;
    cout << "  " << endl;
    cout << "Land Type [e.g Service,construction etc]:" << endl;
    cin >> landtype;
    cin.ignore();
    cout << "Dimension [e.g 1000 square meter]:" << endl;
    getline(cin, size);
    cout << "Land Location [e.g Cieplice ]:" << endl;
    getline(cin, landloc);
    cout << "Price [e.g 50, 000 PLN]:" << endl;
    getline(cin, landprice);
    cout << "****************************" << endl;
    cout << username << "  Your land has been successfully registered!" << endl;
    cout << "****************************" << endl;
    cout << "Land type: " << landtype << endl;
    cout << "Land Dimension: " << size << endl;
    cout << "Land Location: " << landloc << endl;
    cout << "Land Price: " << landprice << endl;
    cout << "****************************";
    cout << "\n * Thanks for visiting us *\n";
}

void Land::display()
{
    cout << "\n *** List of Available Lands for sale *** \n";
    vector<vector<string>> content;
    this->printAll(content);
}
void Land::buyLand()
{

    //Menu menu;
    this->display();
    cout << "***BUY OPTION*** \n";
    vector<vector<string>> content;
    try {
        content = this->fetchAll();
        cout << "Press -1 to go to main menu\nPress 0 to go back to choose options\n";
        for (int i = 0; i < content.size(); i++)
        {
            if (i != 0) {
                cout << "Press " << i << " to buy " << content[i][0] << " plot, " << content[i][1] << " " << content[i][2] << " for " << this->moneyFormat<string>(content[i][3]) << " PLN\n";
            }
        }
    }
    catch (const std::runtime_error& ex) {
        cerr << ex.what() << endl;
        cout << "\nCould not open the file" << endl;
        exit(3);
    }

    cout << "\nPlease enter  your Choice:\t";
    cin >> choice;
    if (choice == -1) {
        //menu.displayChoice();
    }
    else if (choice == 0) {
        this->buyLand();
    }
    else {
        vector<string> row;
        try {
            row = this->fetchRow(choice);
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
                cout << "PLOT TYPE" << setw(30) << "DIMENSION" << setw(30) << "LOCATION" << setw(30) << "PRICE" << endl;
                cout << row[0] << setw(30) << row[1] << setw(30) << row[2] << setw(30) << this->moneyFormat<string>(row[3]) << " PLN" << endl;

                cout << "\nThanks for buying a land \nDo you want to make use of other services in ZIELONY Real Estate?\n1 To go to menu\n2 To end the application\nEnter choice:\t";
                cin >> lastChoice;
                if (lastChoice == 1) {
                    //menu.displayChoice();
                }
                else {
                    cout << "\n * Thanks for visiting us *\n";
                }
            }
            else {
                cout << "\n Wrong Choice;\t Try Again" << endl;
            }

        }
        catch (const std::out_of_range& ex) {
            cerr << ex.what() << endl;
            cout << "\n Wrong Choice\t Try Again" << endl;
            this->buyLand();
        }
    }
}
