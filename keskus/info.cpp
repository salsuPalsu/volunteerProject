/*
*Author: @SalsuPalsu
*This class is handling different tasks:
* Adding new members in the system
* Adding items to a family by given barcode
* Updating the txt-file that contains all the information about the families
* Checking if barcode is already in use, when adding new members
* Searching for a family by given barcode
* Checking the csv files contents, if they are valid
*
*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include <regex>
#include "info.hh"

Info::Info()
{

}


//Checks if the given string is a number
//If not, returns false
//If is, returns true
bool Info::checkIfNumber(const string& word)
{

    return std::all_of(word.begin(), word.end(), ::isdigit);

}

//Adds new info from given file
//If one of the barcodes is already in use, skips it
//If file cannot be opened, returns false
//If file was opened and had correct information, returns true
//If file was opened but had wrong information, returns false
//^ suchs as incorrect number of columns (>4) and chars instead of digits
bool Info::addFromFile(string f_name)
{

    string number, adult, children, s_children;
    int ignoreFirstLine = 0;

    //Opens the file
    ifstream file (f_name);
    if (!file.is_open()){

        return false;
    } else {
        while (!file.eof()) {

            getline ( file, number, ',' );
            getline ( file, adult, ',' );
            getline ( file, children, ',' );
            file >> s_children;

            //deletes the next line from the number
            number = regex_replace(number, regex("\\r\\n|\\r|\\n"),"");

            //The first line is ignored, and the number (barcode) cannot be empty
            if (ignoreFirstLine > 0 && number.length() > 1){

                //If the values are not ints, returns false
                if (!checkIfNumber(number+adult+children+s_children)){

                    return false;
                }
                if (find_family(stoi(number)) == false){
                    //If the values are left empty, adds 0
                    if (adult.length() < 1){
                        adult = "0";
                    }
                    if (children.length() < 1){
                        children = "0";
                    }
                    if (s_children.length() <1){
                        s_children = "0";
                    }

                    //Adds the family
                    new_family(stoi(number), stoi(adult), stoi(children), stoi(s_children));
                }

            }

            ignoreFirstLine++;
        }

    }

    return true;
}


//Adds new family to the text file
void Info::new_family(int barnumber, int adults, int children, int small_children)
{
    //Change given info to a string that can be used in text file
    std::string fam = "[\n-" + to_string(barnumber) + "\n~" + to_string(adults) + ";" + to_string(children) + ";" + to_string(small_children) + "\n]\n";

    ofstream file;
    file.open("perheLista.txt",std::ios_base::app);
    if (file.is_open()){
        file.write(fam.data(), fam.size());
    }

    file.close();
    Family new_fam;
    new_fam.barNumber_ = barnumber;
    new_fam.adults_ = adults;
    new_fam.children_ = children;
    new_fam.smallChildren_ = small_children;

    allFamilies_.push_back(make_pair(barnumber, new_fam));


}

//Finds the family by given barnumber
//If found, returns true
//If not, returns false
bool Info::find_family(int barnumber)
{

    ifstream file (fileName_);
    string line;

    if (file.peek() == std::ifstream::traits_type::eof() == true){
        return false;
    }

    while(getline(file, line)){

        //Ignores lines that do not contain barnumbers
        if (line.at(0) != '[' || line.at(0) != '~' || line.at(0) != ']'){
            //Erases the first letter of the line and compares it to the barnumer
            if (line.at(0) == '-' && stoi(line.erase(0,1)) == barnumber){
                return true;
            }}
    }

    return false;

}

//Edits family's information
//Finds text file containing every family, copies the information on it into a new one
//When the value to be copied is the one to be edited, instead of copying, takes the new values and inserts them instead of the old ones
//Deletes the old file and the new one replaces it
void Info::edit_family(int barnumber,int adults, int children, int small_children)
{

    ifstream file (fileName_);
    ofstream file2 ("perheLista2.txt");
    string line;
    //vector<string> items;
    bool found = false;

    while(getline(file, line)){

        if(line.at(0) != '-' && found ==false){
            file2 << line + "\n";
        }
        if (line.at(0) =='-')
        {
            if (stoi(line.erase(0,1)) == barnumber){
                file2 << +"-"+line + "\n";
                found = true;
            } else {
                file2 << +"-"+line + "\n";
            }
        }
        else if (found == true){

            if(line.at(0) == '~'){
                file2 << "~"+ to_string(adults) + ";" + to_string(children) + ";" + to_string(small_children) + "\n";
            }
            else {
                file2 << line +"\n";
            }

        }


    }

    file.close();
    file2.close();
    remove("perheLista.txt");
    rename("perheLista2.txt", "perheLista.txt");

}

//Adds items to the family's info
//Finds text file containing every family, copies the information on it into a new one
//When the value to be copied is the one to be edited, instead of copying, takes the new values and inserts them instead of the old ones
//Deletes the old file and the new one replaces it
void Info::add_items(int barnumber, string items)
{

    ifstream file (fileName_);
    ofstream file2 ("perheLista2.txt");
    string line;
    bool found;

    while(getline(file, line)){


        if(line.at(0) != '-' && found ==false){
            file2 << line + "\n";
        }
        if (line.at(0) =='-')
        {

            if (stoi(line.erase(0,1)) == barnumber){
                file2 << +"-"+line + "\n";
                found = true;
            } else {
                file2 << +"-"+line + "\n";
            }
        }
        else if (found == true){

            if (line.at(0) == ']'){

                file2 << "*" + items + "\n" + line + "\n";

                found = false;

            } else
            {
                file2 << line +"\n";
            }

        }


    }
    file.close();
    file2.close();
    remove("perheLista.txt");
    rename("perheLista2.txt", "perheLista.txt");
}

//Finds family's items
string Info::get_items(int barnumber)
{
    ifstream file (fileName_);
    string line;
    string items;
    bool found = false;

    while(getline(file, line)){

        if (line.at(0) =='-')
        {

            if (stoi(line.erase(0,1)) == barnumber){
                found = true;
            }
        }
        if (found == true){

            if (line.at(0) == '*'){
                items += line.erase(0,1) + "\n";
            }
            if (line.at(0) == ']'){
                break;
            }
        }


    }

    return items;
}

//Gets family's values by given barnumber from text file
//Returns values in a string
vector<string> Info::return_val(int barnumber)
{
    vector <string> values;
    ifstream file (fileName_);
    string line;
    bool found = false;
    string found_line = "";

    while(getline(file, line)){

        if (line.at(0) =='-')
        {
            if (stoi(line.erase(0,1)) == barnumber){
                found = true;
            }
        }
        if (found == true){
            string val;
            if(line.at(0) == '~'){
                for (unsigned int i = 1; i < line.length();i++){
                    if (line.at(i)!= ';'){

                        val += line.at(i);
                    } else {

                        values.push_back(val);
                        val = "";
                    }
                }
                values.push_back(val);
            }
        }
    }

    return values;

}
