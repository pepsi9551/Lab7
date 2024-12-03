#include <iostream>
#include <string>
using namespace std;

//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

string name;
string moviename;
string date;
string text;
int studentID,x;



void gear(int x){
    x = (x/10000000) - 12;
    cout << "Fahsai: I think you may be GEAR "<< x <<". I have a free movie ticket for you.\n";
}

int main(){
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin, name);
    cin.ignore();
    cout << "Fahsai: Wow!!! " << name <<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> studentID;
    gear(studentID);
    cin.ignore();
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin, moviename);
    cin.ignore();
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin, date);
    cin.ignore();
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching "<< moviename <<" with you." << endl;
    cout << name << ": ";
    getline(cin, text);
    cin.ignore();
    cout << "Fahsai: 555+ see you Next Monday. Bye Bye \\(^ ^)/\n";




    return 0;
}

