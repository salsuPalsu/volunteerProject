#ifndef INFO_HH
#define INFO_HH
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <regex>
//#include "main.cpp"
//#include "dialog.h"
using namespace std;


class Info
{
public:
    Info();

    //void readFile(string f_name);

    bool addFromFile(string f_name);

    bool checkIfNumber(const string &word);

    void new_family(int barnumber, int adults, int children, int small_children);

    bool find_family(int barnumber);

    void edit_family(int barnumber, int adults, int children, int small_children);

    void add_items(int barnumber, string items);

    string get_items(int barnumber);

    vector<string> return_val(int barnumber);

private:

    struct Family {

        int barNumber_;
        int adults_= 0;
        int children_ = 0;
        int smallChildren_ =0;
    };


    vector<pair<int, Family>> allFamilies_;

    string fileName_ = "perheLista.txt";
   // string excel_name = "testi.csv";


};

#endif // INFO_HH
