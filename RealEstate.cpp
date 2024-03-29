#include "RealEstate.h"


using namespace std;

RealEstate::RealEstate(string filename) {
    file_path.append("database/");
    file_path.append(filename);
}

// fetch a particular row in the csv file using the row index
vector<string> RealEstate::fetchRow(int index)
{
    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file(file_path, ios::in);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            row.clear();

            stringstream str(line);

            while (getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);
        }
    }
    else
    {
        cout << "Could not open the file\n";
        return vector<string>();
    }
    if (index < content.size()) {
        for (int i = 0; i < content.size(); i++)
        {
            if (index == i) {
                return content[i];
            }
        }
    }
    else {
        //Throw an out of range exception if the number looking for does not exist
        throw std::out_of_range("Index does not exist\n");
    }

}


// fetch a particular row in the csv file using the row index
vector<string> RealEstate::fetchRow(vector<vector<string>> content, int index)
{
    if (index < content.size()) {
        for (int i = 0; i < content.size(); i++)
        {
            if (index == i) {
                return content[i];
            }
        }
    }
    else {
        //Throw an out of range exception if the number looking for does not exist
        throw std::out_of_range("Index does not exist\n");
    }

}

// fetch all the rows of the csv data as an associative array(vector)
vector<vector<string>> RealEstate::fetchAll()
{
    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file(file_path, ios::in);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            row.clear();

            stringstream str(line);

            while (getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);
        }
        return content;
    }
    else
    {
        //Throw a runtime error exception if the number looking for does not exist
        throw std::runtime_error("Could not open the file\n");
    }

}

// fetch some rows of the csv data according to the value as an associative array(vector)
vector<vector<string>> RealEstate::fetchWhere(int index, string value)
{
    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file(file_path, ios::in);
    if (file.is_open())
    {
        int i = 0;
        while (getline(file, line))
        {
            row.clear();

            stringstream str(line);
            int j = 0;
            int found = 0;
            while (getline(str, word, ','))
            {
                if (i != 0 && (j == index && value != word)) {
                    found = 1;
                    break;
                }
                row.push_back(word);
                j++;
            }
            if (found == 1)
                continue;
            content.push_back(row);
            i++;
        }
        return content;
    }
    else
    {
        cout << "Could not open the file\n";
        return {};
    }

}

// fetch some rows of the csv data according to the value as an associative array(vector)
vector<vector<string>>  RealEstate::fetchWhere(string str_input)
{

    vector<vector<string>> content;
    vector<string> row;
    string line, word;
    fstream file(file_path, ios::in);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            row.clear();

            stringstream str(line);

            while (getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);
        }
    }
    else {
        cout << "Could not open the file\n";
    }

    string rowType, rowDim, rowLocation, rowPrice;
    vector<vector<string>> retContent;
    //make search
    for (int i = 0; i < content.size(); i++)
    {
        rowType = content[i][0];
        rowLocation = content[i][2];

        if (this->str_tolower(rowType).find(this->str_tolower(str_input)) != std::string::npos || this->str_tolower(rowLocation).find(this->str_tolower(str_input)) != std::string::npos) {
            retContent.push_back(content[i]);
        }
    }
    return retContent;
}
//convert string to upper case
string  RealEstate::str_toupper(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}


//convert string to lower case
string  RealEstate::str_tolower(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}
//Remove row from the CSV file
void RealEstate::removeRow(int rowID)
{

    // Open the file for reading
    ifstream inputFile(file_path);

    // Check if the file is open
    if (inputFile.is_open()) {
        string newData = "";
        // Current row
        int currentRow = 0;

        // String to hold the current line
        string line;

        // Read through the file line by line
        while (getline(inputFile, line)) {
            // Check if the current row is the row to remove
            if (currentRow != rowID) {
                // Write the line to the temporary file
                newData += line+"\n";
            }
            currentRow++;
        }

        // Close the input file
        inputFile.close();

        //remove the new line
        newData = newData.substr(0, newData.length()-2);
        //Open the file again and write to it
        ofstream reWriteFile(file_path);
        reWriteFile << newData << endl;
        reWriteFile.close();
    } 
    else {
        // cout << "Unable to open file " << fileName << endl;
        
        //Throw a runtime error exception if the number looking for does not exist
        throw std::runtime_error("Could not open the file\n");
    }
}

//Add row to CSV file
void RealEstate::addRow(string data){
    // Open the file in append mode
    std::ofstream csvFile(file_path, std::ios_base::app);
    // Add the row
    csvFile << data;
    // Close the file

    csvFile.close();
}
// print all the data in the csv file
void RealEstate::printAll(vector<vector<string>> content)
{
    //vector<vector<string>> content;
    vector<string> row;
    string line, word;
    if (content.empty()) {
        fstream file(file_path, ios::in);
        if (file.is_open())
        {
            while (getline(file, line))
            {
                row.clear();

                stringstream str(line);

                while (getline(str, word, ','))
                    row.push_back(word);
                content.push_back(row);
            }
        }
        else
            cout << "Could not open the file\n";
    }

    for (int i = 0; i < content.size(); i++)
    {
        for (int j = 0; j < content[i].size(); j++)
        {
            if (j == (content[i].size() - 1) && i != 0)
                cout << moneyFormat<string>(content[i][j]) << " PLN";
            else
                cout << content[i][j] << setw(30);
        }
        cout << "\n";
    }
    cout << "\n";

}

//This function takes a string input, convert it to integer then format the integer into money(comma separated digit) and return it as a string
template <typename T>
T RealEstate::moneyFormat(T str) {
    int n;
    std::stringstream ss(str);
    ss >> n;

    auto pad = [](int v, int d) {
        string ans = std::to_string(v);
        if (ans.size() < d) {
            ans = string(d - (int)ans.size(), '0') + ans;
        }
        return ans;
    };
    vector<int> groups;
    while (n > 0) {
        groups.insert(begin(groups), n % 1000);
        n /= 1000;
    }
    string ans = "";
    if (!groups.empty()) {
        ans += std::to_string(groups[0]);
        if (groups.size() > 1) {
            ans += ",";
            for (int i = 1; i + 1 < groups.size(); ++i) {
                ans += pad(groups[i], 3) + ",";
            }
            ans += pad(groups.back(), 3);
        }
    }
    else {
        ans += "0";
    }
    return ans;
}

System::String^ RealEstate::toSystemString(string mystr) {
    System::String^ managedString = gcnew System::String(mystr.c_str());
    return managedString;
}

std::string RealEstate::toStdString(System::String^ s)
{
    System::IntPtr strPointer = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s);
    std::string ret = static_cast<const char*>(strPointer.ToPointer());
    System::Runtime::InteropServices::Marshal::FreeHGlobal(strPointer);
    return ret;
}

bool RealEstate::isValid(string type, const string& input)
{

    // Regular expression definition
    const regex email_pattern(
        "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    const regex phone_pattern(
        "^([+]?[\s0-9]+)?(\d{3}|[(]?[0-9]+[)])?([-]?[\s]?[0-9])+$");

    // Match the string pattern
    // with regular expression
    if (type == "email") {
        return regex_match(input, email_pattern);
    }
    else {
        return regex_match(input, phone_pattern);
    }

}