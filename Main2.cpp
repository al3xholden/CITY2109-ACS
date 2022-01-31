#include <iostream> //required for cin and cout
#include <conio.h> //required for getch()
#include <fstream>
#include <Windows.h> // Win32 API functions#


using namespace std;

class cardID;

class buildingID
{

public:
private:
protected:

};

class roomID;

void swipeCard_Log()
{
    ofstream LogFile;
    LogFile.open("LogFile.txt");
    //LogFile << "Writing this to a file.\n";
    LogFile.close();
    return 0;
};

class cardReader;

void print()
{

    if (startPointer)
    {
        Call* callPos = startPointer;
        while (callPos)
        {
            if (callPos->callID < 10) cout << " | " << callPos->callID << "  | " << callPos->phoneNumber << "  | " << callPos->stopwatch.elapsed_time() << " seconds" << endl; //Adjusted a single space for tidiness
            else cout << " | " << callPos->callID << " | " << callPos->phoneNumber << "  | " << callPos->stopwatch.elapsed_time() << " seconds" << endl;
            if (callPos->nextCall == startPointer) break;
            else callPos = callPos->nextCall;
        }
    }
    else cout << " Please push to begin. " << endl;

};



void main()

{



    SetConsoleTitle(TEXT("CITY2108 - Assignment 2 - Implementation - Alexander Holden")); // Sets title of console application
    system("color 2");  // Sets colour of text into green (2)

    cout << "CITY2108 - Software Development - Assignment 2" << endl;;
    cout << "Student : Alexander Holden" << endl;
    cout << "Press any key to continue.";

    _getch(); // get char
    system("CLS"); // Clear Screen
    system("color F");  // Sets colour of text into white (F)

    cout << " | ID   | Name       | Card Type     | Emergency " << endl;
    cout << " +======+============+===============+==========\n";

    // MENU OPTIONS 
    int menuchoice = 0; // Menu choice - Default = 0
    cout << endl;
    cout << "" << endl;
    cout << "1.    View and manage rooms " << endl;
    cout << "2.    View and manage ID cards" << endl;
    cout << "3.    Simulate a card swipe " << endl;
    cout << "4.    Put a room in or out of emergency state" << endl;
    cout << "5.    View swipe log" << endl;
    cout << "6     Manage preferences" << endl;
    cout << "0     Exit the program" << endl;
    cout << endl;
    cout << "Choice : ";
    cin >> menuchoice;
    cout << endl;

    if (menuchoice == 1) // View and manage rooms
    {

    }

    if (menuchoice == 2) // View and manage ID cards
    {

    }

    if (menuchoice == 3) // Simulate a card swipe
    {

    }

    if (menuchoice == 4) // Put a room in or out of emergency state
    {

    }

    if (menuchoice == 5) // View swipe log
    {

    }

    if (menuchoice == 6) // Manage preferences
    {

    }

    else // Exit the program
    {
        system("exit");
    
    } 
}