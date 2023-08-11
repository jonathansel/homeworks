#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::string_literals::operator""s;
using std::vector;
using std::map;
using std::array;

//when to use string literal suffix 
int main() {

    vector<string> adjective_vec{};
    adjective_vec.reserve(2);

    const map<string, string> season_map = {{"spring", "STL guru"},
                                            {"summer", "C++ expert"},
                                            {"autumn", "winter"},
                                            {"winter", "software design hero"}};

    const array<string, 3UL> endings{"eats UB for breakfast", "finds errors quicker than the compiler","is not afraid of C++ error messages"};

    cout << "Welcome to the fortune teller program!"s << endl;
    cout << "Please enter your name: ";
    string name{}; // Init empty
    cin >> name;   // Read name
    auto name_length{name.length()};

    cout << "Please enter the time of year when you were born:\n(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
    string season{}; // Init empty
    cin >> season;   // Read season
    // cout << "Chosen noun: " << season_map.at(season) << endl;

    cout << "Please enter an adjective: ";
    string adjective{}; // Init empty
    cin >> adjective;   // Read adjective
    adjective_vec.emplace_back(adjective);


    cout << "Please enter another adjective: ";
    string another_adjective{}; // Init empty
    cin >> another_adjective;   // Read adjevtive 2
    adjective_vec.emplace_back(adjective);

    auto chosen_adjective = adjective_vec[name_length % adjective_vec.size()];
    auto chosen_noun = season_map.at(season);
    auto chosen_ending = endings[name_length % endings.size()];

    cout << name << ", the " << chosen_adjective << " " << chosen_noun << " that " << chosen_ending << endl;










}